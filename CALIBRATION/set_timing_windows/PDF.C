
void ProcessPad(TPad *pad, TString canvas_name) {
    if (!pad) return;

    TList *primitives = pad->GetListOfPrimitives();
    TIter next(primitives);
    TObject *obj;
    while ((obj = next())) {
        if (obj->InheritsFrom("TH1")) {
            TH1 *hist = (TH1*)obj;
            if(canvas_name.Contains("hcal")) hist->GetXaxis()->SetRangeUser(-100, 50);
            if(canvas_name.Contains("hcer")) hist->GetXaxis()->SetRangeUser(0, 300);
            if(canvas_name.Contains("hodo")) hist->GetXaxis()->SetRangeUser(-100, 100);
        }
        else if (obj->InheritsFrom("TPad")) {
            TPad *subPad = (TPad*)obj;
            ProcessPad(subPad, canvas_name);
        }
    }
}

void Make_DC_Plots(TString canvas_name){
    const Int_t NofRuns = 27;
    Int_t run_list[NofRuns]={1753, 1823, 
                            2770, 2776, 2834, 
                            3389, 3635, 
                            3430, 3654, 
                            4064, 4122, 
                            4088, 4180, 
                            4226, 4458, 
                            4254, 4551, 
                            4972, 5098, 
                            5540, 5894, 
                            5904, 5974, 
                            6190, 6402, 
                            6571, 6687};

    TString KinC[NofRuns]={"KinC_x60_3", "KinC_x60_3",
                        "KinC_x60_3'", "KinC_x60_3'", "KinC_x60_3'",
                        "KinC_x60_2", "KinC_x60_2",
                        "KinC_x60_2'", "KinC_x60_2'",
                        "KinC_x60_3a", "KinC_x60_3a",
                        "KinC_x60_3b", "KinC_x60_3b",
                        "KinC_x60_4a", "KinC_x60_4a",
                        "KinC_x60_4b", "KinC_x60_4b",
                        "KinC_x25_4", "KinC_x25_4",
                        "KinC_x60_1", "KinC_x60_1",
                        "KinC_x25_1", "KinC_x25_1",
                        "KinC_x60_2b", "KinC_x60_2b",
                        "KinC_x25_3", "KinC_x25_3"};

    TString PS[NofRuns]={"ps6=0", "ps3=1",
                        "ps6=0", "ps3=2", "ps4=0",
                        "ps6=0", "ps4=0",
                        "ps6=0", "ps4=0",
                        "ps6=0", "ps4=0",
                        "ps6=0", "ps4=0",
                        "ps6=0", "ps4=0",
                        "ps6=0", "ps4=0",
                        "ps6=0", "ps4=3",
                        "ps4=0", "ps4=0",
                        "ps4=0", "ps4=0",
                        "ps4=0", "ps4=0",
                        "ps4=0", "ps4=0"};

    const Int_t NofDCPlanes = 12;
    TString plane_list[NofDCPlanes]={"1u1", "1u2", "1x1", "1x2", "1v1", "1v2", "2u1", "2u2", "2x1", "2x2", "2v1", "2v2"};
    Int_t hdc_tdc_min_win[NofDCPlanes], hdc_tdc_max_win[NofDCPlanes];

    std::ifstream file_param("../../PARAM/HMS/DC/hdc_cuts_nps23.param");
    if(!file_param.is_open()) {
        std::cerr << "Could not open the file: " << "../../PARAM/HMS/DC/hdc_cuts_nps23.param" << std::endl;
        return;
    }
    std::string line;
    bool foundMinWin = false, foundMaxWin = false;

    while (std::getline(file_param, line)){
        std::string key;
        std::istringstream iss(line);
        
        if(line.find("hdc_tdc_min_win") != std::string::npos && line.find(";") == std::string::npos){
            foundMinWin = true;
            iss >> key >> key >> hdc_tdc_min_win[0] >> key  >> hdc_tdc_min_win[1] >> key >> hdc_tdc_min_win[2] >> key >> hdc_tdc_min_win[3] >> key >> hdc_tdc_min_win[4] >> key >> hdc_tdc_min_win[5];
            continue;
        }
        if(foundMinWin==true && foundMaxWin==false){
            foundMinWin = false;
            iss >> hdc_tdc_min_win[6] >> key  >> hdc_tdc_min_win[7] >> key >> hdc_tdc_min_win[8] >> key >> hdc_tdc_min_win[9] >> key >> hdc_tdc_min_win[10] >> key >> hdc_tdc_min_win[11];
            continue;
        }

        if(line.find("hdc_tdc_max_win") != std::string::npos && line.find(";") == std::string::npos){
            foundMaxWin = true;
            iss >> key >> key >> hdc_tdc_max_win[0] >> key  >> hdc_tdc_max_win[1] >> key >> hdc_tdc_max_win[2] >> key >> hdc_tdc_max_win[3] >> key >> hdc_tdc_max_win[4] >> key >> hdc_tdc_max_win[5];
            continue;
        }
        if(foundMaxWin==true && foundMinWin==false){
            foundMaxWin = false;
            iss >> hdc_tdc_max_win[6] >> key  >> hdc_tdc_max_win[7] >> key >> hdc_tdc_max_win[8] >> key >> hdc_tdc_max_win[9] >> key >> hdc_tdc_max_win[10] >> key >> hdc_tdc_max_win[11];
            continue;
        }
    }
    file_param.close();
    // for(int k =0;k<12;k++) cout<<hdc_tdc_min_win[k]<<"\t"<<hdc_tdc_max_win[k]<<endl;


    TString Output_Name_begin = "PDFs/" + canvas_name + "_canvases.pdf[";
    TString Output_Name = "PDFs/" + canvas_name + "_canvases.pdf";
    TString Output_Name_end = "PDFs/" + canvas_name + "_canvases.pdf]";
    TCanvas* output_canvas = new TCanvas("output_canvas", "", 1200, 800);
    output_canvas->Print(Output_Name_begin);

    for(int i=0;i<NofRuns;i++){
    // for(int i=0;i<2;i++){
        // TFile* file = TFile::Open(Form("../../ROOTfiles/COIN/PRODUCTION/nps_hms_notiming_window_%d_-1.root",run_list[i]));
        TFile* file = TFile::Open(Form("../../ROOTfiles/ROOTFiles/nps_hms_notiming_window_%d_-1.root",run_list[i]));
        if (!file || file->IsZombie()) {
            std::cerr << "Can't open: " << run_list[i] << std::endl;
            delete file;
            continue;
        }

        // TTree *tree = (TTree*)file->Get("T");

        TCanvas* canvas = new TCanvas("c","c",1200,900);
        canvas->Divide(3, 4);

        // hdc_1u1_rawtdc
        for(int j=0;j<NofDCPlanes;j++){
            TString hist_name = "hdc_" + plane_list[j] + "_rawtdc_nhit1";
            TString hist_name_2 = "hdc_" + plane_list[j] + "_rawtdc_nhit2";
            TH1F *hist = (TH1F*)file->Get(hist_name);
            TH1F *hist_2 = (TH1F*)file->Get(hist_name_2);
            if (!hist) {
                std::cerr << "Error getting histogram" << std::endl;
                file->Close();
                return;
            }
            canvas->cd(j+1);
            gPad->SetLogy(1);

            hist->GetXaxis()->SetRangeUser(-14000,-10000);
            hist_2->GetXaxis()->SetRangeUser(-14000,-10000);
            
            hist->Draw();
            hist_2->SetLineColor(kRed);
            hist_2->Draw("Same");

            double yMin = hist->GetMinimum();
            double yMax = hist->GetMaximum();

            TLine *line1 = new TLine(hdc_tdc_min_win[j], yMin, hdc_tdc_min_win[j], yMax);
            TLine *line2 = new TLine(hdc_tdc_max_win[j], yMin, hdc_tdc_max_win[j], yMax);
            
            line1->SetLineColor(kGreen);
            line2->SetLineColor(kGreen);

            line1->Draw("same");
            line2->Draw("same");
        }

        canvas->Update();
        canvas->Draw();
        TLatex label;
        canvas->cd();
        TString Print_info = Form("Run %d, ",run_list[i]) + KinC[i] + ", " + PS[i];
        label.SetNDC();
        label.SetTextSize(0.02);
        label.DrawLatex(0.01, 0.01, Print_info);
        canvas->Print(Output_Name);

        file->Close();
        delete file;

    }

    //   KEY: TTree    T;1     Hall A Analyzer Output DST
    //   KEY: TH1F     hdc_1u1_rawtdc;1        HMS DC 1u1 Raw TDC
    //   KEY: TH1F     hdc_1u1_nhit;1  HMS DC 1U1 NHit
    //   KEY: TH1F     hdc_1u1_rawtdc_nhit1;1  HMS DC 1u1 Raw TDC, nhit=1
    //   KEY: TH1F     hdc_1u1_rawtdc_nhit2;1  HMS DC 1u1 Raw TDC, nhit=2
    //   KEY: TH1F     hdc_1u1_rawtdc_nhit3;1  HMS DC 1u1 Raw TDC, nhit=3

    output_canvas->Print(Output_Name_end);
    delete output_canvas;
}

