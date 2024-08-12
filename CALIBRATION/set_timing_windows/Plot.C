#include "timing_window_setup.C"
#include "T_new.C"
// #include "T.C"

void Plot(){
    const Int_t NofRuns = 27;
    Int_t run_list[NofRuns]={1753, 1823, 2770, 2776, 2834, 4064, 4122, 4088, 4180, 4226, 4458, 4254, 4551, 4972, 5098, 5540, 5894, 5904, 5974, 6190, 6402, 6571, 6687, 3389, 3635, 3430, 3654};
    // const Int_t NofRuns = 24;
    // Int_t run_list[NofRuns]={1753, 1823, 2770, 2776, 2834, 4064, 4122, 4088, 4180, 4226, 4458, 4254, 4551, 4972, 5098, 5540, 5894, 5904, 5974, 6190, 3389, 3635, 3430, 3654};
    for(int i=0;i<NofRuns;i++){
        // run_hms_timing_windows(Form("ROOTfiles/COIN/PRODUCTION/nps_hms_notiming_window_%d_-1.root",run_list[i]),Form("CALIBRATION/set_timing_windows/ROOTfiles/%d.root",run_list[i]),run_list[i]);
        run_hms_timing_windows(Form("ROOTfiles/ROOTFiles/nps_hms_notiming_window_%d_-1.root",run_list[i]),Form("CALIBRATION/set_timing_windows/ROOTfiles/%d.root",run_list[i]),run_list[i]);
        // bool newWindows=false, double width=40., TString spec="hms"
    }

    // run_hms_timing_windows(Form("ROOTfiles/ROOTFiles/nps_hms_notiming_window_%d_-1.root",1753),Form("CALIBRATION/set_timing_windows/ROOTfiles/%d.root",1753),1753,true,60.);



    // T_new t;
    // t.Loop();

    // T t;
    // t.Loop();

    // const Int_t NofRuns = 1;
    // Int_t run_list[NofRuns]={6810};
    // for(int i=0;i<NofRuns;i++){
    //     run_hms_timing_windows(Form("ROOTfiles/COIN/50k/nps_hms_notiming_window_%d_50000.root",run_list[i]),Form("CALIBRATION/set_timing_windows/ROOTfiles/%d.root",run_list[i]),run_list[i]);
    // }

    // const Int_t NofRuns = 1;
    // Int_t run_list[NofRuns]={6991};
    // for(int i=0;i<NofRuns;i++){
    //     run_hms_timing_windows(Form("ROOTfiles/COIN/50k/nps_hms_notiming_window_%d_1000000.root",run_list[i]),Form("CALIBRATION/set_timing_windows/ROOTfiles/%d.root",run_list[i]),run_list[i]);
    // }

}