#define T_cxx
#include "T.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void T::Loop()
{
//   In a ROOT session, you can do:
//      root> .L T.C
//      root> T t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

   fChain->SetBranchStatus("*",0);
   fChain->SetBranchStatus("T.hms.hEL_REAL_tdcMultiplicity",1);
   fChain->SetBranchStatus("T.hms.hEL_REAL_vecTdcTime",1);
   fChain->SetBranchStatus("T.hms.hEL_REAL_vecTdcTimeRaw",1);
   fChain->SetBranchStatus("T.hms.hEL_REAL_tdcTimeRaw",1);
   
   fChain->SetBranchStatus("T.hms.hEL_CLEAN_tdcMultiplicity",1);
   fChain->SetBranchStatus("T.hms.hEL_CLEAN_vecTdcTime",1);
   fChain->SetBranchStatus("T.hms.hEL_CLEAN_vecTdcTimeRaw",1);
   fChain->SetBranchStatus("T.hms.hEL_CLEAN_tdcTimeRaw",1);

   fChain->SetBranchStatus("T.hms.hEL_LO_tdcMultiplicity",1);
   fChain->SetBranchStatus("T.hms.hEL_LO_vecTdcTime",1);
   fChain->SetBranchStatus("T.hms.hEL_LO_vecTdcTimeRaw",1);
   fChain->SetBranchStatus("T.hms.hEL_LO_tdcTimeRaw",1);

   fChain->SetBranchStatus("T.hms.hEL_HI_tdcMultiplicity",1);
   fChain->SetBranchStatus("T.hms.hEL_HI_vecTdcTime",1);
   fChain->SetBranchStatus("T.hms.hEL_HI_vecTdcTimeRaw",1);
   fChain->SetBranchStatus("T.hms.hEL_HI_tdcTimeRaw",1);

   fChain->SetBranchStatus("H.cal.1pr.goodPosAdcMult",1);
   fChain->SetBranchStatus("H.cal.1pr.goodPosAdcTdcDiffTime",1);

   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   TH1F* h_cal = new TH1F("hcal","hcal_1pr_goodPosAdcTdcDiffTime (PMT1);Channels 0.0625 ns / Ch;Counts",750,-100,50);

   TH1F* h_EL_HI = new TH1F("h_EL_HI","h_EL_HI",300,300,330);
   TH1F* h_EL_LO = new TH1F("h_EL_LO","h_EL_LO",300,300,330);
   TH1F* h_EL_REAL = new TH1F("h_EL_REAL","h_EL_REAL; TdcTime (ns); Counts",300,320,350);
   h_cal->SetLineColor(kBlack);
   h_EL_HI->SetLineColor(kBlack);
   h_EL_LO->SetLineColor(kBlack);
   h_EL_REAL->SetLineColor(kBlack);

   TH1F* h_cal_no_CLEAN = new TH1F("hcal_no_CLEAN","hcal_1pr_goodPosAdcTdcDiffTime (PMT1);Channels 0.0625 ns / Ch;Counts",750,-100,50);
   TH1F* h_EL_HI_no_CLEAN = new TH1F("h_EL_HI_no_CLEAN","h_EL_HI; TdcTime (ns); Counts",300,300,330);
   TH1F* h_EL_LO_no_CLEAN = new TH1F("h_EL_LO_no_CLEAN","h_EL_LO; TdcTime (ns); Counts",300,300,330);
   TH1F* h_EL_REAL_no_CLEAN = new TH1F("h_EL_REAL_no_CLEAN","h_EL_REAL; TdcTime (ns); Counts",300,320,350);

   TH1F* h_cal_HI_only = new TH1F("hcal_HI_only","hcal_1pr_goodPosAdcTdcDiffTime (PMT1);Channels 0.0625 ns / Ch;Counts",750,-100,50);
   h_cal_HI_only->SetLineColor(kRed);
   TH1F* h_EL_HI_HI_only = new TH1F("h_EL_HI_HI_only","h_EL_HI; TdcTime (ns); Counts",300,300,330);
   h_EL_HI_HI_only->SetLineColor(kRed);
   TH1F* h_EL_REAL_HI_only = new TH1F("h_EL_REAL_HI_only","h_EL_REAL; TdcTime (ns); Counts",300,320,350);
   h_EL_REAL_HI_only->SetLineColor(kRed);

   TH1F* h_cal_LO_only = new TH1F("hcal_LO_only","hcal_1pr_goodPosAdcTdcDiffTime (PMT1);Channels 0.0625 ns / Ch;Counts",750,-100,50);
   TH1F* h_EL_LO_LO_only = new TH1F("h_EL_LO_LO_only","h_EL_LO; TdcTime (ns); Counts",300,300,330);
   TH1F* h_EL_REAL_LO_only = new TH1F("h_EL_REAL_LO_only","h_EL_REAL; TdcTime (ns); Counts",300,320,350);
   h_cal_LO_only->SetLineColor(kBlue);
   h_EL_LO_LO_only->SetLineColor(kBlue);
   h_EL_REAL_LO_only->SetLineColor(kBlue);


   TH1F* h_test = new TH1F("h_test","h_test",10,-5,5);


   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
   // for (Long64_t jentry=0; jentry<5000;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      
      // if(H_cal_1pr_goodPosAdcMult[0]<0.5 || H_cal_1pr_goodPosAdcMult[0]>1.5) continue;
      if(T_hms_hEL_REAL_tdcMultiplicity<0.5 || T_hms_hEL_REAL_tdcMultiplicity>1.5) continue;
      // cout<<H_cal_1pr_goodPosAdcMult[0]<<endl;

      h_cal->Fill(H_cal_1pr_goodPosAdcTdcDiffTime[0]);
      h_EL_HI->Fill(T_hms_hEL_HI_vecTdcTime[0]);
      h_EL_LO->Fill(T_hms_hEL_LO_vecTdcTime[0]);
      h_EL_REAL->Fill(T_hms_hEL_REAL_vecTdcTime[0]);


      if(T_hms_hEL_CLEAN_tdcMultiplicity>0.5) continue;
      // if(T_hms_hEL_CLEAN_tdcMultiplicity<0.5) continue;

      if(T_hms_hEL_LO_tdcMultiplicity>0.5){
         h_cal_LO_only->Fill(H_cal_1pr_goodPosAdcTdcDiffTime[0]);
         h_EL_LO_LO_only->Fill(T_hms_hEL_LO_vecTdcTime[0]);
         h_EL_REAL_LO_only->Fill(T_hms_hEL_REAL_vecTdcTime[0]);
      }

      if(T_hms_hEL_HI_tdcMultiplicity>0.5){
         h_cal_HI_only->Fill(H_cal_1pr_goodPosAdcTdcDiffTime[0]);
         h_EL_HI_HI_only->Fill(T_hms_hEL_HI_vecTdcTime[0]);
         h_EL_REAL_HI_only->Fill(T_hms_hEL_REAL_vecTdcTime[0]);
      }


      // cout<<T_hms_hEL_LO_tdcMultiplicity<<"\t"<<T_hms_hEL_HI_tdcMultiplicity<<endl;

      // h_test->Fill(T_hms_hEL_REAL_tdcMultiplicity);
      h_test->Fill(T_hms_hEL_LO_tdcMultiplicity-T_hms_hEL_HI_tdcMultiplicity); //Ndata_T_hms_hEL_LO_vecTdcTimeRaw
      // if(T_hms_hEL_LO_tdcMultiplicity<0.5&&T_hms_hEL_LO_tdcMultiplicity>1.5) continue;

      
      // for(int i=0;i<13;i++) h->Fill(H_cal_1pr_goodPosAdcTdcDiffTime[i]);
      
      // if(T_hms_hEL_HI_vecTdcTime[0]>305&&T_hms_hEL_HI_vecTdcTime[0]<310) h_cal->Fill(H_cal_1pr_goodPosAdcTdcDiffTime[2]);
      // if(T_hms_hEL_LO_vecTdcTime[0]>313&&T_hms_hEL_LO_vecTdcTime[0]<314) h_cal->Fill(H_cal_1pr_goodPosAdcTdcDiffTime[2]);

      // if(T_hms_hEL_LO_vecTdcTime[0]<314.4) continue;

      // if(T_hms_hEL_REAL_vecTdcTime[0]>326.5) continue;

      // for(int i=0;i<2;i++){
      //    h_EL_HI->Fill(T_hms_hEL_HI_vecTdcTime[i]);
      //    h_EL_LO->Fill(T_hms_hEL_LO_vecTdcTime[i]);
      // }

   }

   TFile *My_output = new TFile("Cal_Check_plots/my_output.root", "RECREATE");
   h_test->Write();
   h_cal->Write();
   h_EL_HI->Write();
   h_EL_LO->Write();
   h_EL_REAL->Write();
   My_output->Close();
   delete My_output;

   TCanvas* c = new TCanvas("c","c",1200,800);
   gPad->SetLogy(1);
   h_cal->Draw();
   h_cal_HI_only->Draw("Same");
   h_cal_LO_only->Draw("Same");
   c->SaveAs("Cal_Check_plots/Calo.pdf");

   TCanvas* c_EL_HI = new TCanvas("c_EL_HI","c_EL_HI",1200,800);
   gPad->SetLogy(1);
   h_EL_HI->Draw();
   h_EL_HI_HI_only->Draw("Same");
   c_EL_HI->SaveAs("Cal_Check_plots/c_EL_HI.pdf");

   TCanvas* c_EL_LO = new TCanvas("c_EL_LO","c_EL_LO",1200,800);
   gPad->SetLogy(1);
   h_EL_LO->Draw();
   h_EL_LO_LO_only->Draw("Same");
   c_EL_LO->SaveAs("Cal_Check_plots/c_EL_LO.pdf");

   TCanvas* c_EL_REAL = new TCanvas("c_EL_REAL","c_EL_REAL",1200,800);
   gPad->SetLogy(1);
   h_EL_REAL->Draw();
   h_EL_REAL_HI_only->Draw("Same");
   h_EL_REAL_LO_only->Draw("Same");
   c_EL_REAL->SaveAs("Cal_Check_plots/c_EL_REAL.pdf");
}