void Generate_PDF(TString canvas_name){
    const Int_t NofRuns = 27;
    Int_t run_list[NofRuns]={1753, 1823, 
                            2770, 2776, 2834, 
                            3389, 3635, 
                            3430, 3654, 
                            4064, 4122, 
                            4088, 4180, 
                            4226, 4458, 
                            4254, 4551, 
                            4972, 5098, 
                            5540, 5894, 
                            5904, 5974, 
                            6190, 6402, 
                            6571, 6687};

    TString KinC[NofRuns]={"KinC_x60_3", "KinC_x60_3",
                        "KinC_x60_3'", "KinC_x60_3'", "KinC_x60_3'",
                        "KinC_x60_2", "KinC_x60_2",
                        "KinC_x60_2'", "KinC_x60_2'",
                        "KinC_x60_3a", "KinC_x60_3a",
                        "KinC_x60_3b", "KinC_x60_3b",
                        "KinC_x60_4a", "KinC_x60_4a",
                        "KinC_x60_4b", "KinC_x60_4b",
                        "KinC_x25_4", "KinC_x25_4",
                        "KinC_x60_1", "KinC_x60_1",
                        "KinC_x25_1", "KinC_x25_1",
                        "KinC_x60_2b", "KinC_x60_2b",
                        "KinC_x25_3", "KinC_x25_3"};

    TString PS[NofRuns]={"ps6=0", "ps3=1",
                        "ps6=0", "ps3=2", "ps4=0",
                        "ps6=0", "ps4=0",
                        "ps6=0", "ps4=0",
                        "ps6=0", "ps4=0",
                        "ps6=0", "ps4=0",
                        "ps6=0", "ps4=0",
                        "ps6=0", "ps4=0",
                        "ps6=0", "ps4=3",
                        "ps4=0", "ps4=0",
                        "ps4=0", "ps4=0",
                        "ps4=0", "ps4=0",
                        "ps4=0", "ps4=0"};

    TString Output_Name_begin = "PDFs/" + canvas_name + "_canvases.pdf[";
    TString Output_Name = "PDFs/" + canvas_name + "_canvases.pdf";
    TString Output_Name_end = "PDFs/" + canvas_name + "_canvases.pdf]";
    TCanvas* output_canvas = new TCanvas("output_canvas", "", 1200, 800);
    output_canvas->Print(Output_Name_begin);

    for(int i=0;i<NofRuns;i++){
    // for(int i=0;i<2;i++){
        TFile* file = TFile::Open(Form("ROOTfiles/%d.root",run_list[i]));
        if (!file || file->IsZombie()) {
            std::cerr << "Can't open: " << run_list[i] << std::endl;
            delete file;
            continue;
        }

        TCanvas* canvas = (TCanvas*)file->Get(canvas_name);
        if (!canvas) {
            std::cerr << "Can't find "<< canvas_name << " in " << run_list[i] << std::endl;
            file->Close();
            delete file;
            continue;
        }
        canvas->cd();

        ProcessPad(canvas, canvas_name);

        canvas->Draw();
        TLatex label;
        TString Print_info = Form("Run %d, ",run_list[i]) + KinC[i] + ", " + PS[i];
        label.SetNDC();
        label.SetTextSize(0.02);
        label.DrawLatex(0.01, 0.01, Print_info);
        canvas->Print(Output_Name);

        file->Close();
        delete file;
    }

    output_canvas->Print(Output_Name_end);
    delete output_canvas;
}

void PDF(){
    // Generate_PDF("hhodo_1x_pos_diff_time_1");
    // Generate_PDF("hhodo_1x_pos_diff_time_2");
    // Generate_PDF("hhodo_1x_neg_diff_time_1");
    // Generate_PDF("hhodo_1x_neg_diff_time_2");
    // Generate_PDF("hhodo_1y_pos_diff_time_1");
    // Generate_PDF("hhodo_1y_neg_diff_time_1");
    // Generate_PDF("hhodo_2x_pos_diff_time_1");
    // Generate_PDF("hhodo_2x_pos_diff_time_2");
    // Generate_PDF("hhodo_2x_neg_diff_time_1");
    // Generate_PDF("hhodo_2x_neg_diff_time_2");
    // Generate_PDF("hhodo_2y_pos_diff_time_1");
    // Generate_PDF("hhodo_2y_neg_diff_time_1");

    // Generate_PDF("hcer_diff_time_1");

    Generate_PDF("hcal_hA_pos_diff_time_1");
    Generate_PDF("hcal_hB_pos_diff_time_1");
    Generate_PDF("hcal_hC_pos_diff_time_1");
    Generate_PDF("hcal_hD_pos_diff_time_1");
    Generate_PDF("hcal_hA_neg_diff_time_1");
    Generate_PDF("hcal_hB_neg_diff_time_1");

    // Make_DC_Plots("hdc_rawtdc");
}



