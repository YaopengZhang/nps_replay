//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Jul 29 04:27:55 2024 by ROOT version 6.30/04
// from TTree T/Hall A Analyzer Output DST
// found on file: ../../ROOTfiles/NPS/TIMING/nps_hms_notiming_window_1753_-1.root
//////////////////////////////////////////////////////////

#ifndef T_new_h
#define T_new_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "THaEvent.h"
#include "THaEvent.h"

class T_new {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           Ndata_H_cal_1pr_emean;
   Double_t        H_cal_1pr_emean[13];   //[Ndata.H.cal.1pr.emean]
   Int_t           Ndata_H_cal_1pr_eneg;
   Double_t        H_cal_1pr_eneg[13];   //[Ndata.H.cal.1pr.eneg]
   Int_t           Ndata_H_cal_1pr_epos;
   Double_t        H_cal_1pr_epos[13];   //[Ndata.H.cal.1pr.epos]
   Int_t           Ndata_H_cal_1pr_goodNegAdcMult;
   Double_t        H_cal_1pr_goodNegAdcMult[13];   //[Ndata.H.cal.1pr.goodNegAdcMult]
   Int_t           Ndata_H_cal_1pr_goodNegAdcPed;
   Double_t        H_cal_1pr_goodNegAdcPed[13];   //[Ndata.H.cal.1pr.goodNegAdcPed]
   Int_t           Ndata_H_cal_1pr_goodNegAdcPulseAmp;
   Double_t        H_cal_1pr_goodNegAdcPulseAmp[13];   //[Ndata.H.cal.1pr.goodNegAdcPulseAmp]
   Int_t           Ndata_H_cal_1pr_goodNegAdcPulseInt;
   Double_t        H_cal_1pr_goodNegAdcPulseInt[13];   //[Ndata.H.cal.1pr.goodNegAdcPulseInt]
   Int_t           Ndata_H_cal_1pr_goodNegAdcPulseIntRaw;
   Double_t        H_cal_1pr_goodNegAdcPulseIntRaw[13];   //[Ndata.H.cal.1pr.goodNegAdcPulseIntRaw]
   Int_t           Ndata_H_cal_1pr_goodNegAdcPulseTime;
   Double_t        H_cal_1pr_goodNegAdcPulseTime[13];   //[Ndata.H.cal.1pr.goodNegAdcPulseTime]
   Int_t           Ndata_H_cal_1pr_goodNegAdcTdcDiffTime;
   Double_t        H_cal_1pr_goodNegAdcTdcDiffTime[13];   //[Ndata.H.cal.1pr.goodNegAdcTdcDiffTime]
   Int_t           Ndata_H_cal_1pr_goodPosAdcMult;
   Double_t        H_cal_1pr_goodPosAdcMult[13];   //[Ndata.H.cal.1pr.goodPosAdcMult]
   Int_t           Ndata_H_cal_1pr_goodPosAdcPed;
   Double_t        H_cal_1pr_goodPosAdcPed[13];   //[Ndata.H.cal.1pr.goodPosAdcPed]
   Int_t           Ndata_H_cal_1pr_goodPosAdcPulseAmp;
   Double_t        H_cal_1pr_goodPosAdcPulseAmp[13];   //[Ndata.H.cal.1pr.goodPosAdcPulseAmp]
   Int_t           Ndata_H_cal_1pr_goodPosAdcPulseInt;
   Double_t        H_cal_1pr_goodPosAdcPulseInt[13];   //[Ndata.H.cal.1pr.goodPosAdcPulseInt]
   Int_t           Ndata_H_cal_1pr_goodPosAdcPulseIntRaw;
   Double_t        H_cal_1pr_goodPosAdcPulseIntRaw[13];   //[Ndata.H.cal.1pr.goodPosAdcPulseIntRaw]
   Int_t           Ndata_H_cal_1pr_goodPosAdcPulseTime;
   Double_t        H_cal_1pr_goodPosAdcPulseTime[13];   //[Ndata.H.cal.1pr.goodPosAdcPulseTime]
   Int_t           Ndata_H_cal_1pr_goodPosAdcTdcDiffTime;
   Double_t        H_cal_1pr_goodPosAdcTdcDiffTime[13];   //[Ndata.H.cal.1pr.goodPosAdcTdcDiffTime]
   Int_t           Ndata_H_cal_1pr_negAdcCounter;
   Double_t        H_cal_1pr_negAdcCounter[14];   //[Ndata.H.cal.1pr.negAdcCounter]
   Int_t           Ndata_H_cal_1pr_negAdcErrorFlag;
   Double_t        H_cal_1pr_negAdcErrorFlag[14];   //[Ndata.H.cal.1pr.negAdcErrorFlag]
   Int_t           Ndata_H_cal_1pr_negAdcPed;
   Double_t        H_cal_1pr_negAdcPed[14];   //[Ndata.H.cal.1pr.negAdcPed]
   Int_t           Ndata_H_cal_1pr_negAdcPedRaw;
   Double_t        H_cal_1pr_negAdcPedRaw[14];   //[Ndata.H.cal.1pr.negAdcPedRaw]
   Int_t           Ndata_H_cal_1pr_negAdcPulseAmp;
   Double_t        H_cal_1pr_negAdcPulseAmp[14];   //[Ndata.H.cal.1pr.negAdcPulseAmp]
   Int_t           Ndata_H_cal_1pr_negAdcPulseAmpRaw;
   Double_t        H_cal_1pr_negAdcPulseAmpRaw[14];   //[Ndata.H.cal.1pr.negAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_1pr_negAdcPulseInt;
   Double_t        H_cal_1pr_negAdcPulseInt[14];   //[Ndata.H.cal.1pr.negAdcPulseInt]
   Int_t           Ndata_H_cal_1pr_negAdcPulseIntRaw;
   Double_t        H_cal_1pr_negAdcPulseIntRaw[14];   //[Ndata.H.cal.1pr.negAdcPulseIntRaw]
   Int_t           Ndata_H_cal_1pr_negAdcPulseTime;
   Double_t        H_cal_1pr_negAdcPulseTime[14];   //[Ndata.H.cal.1pr.negAdcPulseTime]
   Int_t           Ndata_H_cal_1pr_negAdcPulseTimeRaw;
   Double_t        H_cal_1pr_negAdcPulseTimeRaw[14];   //[Ndata.H.cal.1pr.negAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_1pr_negAdcSampPed;
   Double_t        H_cal_1pr_negAdcSampPed[1];   //[Ndata.H.cal.1pr.negAdcSampPed]
   Int_t           Ndata_H_cal_1pr_negAdcSampPedRaw;
   Double_t        H_cal_1pr_negAdcSampPedRaw[1];   //[Ndata.H.cal.1pr.negAdcSampPedRaw]
   Int_t           Ndata_H_cal_1pr_negAdcSampPulseAmp;
   Double_t        H_cal_1pr_negAdcSampPulseAmp[1];   //[Ndata.H.cal.1pr.negAdcSampPulseAmp]
   Int_t           Ndata_H_cal_1pr_negAdcSampPulseAmpRaw;
   Double_t        H_cal_1pr_negAdcSampPulseAmpRaw[1];   //[Ndata.H.cal.1pr.negAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_1pr_negAdcSampPulseInt;
   Double_t        H_cal_1pr_negAdcSampPulseInt[1];   //[Ndata.H.cal.1pr.negAdcSampPulseInt]
   Int_t           Ndata_H_cal_1pr_negAdcSampPulseIntRaw;
   Double_t        H_cal_1pr_negAdcSampPulseIntRaw[1];   //[Ndata.H.cal.1pr.negAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_1pr_negAdcSampPulseTime;
   Double_t        H_cal_1pr_negAdcSampPulseTime[1];   //[Ndata.H.cal.1pr.negAdcSampPulseTime]
   Int_t           Ndata_H_cal_1pr_negAdcSampPulseTimeRaw;
   Double_t        H_cal_1pr_negAdcSampPulseTimeRaw[1];   //[Ndata.H.cal.1pr.negAdcSampPulseTimeRaw]
   Int_t           Ndata_H_cal_1pr_numGoodNegAdcHits;
   Double_t        H_cal_1pr_numGoodNegAdcHits[13];   //[Ndata.H.cal.1pr.numGoodNegAdcHits]
   Int_t           Ndata_H_cal_1pr_numGoodPosAdcHits;
   Double_t        H_cal_1pr_numGoodPosAdcHits[13];   //[Ndata.H.cal.1pr.numGoodPosAdcHits]
   Int_t           Ndata_H_cal_1pr_posAdcCounter;
   Double_t        H_cal_1pr_posAdcCounter[17];   //[Ndata.H.cal.1pr.posAdcCounter]
   Int_t           Ndata_H_cal_1pr_posAdcErrorFlag;
   Double_t        H_cal_1pr_posAdcErrorFlag[17];   //[Ndata.H.cal.1pr.posAdcErrorFlag]
   Int_t           Ndata_H_cal_1pr_posAdcPed;
   Double_t        H_cal_1pr_posAdcPed[17];   //[Ndata.H.cal.1pr.posAdcPed]
   Int_t           Ndata_H_cal_1pr_posAdcPedRaw;
   Double_t        H_cal_1pr_posAdcPedRaw[17];   //[Ndata.H.cal.1pr.posAdcPedRaw]
   Int_t           Ndata_H_cal_1pr_posAdcPulseAmp;
   Double_t        H_cal_1pr_posAdcPulseAmp[17];   //[Ndata.H.cal.1pr.posAdcPulseAmp]
   Int_t           Ndata_H_cal_1pr_posAdcPulseAmpRaw;
   Double_t        H_cal_1pr_posAdcPulseAmpRaw[17];   //[Ndata.H.cal.1pr.posAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_1pr_posAdcPulseInt;
   Double_t        H_cal_1pr_posAdcPulseInt[17];   //[Ndata.H.cal.1pr.posAdcPulseInt]
   Int_t           Ndata_H_cal_1pr_posAdcPulseIntRaw;
   Double_t        H_cal_1pr_posAdcPulseIntRaw[17];   //[Ndata.H.cal.1pr.posAdcPulseIntRaw]
   Int_t           Ndata_H_cal_1pr_posAdcPulseTime;
   Double_t        H_cal_1pr_posAdcPulseTime[17];   //[Ndata.H.cal.1pr.posAdcPulseTime]
   Int_t           Ndata_H_cal_1pr_posAdcPulseTimeRaw;
   Double_t        H_cal_1pr_posAdcPulseTimeRaw[17];   //[Ndata.H.cal.1pr.posAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_1pr_posAdcSampPed;
   Double_t        H_cal_1pr_posAdcSampPed[1];   //[Ndata.H.cal.1pr.posAdcSampPed]
   Int_t           Ndata_H_cal_1pr_posAdcSampPedRaw;
   Double_t        H_cal_1pr_posAdcSampPedRaw[1];   //[Ndata.H.cal.1pr.posAdcSampPedRaw]
   Int_t           Ndata_H_cal_1pr_posAdcSampPulseAmp;
   Double_t        H_cal_1pr_posAdcSampPulseAmp[1];   //[Ndata.H.cal.1pr.posAdcSampPulseAmp]
   Int_t           Ndata_H_cal_1pr_posAdcSampPulseAmpRaw;
   Double_t        H_cal_1pr_posAdcSampPulseAmpRaw[1];   //[Ndata.H.cal.1pr.posAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_1pr_posAdcSampPulseInt;
   Double_t        H_cal_1pr_posAdcSampPulseInt[1];   //[Ndata.H.cal.1pr.posAdcSampPulseInt]
   Int_t           Ndata_H_cal_1pr_posAdcSampPulseIntRaw;
   Double_t        H_cal_1pr_posAdcSampPulseIntRaw[1];   //[Ndata.H.cal.1pr.posAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_1pr_posAdcSampPulseTime;
   Double_t        H_cal_1pr_posAdcSampPulseTime[1];   //[Ndata.H.cal.1pr.posAdcSampPulseTime]
   Int_t           Ndata_H_cal_1pr_posAdcSampPulseTimeRaw;
   Double_t        H_cal_1pr_posAdcSampPulseTimeRaw[1];   //[Ndata.H.cal.1pr.posAdcSampPulseTimeRaw]
   Int_t           Ndata_H_cal_2ta_emean;
   Double_t        H_cal_2ta_emean[13];   //[Ndata.H.cal.2ta.emean]
   Int_t           Ndata_H_cal_2ta_eneg;
   Double_t        H_cal_2ta_eneg[13];   //[Ndata.H.cal.2ta.eneg]
   Int_t           Ndata_H_cal_2ta_epos;
   Double_t        H_cal_2ta_epos[13];   //[Ndata.H.cal.2ta.epos]
   Int_t           Ndata_H_cal_2ta_goodNegAdcMult;
   Double_t        H_cal_2ta_goodNegAdcMult[13];   //[Ndata.H.cal.2ta.goodNegAdcMult]
   Int_t           Ndata_H_cal_2ta_goodNegAdcPed;
   Double_t        H_cal_2ta_goodNegAdcPed[13];   //[Ndata.H.cal.2ta.goodNegAdcPed]
   Int_t           Ndata_H_cal_2ta_goodNegAdcPulseAmp;
   Double_t        H_cal_2ta_goodNegAdcPulseAmp[13];   //[Ndata.H.cal.2ta.goodNegAdcPulseAmp]
   Int_t           Ndata_H_cal_2ta_goodNegAdcPulseInt;
   Double_t        H_cal_2ta_goodNegAdcPulseInt[13];   //[Ndata.H.cal.2ta.goodNegAdcPulseInt]
   Int_t           Ndata_H_cal_2ta_goodNegAdcPulseIntRaw;
   Double_t        H_cal_2ta_goodNegAdcPulseIntRaw[13];   //[Ndata.H.cal.2ta.goodNegAdcPulseIntRaw]
   Int_t           Ndata_H_cal_2ta_goodNegAdcPulseTime;
   Double_t        H_cal_2ta_goodNegAdcPulseTime[13];   //[Ndata.H.cal.2ta.goodNegAdcPulseTime]
   Int_t           Ndata_H_cal_2ta_goodNegAdcTdcDiffTime;
   Double_t        H_cal_2ta_goodNegAdcTdcDiffTime[13];   //[Ndata.H.cal.2ta.goodNegAdcTdcDiffTime]
   Int_t           Ndata_H_cal_2ta_goodPosAdcMult;
   Double_t        H_cal_2ta_goodPosAdcMult[13];   //[Ndata.H.cal.2ta.goodPosAdcMult]
   Int_t           Ndata_H_cal_2ta_goodPosAdcPed;
   Double_t        H_cal_2ta_goodPosAdcPed[13];   //[Ndata.H.cal.2ta.goodPosAdcPed]
   Int_t           Ndata_H_cal_2ta_goodPosAdcPulseAmp;
   Double_t        H_cal_2ta_goodPosAdcPulseAmp[13];   //[Ndata.H.cal.2ta.goodPosAdcPulseAmp]
   Int_t           Ndata_H_cal_2ta_goodPosAdcPulseInt;
   Double_t        H_cal_2ta_goodPosAdcPulseInt[13];   //[Ndata.H.cal.2ta.goodPosAdcPulseInt]
   Int_t           Ndata_H_cal_2ta_goodPosAdcPulseIntRaw;
   Double_t        H_cal_2ta_goodPosAdcPulseIntRaw[13];   //[Ndata.H.cal.2ta.goodPosAdcPulseIntRaw]
   Int_t           Ndata_H_cal_2ta_goodPosAdcPulseTime;
   Double_t        H_cal_2ta_goodPosAdcPulseTime[13];   //[Ndata.H.cal.2ta.goodPosAdcPulseTime]
   Int_t           Ndata_H_cal_2ta_goodPosAdcTdcDiffTime;
   Double_t        H_cal_2ta_goodPosAdcTdcDiffTime[13];   //[Ndata.H.cal.2ta.goodPosAdcTdcDiffTime]
   Int_t           Ndata_H_cal_2ta_negAdcCounter;
   Double_t        H_cal_2ta_negAdcCounter[15];   //[Ndata.H.cal.2ta.negAdcCounter]
   Int_t           Ndata_H_cal_2ta_negAdcErrorFlag;
   Double_t        H_cal_2ta_negAdcErrorFlag[15];   //[Ndata.H.cal.2ta.negAdcErrorFlag]
   Int_t           Ndata_H_cal_2ta_negAdcPed;
   Double_t        H_cal_2ta_negAdcPed[15];   //[Ndata.H.cal.2ta.negAdcPed]
   Int_t           Ndata_H_cal_2ta_negAdcPedRaw;
   Double_t        H_cal_2ta_negAdcPedRaw[15];   //[Ndata.H.cal.2ta.negAdcPedRaw]
   Int_t           Ndata_H_cal_2ta_negAdcPulseAmp;
   Double_t        H_cal_2ta_negAdcPulseAmp[15];   //[Ndata.H.cal.2ta.negAdcPulseAmp]
   Int_t           Ndata_H_cal_2ta_negAdcPulseAmpRaw;
   Double_t        H_cal_2ta_negAdcPulseAmpRaw[15];   //[Ndata.H.cal.2ta.negAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_2ta_negAdcPulseInt;
   Double_t        H_cal_2ta_negAdcPulseInt[15];   //[Ndata.H.cal.2ta.negAdcPulseInt]
   Int_t           Ndata_H_cal_2ta_negAdcPulseIntRaw;
   Double_t        H_cal_2ta_negAdcPulseIntRaw[15];   //[Ndata.H.cal.2ta.negAdcPulseIntRaw]
   Int_t           Ndata_H_cal_2ta_negAdcPulseTime;
   Double_t        H_cal_2ta_negAdcPulseTime[15];   //[Ndata.H.cal.2ta.negAdcPulseTime]
   Int_t           Ndata_H_cal_2ta_negAdcPulseTimeRaw;
   Double_t        H_cal_2ta_negAdcPulseTimeRaw[15];   //[Ndata.H.cal.2ta.negAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_2ta_negAdcSampPed;
   Double_t        H_cal_2ta_negAdcSampPed[1];   //[Ndata.H.cal.2ta.negAdcSampPed]
   Int_t           Ndata_H_cal_2ta_negAdcSampPedRaw;
   Double_t        H_cal_2ta_negAdcSampPedRaw[1];   //[Ndata.H.cal.2ta.negAdcSampPedRaw]
   Int_t           Ndata_H_cal_2ta_negAdcSampPulseAmp;
   Double_t        H_cal_2ta_negAdcSampPulseAmp[1];   //[Ndata.H.cal.2ta.negAdcSampPulseAmp]
   Int_t           Ndata_H_cal_2ta_negAdcSampPulseAmpRaw;
   Double_t        H_cal_2ta_negAdcSampPulseAmpRaw[1];   //[Ndata.H.cal.2ta.negAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_2ta_negAdcSampPulseInt;
   Double_t        H_cal_2ta_negAdcSampPulseInt[1];   //[Ndata.H.cal.2ta.negAdcSampPulseInt]
   Int_t           Ndata_H_cal_2ta_negAdcSampPulseIntRaw;
   Double_t        H_cal_2ta_negAdcSampPulseIntRaw[1];   //[Ndata.H.cal.2ta.negAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_2ta_negAdcSampPulseTime;
   Double_t        H_cal_2ta_negAdcSampPulseTime[1];   //[Ndata.H.cal.2ta.negAdcSampPulseTime]
   Int_t           Ndata_H_cal_2ta_negAdcSampPulseTimeRaw;
   Double_t        H_cal_2ta_negAdcSampPulseTimeRaw[1];   //[Ndata.H.cal.2ta.negAdcSampPulseTimeRaw]
   Int_t           Ndata_H_cal_2ta_numGoodNegAdcHits;
   Double_t        H_cal_2ta_numGoodNegAdcHits[13];   //[Ndata.H.cal.2ta.numGoodNegAdcHits]
   Int_t           Ndata_H_cal_2ta_numGoodPosAdcHits;
   Double_t        H_cal_2ta_numGoodPosAdcHits[13];   //[Ndata.H.cal.2ta.numGoodPosAdcHits]
   Int_t           Ndata_H_cal_2ta_posAdcCounter;
   Double_t        H_cal_2ta_posAdcCounter[16];   //[Ndata.H.cal.2ta.posAdcCounter]
   Int_t           Ndata_H_cal_2ta_posAdcErrorFlag;
   Double_t        H_cal_2ta_posAdcErrorFlag[16];   //[Ndata.H.cal.2ta.posAdcErrorFlag]
   Int_t           Ndata_H_cal_2ta_posAdcPed;
   Double_t        H_cal_2ta_posAdcPed[16];   //[Ndata.H.cal.2ta.posAdcPed]
   Int_t           Ndata_H_cal_2ta_posAdcPedRaw;
   Double_t        H_cal_2ta_posAdcPedRaw[16];   //[Ndata.H.cal.2ta.posAdcPedRaw]
   Int_t           Ndata_H_cal_2ta_posAdcPulseAmp;
   Double_t        H_cal_2ta_posAdcPulseAmp[16];   //[Ndata.H.cal.2ta.posAdcPulseAmp]
   Int_t           Ndata_H_cal_2ta_posAdcPulseAmpRaw;
   Double_t        H_cal_2ta_posAdcPulseAmpRaw[16];   //[Ndata.H.cal.2ta.posAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_2ta_posAdcPulseInt;
   Double_t        H_cal_2ta_posAdcPulseInt[16];   //[Ndata.H.cal.2ta.posAdcPulseInt]
   Int_t           Ndata_H_cal_2ta_posAdcPulseIntRaw;
   Double_t        H_cal_2ta_posAdcPulseIntRaw[16];   //[Ndata.H.cal.2ta.posAdcPulseIntRaw]
   Int_t           Ndata_H_cal_2ta_posAdcPulseTime;
   Double_t        H_cal_2ta_posAdcPulseTime[16];   //[Ndata.H.cal.2ta.posAdcPulseTime]
   Int_t           Ndata_H_cal_2ta_posAdcPulseTimeRaw;
   Double_t        H_cal_2ta_posAdcPulseTimeRaw[16];   //[Ndata.H.cal.2ta.posAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_2ta_posAdcSampPed;
   Double_t        H_cal_2ta_posAdcSampPed[1];   //[Ndata.H.cal.2ta.posAdcSampPed]
   Int_t           Ndata_H_cal_2ta_posAdcSampPedRaw;
   Double_t        H_cal_2ta_posAdcSampPedRaw[1];   //[Ndata.H.cal.2ta.posAdcSampPedRaw]
   Int_t           Ndata_H_cal_2ta_posAdcSampPulseAmp;
   Double_t        H_cal_2ta_posAdcSampPulseAmp[1];   //[Ndata.H.cal.2ta.posAdcSampPulseAmp]
   Int_t           Ndata_H_cal_2ta_posAdcSampPulseAmpRaw;
   Double_t        H_cal_2ta_posAdcSampPulseAmpRaw[1];   //[Ndata.H.cal.2ta.posAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_2ta_posAdcSampPulseInt;
   Double_t        H_cal_2ta_posAdcSampPulseInt[1];   //[Ndata.H.cal.2ta.posAdcSampPulseInt]
   Int_t           Ndata_H_cal_2ta_posAdcSampPulseIntRaw;
   Double_t        H_cal_2ta_posAdcSampPulseIntRaw[1];   //[Ndata.H.cal.2ta.posAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_2ta_posAdcSampPulseTime;
   Double_t        H_cal_2ta_posAdcSampPulseTime[1];   //[Ndata.H.cal.2ta.posAdcSampPulseTime]
   Int_t           Ndata_H_cal_2ta_posAdcSampPulseTimeRaw;
   Double_t        H_cal_2ta_posAdcSampPulseTimeRaw[1];   //[Ndata.H.cal.2ta.posAdcSampPulseTimeRaw]
   Int_t           Ndata_H_cal_3ta_emean;
   Double_t        H_cal_3ta_emean[13];   //[Ndata.H.cal.3ta.emean]
   Int_t           Ndata_H_cal_3ta_eneg;
   Double_t        H_cal_3ta_eneg[13];   //[Ndata.H.cal.3ta.eneg]
   Int_t           Ndata_H_cal_3ta_epos;
   Double_t        H_cal_3ta_epos[13];   //[Ndata.H.cal.3ta.epos]
   Int_t           Ndata_H_cal_3ta_goodNegAdcMult;
   Double_t        H_cal_3ta_goodNegAdcMult[13];   //[Ndata.H.cal.3ta.goodNegAdcMult]
   Int_t           Ndata_H_cal_3ta_goodNegAdcPed;
   Double_t        H_cal_3ta_goodNegAdcPed[13];   //[Ndata.H.cal.3ta.goodNegAdcPed]
   Int_t           Ndata_H_cal_3ta_goodNegAdcPulseAmp;
   Double_t        H_cal_3ta_goodNegAdcPulseAmp[13];   //[Ndata.H.cal.3ta.goodNegAdcPulseAmp]
   Int_t           Ndata_H_cal_3ta_goodNegAdcPulseInt;
   Double_t        H_cal_3ta_goodNegAdcPulseInt[13];   //[Ndata.H.cal.3ta.goodNegAdcPulseInt]
   Int_t           Ndata_H_cal_3ta_goodNegAdcPulseIntRaw;
   Double_t        H_cal_3ta_goodNegAdcPulseIntRaw[13];   //[Ndata.H.cal.3ta.goodNegAdcPulseIntRaw]
   Int_t           Ndata_H_cal_3ta_goodNegAdcPulseTime;
   Double_t        H_cal_3ta_goodNegAdcPulseTime[13];   //[Ndata.H.cal.3ta.goodNegAdcPulseTime]
   Int_t           Ndata_H_cal_3ta_goodNegAdcTdcDiffTime;
   Double_t        H_cal_3ta_goodNegAdcTdcDiffTime[13];   //[Ndata.H.cal.3ta.goodNegAdcTdcDiffTime]
   Int_t           Ndata_H_cal_3ta_goodPosAdcMult;
   Double_t        H_cal_3ta_goodPosAdcMult[13];   //[Ndata.H.cal.3ta.goodPosAdcMult]
   Int_t           Ndata_H_cal_3ta_goodPosAdcPed;
   Double_t        H_cal_3ta_goodPosAdcPed[13];   //[Ndata.H.cal.3ta.goodPosAdcPed]
   Int_t           Ndata_H_cal_3ta_goodPosAdcPulseAmp;
   Double_t        H_cal_3ta_goodPosAdcPulseAmp[13];   //[Ndata.H.cal.3ta.goodPosAdcPulseAmp]
   Int_t           Ndata_H_cal_3ta_goodPosAdcPulseInt;
   Double_t        H_cal_3ta_goodPosAdcPulseInt[13];   //[Ndata.H.cal.3ta.goodPosAdcPulseInt]
   Int_t           Ndata_H_cal_3ta_goodPosAdcPulseIntRaw;
   Double_t        H_cal_3ta_goodPosAdcPulseIntRaw[13];   //[Ndata.H.cal.3ta.goodPosAdcPulseIntRaw]
   Int_t           Ndata_H_cal_3ta_goodPosAdcPulseTime;
   Double_t        H_cal_3ta_goodPosAdcPulseTime[13];   //[Ndata.H.cal.3ta.goodPosAdcPulseTime]
   Int_t           Ndata_H_cal_3ta_goodPosAdcTdcDiffTime;
   Double_t        H_cal_3ta_goodPosAdcTdcDiffTime[13];   //[Ndata.H.cal.3ta.goodPosAdcTdcDiffTime]
   Int_t           Ndata_H_cal_3ta_negAdcCounter;
   Double_t        H_cal_3ta_negAdcCounter[1];   //[Ndata.H.cal.3ta.negAdcCounter]
   Int_t           Ndata_H_cal_3ta_negAdcErrorFlag;
   Double_t        H_cal_3ta_negAdcErrorFlag[1];   //[Ndata.H.cal.3ta.negAdcErrorFlag]
   Int_t           Ndata_H_cal_3ta_negAdcPed;
   Double_t        H_cal_3ta_negAdcPed[1];   //[Ndata.H.cal.3ta.negAdcPed]
   Int_t           Ndata_H_cal_3ta_negAdcPedRaw;
   Double_t        H_cal_3ta_negAdcPedRaw[1];   //[Ndata.H.cal.3ta.negAdcPedRaw]
   Int_t           Ndata_H_cal_3ta_negAdcPulseAmp;
   Double_t        H_cal_3ta_negAdcPulseAmp[1];   //[Ndata.H.cal.3ta.negAdcPulseAmp]
   Int_t           Ndata_H_cal_3ta_negAdcPulseAmpRaw;
   Double_t        H_cal_3ta_negAdcPulseAmpRaw[1];   //[Ndata.H.cal.3ta.negAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_3ta_negAdcPulseInt;
   Double_t        H_cal_3ta_negAdcPulseInt[1];   //[Ndata.H.cal.3ta.negAdcPulseInt]
   Int_t           Ndata_H_cal_3ta_negAdcPulseIntRaw;
   Double_t        H_cal_3ta_negAdcPulseIntRaw[1];   //[Ndata.H.cal.3ta.negAdcPulseIntRaw]
   Int_t           Ndata_H_cal_3ta_negAdcPulseTime;
   Double_t        H_cal_3ta_negAdcPulseTime[1];   //[Ndata.H.cal.3ta.negAdcPulseTime]
   Int_t           Ndata_H_cal_3ta_negAdcPulseTimeRaw;
   Double_t        H_cal_3ta_negAdcPulseTimeRaw[1];   //[Ndata.H.cal.3ta.negAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_3ta_negAdcSampPed;
   Double_t        H_cal_3ta_negAdcSampPed[1];   //[Ndata.H.cal.3ta.negAdcSampPed]
   Int_t           Ndata_H_cal_3ta_negAdcSampPedRaw;
   Double_t        H_cal_3ta_negAdcSampPedRaw[1];   //[Ndata.H.cal.3ta.negAdcSampPedRaw]
   Int_t           Ndata_H_cal_3ta_negAdcSampPulseAmp;
   Double_t        H_cal_3ta_negAdcSampPulseAmp[1];   //[Ndata.H.cal.3ta.negAdcSampPulseAmp]
   Int_t           Ndata_H_cal_3ta_negAdcSampPulseAmpRaw;
   Double_t        H_cal_3ta_negAdcSampPulseAmpRaw[1];   //[Ndata.H.cal.3ta.negAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_3ta_negAdcSampPulseInt;
   Double_t        H_cal_3ta_negAdcSampPulseInt[1];   //[Ndata.H.cal.3ta.negAdcSampPulseInt]
   Int_t           Ndata_H_cal_3ta_negAdcSampPulseIntRaw;
   Double_t        H_cal_3ta_negAdcSampPulseIntRaw[1];   //[Ndata.H.cal.3ta.negAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_3ta_negAdcSampPulseTime;
   Double_t        H_cal_3ta_negAdcSampPulseTime[1];   //[Ndata.H.cal.3ta.negAdcSampPulseTime]
   Int_t           Ndata_H_cal_3ta_negAdcSampPulseTimeRaw;
   Double_t        H_cal_3ta_negAdcSampPulseTimeRaw[1];   //[Ndata.H.cal.3ta.negAdcSampPulseTimeRaw]
   Int_t           Ndata_H_cal_3ta_numGoodNegAdcHits;
   Double_t        H_cal_3ta_numGoodNegAdcHits[13];   //[Ndata.H.cal.3ta.numGoodNegAdcHits]
   Int_t           Ndata_H_cal_3ta_numGoodPosAdcHits;
   Double_t        H_cal_3ta_numGoodPosAdcHits[13];   //[Ndata.H.cal.3ta.numGoodPosAdcHits]
   Int_t           Ndata_H_cal_3ta_posAdcCounter;
   Double_t        H_cal_3ta_posAdcCounter[13];   //[Ndata.H.cal.3ta.posAdcCounter]
   Int_t           Ndata_H_cal_3ta_posAdcErrorFlag;
   Double_t        H_cal_3ta_posAdcErrorFlag[13];   //[Ndata.H.cal.3ta.posAdcErrorFlag]
   Int_t           Ndata_H_cal_3ta_posAdcPed;
   Double_t        H_cal_3ta_posAdcPed[13];   //[Ndata.H.cal.3ta.posAdcPed]
   Int_t           Ndata_H_cal_3ta_posAdcPedRaw;
   Double_t        H_cal_3ta_posAdcPedRaw[13];   //[Ndata.H.cal.3ta.posAdcPedRaw]
   Int_t           Ndata_H_cal_3ta_posAdcPulseAmp;
   Double_t        H_cal_3ta_posAdcPulseAmp[13];   //[Ndata.H.cal.3ta.posAdcPulseAmp]
   Int_t           Ndata_H_cal_3ta_posAdcPulseAmpRaw;
   Double_t        H_cal_3ta_posAdcPulseAmpRaw[13];   //[Ndata.H.cal.3ta.posAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_3ta_posAdcPulseInt;
   Double_t        H_cal_3ta_posAdcPulseInt[13];   //[Ndata.H.cal.3ta.posAdcPulseInt]
   Int_t           Ndata_H_cal_3ta_posAdcPulseIntRaw;
   Double_t        H_cal_3ta_posAdcPulseIntRaw[13];   //[Ndata.H.cal.3ta.posAdcPulseIntRaw]
   Int_t           Ndata_H_cal_3ta_posAdcPulseTime;
   Double_t        H_cal_3ta_posAdcPulseTime[13];   //[Ndata.H.cal.3ta.posAdcPulseTime]
   Int_t           Ndata_H_cal_3ta_posAdcPulseTimeRaw;
   Double_t        H_cal_3ta_posAdcPulseTimeRaw[13];   //[Ndata.H.cal.3ta.posAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_3ta_posAdcSampPed;
   Double_t        H_cal_3ta_posAdcSampPed[3];   //[Ndata.H.cal.3ta.posAdcSampPed]
   Int_t           Ndata_H_cal_3ta_posAdcSampPedRaw;
   Double_t        H_cal_3ta_posAdcSampPedRaw[3];   //[Ndata.H.cal.3ta.posAdcSampPedRaw]
   Int_t           Ndata_H_cal_3ta_posAdcSampPulseAmp;
   Double_t        H_cal_3ta_posAdcSampPulseAmp[3];   //[Ndata.H.cal.3ta.posAdcSampPulseAmp]
   Int_t           Ndata_H_cal_3ta_posAdcSampPulseAmpRaw;
   Double_t        H_cal_3ta_posAdcSampPulseAmpRaw[3];   //[Ndata.H.cal.3ta.posAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_3ta_posAdcSampPulseInt;
   Double_t        H_cal_3ta_posAdcSampPulseInt[3];   //[Ndata.H.cal.3ta.posAdcSampPulseInt]
   Int_t           Ndata_H_cal_3ta_posAdcSampPulseIntRaw;
   Double_t        H_cal_3ta_posAdcSampPulseIntRaw[3];   //[Ndata.H.cal.3ta.posAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_3ta_posAdcSampPulseTime;
   Double_t        H_cal_3ta_posAdcSampPulseTime[3];   //[Ndata.H.cal.3ta.posAdcSampPulseTime]
   Int_t           Ndata_H_cal_3ta_posAdcSampPulseTimeRaw;
   Double_t        H_cal_3ta_posAdcSampPulseTimeRaw[3];   //[Ndata.H.cal.3ta.posAdcSampPulseTimeRaw]
   Int_t           Ndata_H_cal_4ta_emean;
   Double_t        H_cal_4ta_emean[13];   //[Ndata.H.cal.4ta.emean]
   Int_t           Ndata_H_cal_4ta_eneg;
   Double_t        H_cal_4ta_eneg[13];   //[Ndata.H.cal.4ta.eneg]
   Int_t           Ndata_H_cal_4ta_epos;
   Double_t        H_cal_4ta_epos[13];   //[Ndata.H.cal.4ta.epos]
   Int_t           Ndata_H_cal_4ta_goodNegAdcMult;
   Double_t        H_cal_4ta_goodNegAdcMult[13];   //[Ndata.H.cal.4ta.goodNegAdcMult]
   Int_t           Ndata_H_cal_4ta_goodNegAdcPed;
   Double_t        H_cal_4ta_goodNegAdcPed[13];   //[Ndata.H.cal.4ta.goodNegAdcPed]
   Int_t           Ndata_H_cal_4ta_goodNegAdcPulseAmp;
   Double_t        H_cal_4ta_goodNegAdcPulseAmp[13];   //[Ndata.H.cal.4ta.goodNegAdcPulseAmp]
   Int_t           Ndata_H_cal_4ta_goodNegAdcPulseInt;
   Double_t        H_cal_4ta_goodNegAdcPulseInt[13];   //[Ndata.H.cal.4ta.goodNegAdcPulseInt]
   Int_t           Ndata_H_cal_4ta_goodNegAdcPulseIntRaw;
   Double_t        H_cal_4ta_goodNegAdcPulseIntRaw[13];   //[Ndata.H.cal.4ta.goodNegAdcPulseIntRaw]
   Int_t           Ndata_H_cal_4ta_goodNegAdcPulseTime;
   Double_t        H_cal_4ta_goodNegAdcPulseTime[13];   //[Ndata.H.cal.4ta.goodNegAdcPulseTime]
   Int_t           Ndata_H_cal_4ta_goodNegAdcTdcDiffTime;
   Double_t        H_cal_4ta_goodNegAdcTdcDiffTime[13];   //[Ndata.H.cal.4ta.goodNegAdcTdcDiffTime]
   Int_t           Ndata_H_cal_4ta_goodPosAdcMult;
   Double_t        H_cal_4ta_goodPosAdcMult[13];   //[Ndata.H.cal.4ta.goodPosAdcMult]
   Int_t           Ndata_H_cal_4ta_goodPosAdcPed;
   Double_t        H_cal_4ta_goodPosAdcPed[13];   //[Ndata.H.cal.4ta.goodPosAdcPed]
   Int_t           Ndata_H_cal_4ta_goodPosAdcPulseAmp;
   Double_t        H_cal_4ta_goodPosAdcPulseAmp[13];   //[Ndata.H.cal.4ta.goodPosAdcPulseAmp]
   Int_t           Ndata_H_cal_4ta_goodPosAdcPulseInt;
   Double_t        H_cal_4ta_goodPosAdcPulseInt[13];   //[Ndata.H.cal.4ta.goodPosAdcPulseInt]
   Int_t           Ndata_H_cal_4ta_goodPosAdcPulseIntRaw;
   Double_t        H_cal_4ta_goodPosAdcPulseIntRaw[13];   //[Ndata.H.cal.4ta.goodPosAdcPulseIntRaw]
   Int_t           Ndata_H_cal_4ta_goodPosAdcPulseTime;
   Double_t        H_cal_4ta_goodPosAdcPulseTime[13];   //[Ndata.H.cal.4ta.goodPosAdcPulseTime]
   Int_t           Ndata_H_cal_4ta_goodPosAdcTdcDiffTime;
   Double_t        H_cal_4ta_goodPosAdcTdcDiffTime[13];   //[Ndata.H.cal.4ta.goodPosAdcTdcDiffTime]
   Int_t           Ndata_H_cal_4ta_negAdcCounter;
   Double_t        H_cal_4ta_negAdcCounter[1];   //[Ndata.H.cal.4ta.negAdcCounter]
   Int_t           Ndata_H_cal_4ta_negAdcErrorFlag;
   Double_t        H_cal_4ta_negAdcErrorFlag[1];   //[Ndata.H.cal.4ta.negAdcErrorFlag]
   Int_t           Ndata_H_cal_4ta_negAdcPed;
   Double_t        H_cal_4ta_negAdcPed[1];   //[Ndata.H.cal.4ta.negAdcPed]
   Int_t           Ndata_H_cal_4ta_negAdcPedRaw;
   Double_t        H_cal_4ta_negAdcPedRaw[1];   //[Ndata.H.cal.4ta.negAdcPedRaw]
   Int_t           Ndata_H_cal_4ta_negAdcPulseAmp;
   Double_t        H_cal_4ta_negAdcPulseAmp[1];   //[Ndata.H.cal.4ta.negAdcPulseAmp]
   Int_t           Ndata_H_cal_4ta_negAdcPulseAmpRaw;
   Double_t        H_cal_4ta_negAdcPulseAmpRaw[1];   //[Ndata.H.cal.4ta.negAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_4ta_negAdcPulseInt;
   Double_t        H_cal_4ta_negAdcPulseInt[1];   //[Ndata.H.cal.4ta.negAdcPulseInt]
   Int_t           Ndata_H_cal_4ta_negAdcPulseIntRaw;
   Double_t        H_cal_4ta_negAdcPulseIntRaw[1];   //[Ndata.H.cal.4ta.negAdcPulseIntRaw]
   Int_t           Ndata_H_cal_4ta_negAdcPulseTime;
   Double_t        H_cal_4ta_negAdcPulseTime[1];   //[Ndata.H.cal.4ta.negAdcPulseTime]
   Int_t           Ndata_H_cal_4ta_negAdcPulseTimeRaw;
   Double_t        H_cal_4ta_negAdcPulseTimeRaw[1];   //[Ndata.H.cal.4ta.negAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_4ta_negAdcSampPed;
   Double_t        H_cal_4ta_negAdcSampPed[1];   //[Ndata.H.cal.4ta.negAdcSampPed]
   Int_t           Ndata_H_cal_4ta_negAdcSampPedRaw;
   Double_t        H_cal_4ta_negAdcSampPedRaw[1];   //[Ndata.H.cal.4ta.negAdcSampPedRaw]
   Int_t           Ndata_H_cal_4ta_negAdcSampPulseAmp;
   Double_t        H_cal_4ta_negAdcSampPulseAmp[1];   //[Ndata.H.cal.4ta.negAdcSampPulseAmp]
   Int_t           Ndata_H_cal_4ta_negAdcSampPulseAmpRaw;
   Double_t        H_cal_4ta_negAdcSampPulseAmpRaw[1];   //[Ndata.H.cal.4ta.negAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_4ta_negAdcSampPulseInt;
   Double_t        H_cal_4ta_negAdcSampPulseInt[1];   //[Ndata.H.cal.4ta.negAdcSampPulseInt]
   Int_t           Ndata_H_cal_4ta_negAdcSampPulseIntRaw;
   Double_t        H_cal_4ta_negAdcSampPulseIntRaw[1];   //[Ndata.H.cal.4ta.negAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_4ta_negAdcSampPulseTime;
   Double_t        H_cal_4ta_negAdcSampPulseTime[1];   //[Ndata.H.cal.4ta.negAdcSampPulseTime]
   Int_t           Ndata_H_cal_4ta_negAdcSampPulseTimeRaw;
   Double_t        H_cal_4ta_negAdcSampPulseTimeRaw[1];   //[Ndata.H.cal.4ta.negAdcSampPulseTimeRaw]
   Int_t           Ndata_H_cal_4ta_numGoodNegAdcHits;
   Double_t        H_cal_4ta_numGoodNegAdcHits[13];   //[Ndata.H.cal.4ta.numGoodNegAdcHits]
   Int_t           Ndata_H_cal_4ta_numGoodPosAdcHits;
   Double_t        H_cal_4ta_numGoodPosAdcHits[13];   //[Ndata.H.cal.4ta.numGoodPosAdcHits]
   Int_t           Ndata_H_cal_4ta_posAdcCounter;
   Double_t        H_cal_4ta_posAdcCounter[12];   //[Ndata.H.cal.4ta.posAdcCounter]
   Int_t           Ndata_H_cal_4ta_posAdcErrorFlag;
   Double_t        H_cal_4ta_posAdcErrorFlag[12];   //[Ndata.H.cal.4ta.posAdcErrorFlag]
   Int_t           Ndata_H_cal_4ta_posAdcPed;
   Double_t        H_cal_4ta_posAdcPed[12];   //[Ndata.H.cal.4ta.posAdcPed]
   Int_t           Ndata_H_cal_4ta_posAdcPedRaw;
   Double_t        H_cal_4ta_posAdcPedRaw[12];   //[Ndata.H.cal.4ta.posAdcPedRaw]
   Int_t           Ndata_H_cal_4ta_posAdcPulseAmp;
   Double_t        H_cal_4ta_posAdcPulseAmp[12];   //[Ndata.H.cal.4ta.posAdcPulseAmp]
   Int_t           Ndata_H_cal_4ta_posAdcPulseAmpRaw;
   Double_t        H_cal_4ta_posAdcPulseAmpRaw[12];   //[Ndata.H.cal.4ta.posAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_4ta_posAdcPulseInt;
   Double_t        H_cal_4ta_posAdcPulseInt[12];   //[Ndata.H.cal.4ta.posAdcPulseInt]
   Int_t           Ndata_H_cal_4ta_posAdcPulseIntRaw;
   Double_t        H_cal_4ta_posAdcPulseIntRaw[12];   //[Ndata.H.cal.4ta.posAdcPulseIntRaw]
   Int_t           Ndata_H_cal_4ta_posAdcPulseTime;
   Double_t        H_cal_4ta_posAdcPulseTime[12];   //[Ndata.H.cal.4ta.posAdcPulseTime]
   Int_t           Ndata_H_cal_4ta_posAdcPulseTimeRaw;
   Double_t        H_cal_4ta_posAdcPulseTimeRaw[12];   //[Ndata.H.cal.4ta.posAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_4ta_posAdcSampPed;
   Double_t        H_cal_4ta_posAdcSampPed[11];   //[Ndata.H.cal.4ta.posAdcSampPed]
   Int_t           Ndata_H_cal_4ta_posAdcSampPedRaw;
   Double_t        H_cal_4ta_posAdcSampPedRaw[11];   //[Ndata.H.cal.4ta.posAdcSampPedRaw]
   Int_t           Ndata_H_cal_4ta_posAdcSampPulseAmp;
   Double_t        H_cal_4ta_posAdcSampPulseAmp[11];   //[Ndata.H.cal.4ta.posAdcSampPulseAmp]
   Int_t           Ndata_H_cal_4ta_posAdcSampPulseAmpRaw;
   Double_t        H_cal_4ta_posAdcSampPulseAmpRaw[11];   //[Ndata.H.cal.4ta.posAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_4ta_posAdcSampPulseInt;
   Double_t        H_cal_4ta_posAdcSampPulseInt[11];   //[Ndata.H.cal.4ta.posAdcSampPulseInt]
   Int_t           Ndata_H_cal_4ta_posAdcSampPulseIntRaw;
   Double_t        H_cal_4ta_posAdcSampPulseIntRaw[11];   //[Ndata.H.cal.4ta.posAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_4ta_posAdcSampPulseTime;
   Double_t        H_cal_4ta_posAdcSampPulseTime[11];   //[Ndata.H.cal.4ta.posAdcSampPulseTime]
   Int_t           Ndata_H_cal_4ta_posAdcSampPulseTimeRaw;
   Double_t        H_cal_4ta_posAdcSampPulseTimeRaw[11];   //[Ndata.H.cal.4ta.posAdcSampPulseTimeRaw]
   Int_t           Ndata_T_hms_hEL_CLEAN_vecTdcTime;
   Double_t        T_hms_hEL_CLEAN_vecTdcTime[3];   //[Ndata.T.hms.hEL_CLEAN_vecTdcTime]
   Int_t           Ndata_T_hms_hEL_CLEAN_vecTdcTimeRaw;
   Double_t        T_hms_hEL_CLEAN_vecTdcTimeRaw[3];   //[Ndata.T.hms.hEL_CLEAN_vecTdcTimeRaw]
   Int_t           Ndata_T_hms_hEL_HI_vecTdcTime;
   Double_t        T_hms_hEL_HI_vecTdcTime[4];   //[Ndata.T.hms.hEL_HI_vecTdcTime]
   Int_t           Ndata_T_hms_hEL_HI_vecTdcTimeRaw;
   Double_t        T_hms_hEL_HI_vecTdcTimeRaw[4];   //[Ndata.T.hms.hEL_HI_vecTdcTimeRaw]
   Int_t           Ndata_T_hms_hEL_LO_LO_vecTdcTime;
   Double_t        T_hms_hEL_LO_LO_vecTdcTime[4];   //[Ndata.T.hms.hEL_LO_LO_vecTdcTime]
   Int_t           Ndata_T_hms_hEL_LO_LO_vecTdcTimeRaw;
   Double_t        T_hms_hEL_LO_LO_vecTdcTimeRaw[4];   //[Ndata.T.hms.hEL_LO_LO_vecTdcTimeRaw]
   Int_t           Ndata_T_hms_hEL_LO_vecTdcTime;
   Double_t        T_hms_hEL_LO_vecTdcTime[3];   //[Ndata.T.hms.hEL_LO_vecTdcTime]
   Int_t           Ndata_T_hms_hEL_LO_vecTdcTimeRaw;
   Double_t        T_hms_hEL_LO_vecTdcTimeRaw[3];   //[Ndata.T.hms.hEL_LO_vecTdcTimeRaw]
   Int_t           Ndata_T_hms_hEL_REAL_vecTdcTime;
   Double_t        T_hms_hEL_REAL_vecTdcTime[4];   //[Ndata.T.hms.hEL_REAL_vecTdcTime]
   Int_t           Ndata_T_hms_hEL_REAL_vecTdcTimeRaw;
   Double_t        T_hms_hEL_REAL_vecTdcTimeRaw[4];   //[Ndata.T.hms.hEL_REAL_vecTdcTimeRaw]
   Double_t        H_cal_1pr_eplane;
   Double_t        H_cal_1pr_eplane_neg;
   Double_t        H_cal_1pr_eplane_pos;
   Double_t        H_cal_1pr_totNumGoodNegAdcHits;
   Double_t        H_cal_1pr_totNumGoodPosAdcHits;
   Double_t        H_cal_1pr_totNumNegAdcHits;
   Double_t        H_cal_1pr_totNumPosAdcHits;
   Double_t        H_cal_1pr_totnumAdcHits;
   Double_t        H_cal_1pr_totnumGoodAdcHits;
   Double_t        H_cal_2ta_eplane;
   Double_t        H_cal_2ta_eplane_neg;
   Double_t        H_cal_2ta_eplane_pos;
   Double_t        H_cal_2ta_totNumGoodNegAdcHits;
   Double_t        H_cal_2ta_totNumGoodPosAdcHits;
   Double_t        H_cal_2ta_totNumNegAdcHits;
   Double_t        H_cal_2ta_totNumPosAdcHits;
   Double_t        H_cal_2ta_totnumAdcHits;
   Double_t        H_cal_2ta_totnumGoodAdcHits;
   Double_t        H_cal_3ta_eplane;
   Double_t        H_cal_3ta_eplane_neg;
   Double_t        H_cal_3ta_eplane_pos;
   Double_t        H_cal_3ta_totNumGoodNegAdcHits;
   Double_t        H_cal_3ta_totNumGoodPosAdcHits;
   Double_t        H_cal_3ta_totNumNegAdcHits;
   Double_t        H_cal_3ta_totNumPosAdcHits;
   Double_t        H_cal_3ta_totnumAdcHits;
   Double_t        H_cal_3ta_totnumGoodAdcHits;
   Double_t        H_cal_4ta_eplane;
   Double_t        H_cal_4ta_eplane_neg;
   Double_t        H_cal_4ta_eplane_pos;
   Double_t        H_cal_4ta_totNumGoodNegAdcHits;
   Double_t        H_cal_4ta_totNumGoodPosAdcHits;
   Double_t        H_cal_4ta_totNumNegAdcHits;
   Double_t        H_cal_4ta_totNumPosAdcHits;
   Double_t        H_cal_4ta_totnumAdcHits;
   Double_t        H_cal_4ta_totnumGoodAdcHits;
   Double_t        H_cal_eprtrack;
   Double_t        H_cal_eprtracknorm;
   Double_t        H_cal_etot;
   Double_t        H_cal_etotnorm;
   Double_t        H_cal_etottracknorm;
   Double_t        H_cal_etrack;
   Double_t        H_cal_etracknorm;
   Double_t        H_cal_nclust;
   Double_t        H_cal_nclusttrack;
   Double_t        H_cal_nhits;
   Double_t        H_cal_ntracks;
   Double_t        H_cal_xclusttrack;
   Double_t        H_cal_xtrack;
   Double_t        H_cal_yclusttrack;
   Double_t        H_cal_ytrack;
   Double_t        T_hms_hEL_CLEAN_tdcMultiplicity;
   Double_t        T_hms_hEL_CLEAN_tdcTime;
   Double_t        T_hms_hEL_CLEAN_tdcTimeRaw;
   Double_t        T_hms_hEL_HI_tdcMultiplicity;
   Double_t        T_hms_hEL_HI_tdcTime;
   Double_t        T_hms_hEL_HI_tdcTimeRaw;
   Double_t        T_hms_hEL_LO_LO_tdcMultiplicity;
   Double_t        T_hms_hEL_LO_LO_tdcTime;
   Double_t        T_hms_hEL_LO_LO_tdcTimeRaw;
   Double_t        T_hms_hEL_LO_tdcMultiplicity;
   Double_t        T_hms_hEL_LO_tdcTime;
   Double_t        T_hms_hEL_LO_tdcTimeRaw;
   Double_t        T_hms_hEL_REAL_tdcMultiplicity;
   Double_t        T_hms_hEL_REAL_tdcTime;
   Double_t        T_hms_hEL_REAL_tdcTimeRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcMultiplicity;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPed;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPedRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPulseAmp;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPulseAmpRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPulseInt;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPulseIntRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPulseTime;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPulseTimeRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampMultiplicity;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPed;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPedRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPulseAmp;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPulseAmpRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPulseInt;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPulseIntRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPulseTime;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPulseTimeRaw;
 //THaEvent        *Event_Branch;
   ULong64_t       fEvtHdr_fEvtTime;
   UInt_t          fEvtHdr_fEvtNum;
   UInt_t          fEvtHdr_fEvtType;
   UInt_t          fEvtHdr_fEvtLen;
   Int_t           fEvtHdr_fHelicity;
   UInt_t          fEvtHdr_fTrigBits;
   UInt_t          fEvtHdr_fRun;

   // List of branches
   TBranch        *b_Ndata_H_cal_1pr_emean;   //!
   TBranch        *b_H_cal_1pr_emean;   //!
   TBranch        *b_Ndata_H_cal_1pr_eneg;   //!
   TBranch        *b_H_cal_1pr_eneg;   //!
   TBranch        *b_Ndata_H_cal_1pr_epos;   //!
   TBranch        *b_H_cal_1pr_epos;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodNegAdcMult;   //!
   TBranch        *b_H_cal_1pr_goodNegAdcMult;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodNegAdcPed;   //!
   TBranch        *b_H_cal_1pr_goodNegAdcPed;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodNegAdcPulseAmp;   //!
   TBranch        *b_H_cal_1pr_goodNegAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodNegAdcPulseInt;   //!
   TBranch        *b_H_cal_1pr_goodNegAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_1pr_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodNegAdcPulseTime;   //!
   TBranch        *b_H_cal_1pr_goodNegAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_1pr_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodPosAdcMult;   //!
   TBranch        *b_H_cal_1pr_goodPosAdcMult;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodPosAdcPed;   //!
   TBranch        *b_H_cal_1pr_goodPosAdcPed;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodPosAdcPulseAmp;   //!
   TBranch        *b_H_cal_1pr_goodPosAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodPosAdcPulseInt;   //!
   TBranch        *b_H_cal_1pr_goodPosAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_1pr_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodPosAdcPulseTime;   //!
   TBranch        *b_H_cal_1pr_goodPosAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_1pr_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcCounter;   //!
   TBranch        *b_H_cal_1pr_negAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcErrorFlag;   //!
   TBranch        *b_H_cal_1pr_negAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPed;   //!
   TBranch        *b_H_cal_1pr_negAdcPed;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPedRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPulseAmp;   //!
   TBranch        *b_H_cal_1pr_negAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPulseInt;   //!
   TBranch        *b_H_cal_1pr_negAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPulseTime;   //!
   TBranch        *b_H_cal_1pr_negAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPed;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPedRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPulseInt;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPulseTime;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_numGoodNegAdcHits;   //!
   TBranch        *b_H_cal_1pr_numGoodNegAdcHits;   //!
   TBranch        *b_Ndata_H_cal_1pr_numGoodPosAdcHits;   //!
   TBranch        *b_H_cal_1pr_numGoodPosAdcHits;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcCounter;   //!
   TBranch        *b_H_cal_1pr_posAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcErrorFlag;   //!
   TBranch        *b_H_cal_1pr_posAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPed;   //!
   TBranch        *b_H_cal_1pr_posAdcPed;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPedRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPulseAmp;   //!
   TBranch        *b_H_cal_1pr_posAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPulseInt;   //!
   TBranch        *b_H_cal_1pr_posAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPulseTime;   //!
   TBranch        *b_H_cal_1pr_posAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPed;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPedRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPulseInt;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPulseTime;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_emean;   //!
   TBranch        *b_H_cal_2ta_emean;   //!
   TBranch        *b_Ndata_H_cal_2ta_eneg;   //!
   TBranch        *b_H_cal_2ta_eneg;   //!
   TBranch        *b_Ndata_H_cal_2ta_epos;   //!
   TBranch        *b_H_cal_2ta_epos;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodNegAdcMult;   //!
   TBranch        *b_H_cal_2ta_goodNegAdcMult;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodNegAdcPed;   //!
   TBranch        *b_H_cal_2ta_goodNegAdcPed;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodNegAdcPulseAmp;   //!
   TBranch        *b_H_cal_2ta_goodNegAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodNegAdcPulseInt;   //!
   TBranch        *b_H_cal_2ta_goodNegAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_2ta_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodNegAdcPulseTime;   //!
   TBranch        *b_H_cal_2ta_goodNegAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_2ta_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodPosAdcMult;   //!
   TBranch        *b_H_cal_2ta_goodPosAdcMult;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodPosAdcPed;   //!
   TBranch        *b_H_cal_2ta_goodPosAdcPed;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodPosAdcPulseAmp;   //!
   TBranch        *b_H_cal_2ta_goodPosAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodPosAdcPulseInt;   //!
   TBranch        *b_H_cal_2ta_goodPosAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_2ta_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodPosAdcPulseTime;   //!
   TBranch        *b_H_cal_2ta_goodPosAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_2ta_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcCounter;   //!
   TBranch        *b_H_cal_2ta_negAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcErrorFlag;   //!
   TBranch        *b_H_cal_2ta_negAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPed;   //!
   TBranch        *b_H_cal_2ta_negAdcPed;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPedRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPulseAmp;   //!
   TBranch        *b_H_cal_2ta_negAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPulseInt;   //!
   TBranch        *b_H_cal_2ta_negAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPulseTime;   //!
   TBranch        *b_H_cal_2ta_negAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPed;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPedRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPulseInt;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPulseTime;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_numGoodNegAdcHits;   //!
   TBranch        *b_H_cal_2ta_numGoodNegAdcHits;   //!
   TBranch        *b_Ndata_H_cal_2ta_numGoodPosAdcHits;   //!
   TBranch        *b_H_cal_2ta_numGoodPosAdcHits;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcCounter;   //!
   TBranch        *b_H_cal_2ta_posAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcErrorFlag;   //!
   TBranch        *b_H_cal_2ta_posAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPed;   //!
   TBranch        *b_H_cal_2ta_posAdcPed;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPedRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPulseAmp;   //!
   TBranch        *b_H_cal_2ta_posAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPulseInt;   //!
   TBranch        *b_H_cal_2ta_posAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPulseTime;   //!
   TBranch        *b_H_cal_2ta_posAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPed;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPedRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPulseInt;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPulseTime;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_emean;   //!
   TBranch        *b_H_cal_3ta_emean;   //!
   TBranch        *b_Ndata_H_cal_3ta_eneg;   //!
   TBranch        *b_H_cal_3ta_eneg;   //!
   TBranch        *b_Ndata_H_cal_3ta_epos;   //!
   TBranch        *b_H_cal_3ta_epos;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodNegAdcMult;   //!
   TBranch        *b_H_cal_3ta_goodNegAdcMult;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodNegAdcPed;   //!
   TBranch        *b_H_cal_3ta_goodNegAdcPed;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodNegAdcPulseAmp;   //!
   TBranch        *b_H_cal_3ta_goodNegAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodNegAdcPulseInt;   //!
   TBranch        *b_H_cal_3ta_goodNegAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_3ta_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodNegAdcPulseTime;   //!
   TBranch        *b_H_cal_3ta_goodNegAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_3ta_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodPosAdcMult;   //!
   TBranch        *b_H_cal_3ta_goodPosAdcMult;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodPosAdcPed;   //!
   TBranch        *b_H_cal_3ta_goodPosAdcPed;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodPosAdcPulseAmp;   //!
   TBranch        *b_H_cal_3ta_goodPosAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodPosAdcPulseInt;   //!
   TBranch        *b_H_cal_3ta_goodPosAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_3ta_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodPosAdcPulseTime;   //!
   TBranch        *b_H_cal_3ta_goodPosAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_3ta_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcCounter;   //!
   TBranch        *b_H_cal_3ta_negAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcErrorFlag;   //!
   TBranch        *b_H_cal_3ta_negAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPed;   //!
   TBranch        *b_H_cal_3ta_negAdcPed;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPedRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPulseAmp;   //!
   TBranch        *b_H_cal_3ta_negAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPulseInt;   //!
   TBranch        *b_H_cal_3ta_negAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPulseTime;   //!
   TBranch        *b_H_cal_3ta_negAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPed;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPedRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPulseInt;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPulseTime;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_numGoodNegAdcHits;   //!
   TBranch        *b_H_cal_3ta_numGoodNegAdcHits;   //!
   TBranch        *b_Ndata_H_cal_3ta_numGoodPosAdcHits;   //!
   TBranch        *b_H_cal_3ta_numGoodPosAdcHits;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcCounter;   //!
   TBranch        *b_H_cal_3ta_posAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcErrorFlag;   //!
   TBranch        *b_H_cal_3ta_posAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPed;   //!
   TBranch        *b_H_cal_3ta_posAdcPed;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPedRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPulseAmp;   //!
   TBranch        *b_H_cal_3ta_posAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPulseInt;   //!
   TBranch        *b_H_cal_3ta_posAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPulseTime;   //!
   TBranch        *b_H_cal_3ta_posAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPed;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPedRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPulseInt;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPulseTime;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_emean;   //!
   TBranch        *b_H_cal_4ta_emean;   //!
   TBranch        *b_Ndata_H_cal_4ta_eneg;   //!
   TBranch        *b_H_cal_4ta_eneg;   //!
   TBranch        *b_Ndata_H_cal_4ta_epos;   //!
   TBranch        *b_H_cal_4ta_epos;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodNegAdcMult;   //!
   TBranch        *b_H_cal_4ta_goodNegAdcMult;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodNegAdcPed;   //!
   TBranch        *b_H_cal_4ta_goodNegAdcPed;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodNegAdcPulseAmp;   //!
   TBranch        *b_H_cal_4ta_goodNegAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodNegAdcPulseInt;   //!
   TBranch        *b_H_cal_4ta_goodNegAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_4ta_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodNegAdcPulseTime;   //!
   TBranch        *b_H_cal_4ta_goodNegAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_4ta_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodPosAdcMult;   //!
   TBranch        *b_H_cal_4ta_goodPosAdcMult;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodPosAdcPed;   //!
   TBranch        *b_H_cal_4ta_goodPosAdcPed;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodPosAdcPulseAmp;   //!
   TBranch        *b_H_cal_4ta_goodPosAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodPosAdcPulseInt;   //!
   TBranch        *b_H_cal_4ta_goodPosAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_4ta_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodPosAdcPulseTime;   //!
   TBranch        *b_H_cal_4ta_goodPosAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_4ta_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcCounter;   //!
   TBranch        *b_H_cal_4ta_negAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcErrorFlag;   //!
   TBranch        *b_H_cal_4ta_negAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPed;   //!
   TBranch        *b_H_cal_4ta_negAdcPed;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPedRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPulseAmp;   //!
   TBranch        *b_H_cal_4ta_negAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPulseInt;   //!
   TBranch        *b_H_cal_4ta_negAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPulseTime;   //!
   TBranch        *b_H_cal_4ta_negAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPed;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPedRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPulseInt;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPulseTime;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_numGoodNegAdcHits;   //!
   TBranch        *b_H_cal_4ta_numGoodNegAdcHits;   //!
   TBranch        *b_Ndata_H_cal_4ta_numGoodPosAdcHits;   //!
   TBranch        *b_H_cal_4ta_numGoodPosAdcHits;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcCounter;   //!
   TBranch        *b_H_cal_4ta_posAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcErrorFlag;   //!
   TBranch        *b_H_cal_4ta_posAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPed;   //!
   TBranch        *b_H_cal_4ta_posAdcPed;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPedRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPulseAmp;   //!
   TBranch        *b_H_cal_4ta_posAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPulseInt;   //!
   TBranch        *b_H_cal_4ta_posAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPulseTime;   //!
   TBranch        *b_H_cal_4ta_posAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPed;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPedRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPulseInt;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPulseTime;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_T_hms_hEL_CLEAN_vecTdcTime;   //!
   TBranch        *b_T_hms_hEL_CLEAN_vecTdcTime;   //!
   TBranch        *b_Ndata_T_hms_hEL_CLEAN_vecTdcTimeRaw;   //!
   TBranch        *b_T_hms_hEL_CLEAN_vecTdcTimeRaw;   //!
   TBranch        *b_Ndata_T_hms_hEL_HI_vecTdcTime;   //!
   TBranch        *b_T_hms_hEL_HI_vecTdcTime;   //!
   TBranch        *b_Ndata_T_hms_hEL_HI_vecTdcTimeRaw;   //!
   TBranch        *b_T_hms_hEL_HI_vecTdcTimeRaw;   //!
   TBranch        *b_Ndata_T_hms_hEL_LO_LO_vecTdcTime;   //!
   TBranch        *b_T_hms_hEL_LO_LO_vecTdcTime;   //!
   TBranch        *b_Ndata_T_hms_hEL_LO_LO_vecTdcTimeRaw;   //!
   TBranch        *b_T_hms_hEL_LO_LO_vecTdcTimeRaw;   //!
   TBranch        *b_Ndata_T_hms_hEL_LO_vecTdcTime;   //!
   TBranch        *b_T_hms_hEL_LO_vecTdcTime;   //!
   TBranch        *b_Ndata_T_hms_hEL_LO_vecTdcTimeRaw;   //!
   TBranch        *b_T_hms_hEL_LO_vecTdcTimeRaw;   //!
   TBranch        *b_Ndata_T_hms_hEL_REAL_vecTdcTime;   //!
   TBranch        *b_T_hms_hEL_REAL_vecTdcTime;   //!
   TBranch        *b_Ndata_T_hms_hEL_REAL_vecTdcTimeRaw;   //!
   TBranch        *b_T_hms_hEL_REAL_vecTdcTimeRaw;   //!
   TBranch        *b_H_cal_1pr_eplane;   //!
   TBranch        *b_H_cal_1pr_eplane_neg;   //!
   TBranch        *b_H_cal_1pr_eplane_pos;   //!
   TBranch        *b_H_cal_1pr_totNumGoodNegAdcHits;   //!
   TBranch        *b_H_cal_1pr_totNumGoodPosAdcHits;   //!
   TBranch        *b_H_cal_1pr_totNumNegAdcHits;   //!
   TBranch        *b_H_cal_1pr_totNumPosAdcHits;   //!
   TBranch        *b_H_cal_1pr_totnumAdcHits;   //!
   TBranch        *b_H_cal_1pr_totnumGoodAdcHits;   //!
   TBranch        *b_H_cal_2ta_eplane;   //!
   TBranch        *b_H_cal_2ta_eplane_neg;   //!
   TBranch        *b_H_cal_2ta_eplane_pos;   //!
   TBranch        *b_H_cal_2ta_totNumGoodNegAdcHits;   //!
   TBranch        *b_H_cal_2ta_totNumGoodPosAdcHits;   //!
   TBranch        *b_H_cal_2ta_totNumNegAdcHits;   //!
   TBranch        *b_H_cal_2ta_totNumPosAdcHits;   //!
   TBranch        *b_H_cal_2ta_totnumAdcHits;   //!
   TBranch        *b_H_cal_2ta_totnumGoodAdcHits;   //!
   TBranch        *b_H_cal_3ta_eplane;   //!
   TBranch        *b_H_cal_3ta_eplane_neg;   //!
   TBranch        *b_H_cal_3ta_eplane_pos;   //!
   TBranch        *b_H_cal_3ta_totNumGoodNegAdcHits;   //!
   TBranch        *b_H_cal_3ta_totNumGoodPosAdcHits;   //!
   TBranch        *b_H_cal_3ta_totNumNegAdcHits;   //!
   TBranch        *b_H_cal_3ta_totNumPosAdcHits;   //!
   TBranch        *b_H_cal_3ta_totnumAdcHits;   //!
   TBranch        *b_H_cal_3ta_totnumGoodAdcHits;   //!
   TBranch        *b_H_cal_4ta_eplane;   //!
   TBranch        *b_H_cal_4ta_eplane_neg;   //!
   TBranch        *b_H_cal_4ta_eplane_pos;   //!
   TBranch        *b_H_cal_4ta_totNumGoodNegAdcHits;   //!
   TBranch        *b_H_cal_4ta_totNumGoodPosAdcHits;   //!
   TBranch        *b_H_cal_4ta_totNumNegAdcHits;   //!
   TBranch        *b_H_cal_4ta_totNumPosAdcHits;   //!
   TBranch        *b_H_cal_4ta_totnumAdcHits;   //!
   TBranch        *b_H_cal_4ta_totnumGoodAdcHits;   //!
   TBranch        *b_H_cal_eprtrack;   //!
   TBranch        *b_H_cal_eprtracknorm;   //!
   TBranch        *b_H_cal_etot;   //!
   TBranch        *b_H_cal_etotnorm;   //!
   TBranch        *b_H_cal_etottracknorm;   //!
   TBranch        *b_H_cal_etrack;   //!
   TBranch        *b_H_cal_etracknorm;   //!
   TBranch        *b_H_cal_nclust;   //!
   TBranch        *b_H_cal_nclusttrack;   //!
   TBranch        *b_H_cal_nhits;   //!
   TBranch        *b_H_cal_ntracks;   //!
   TBranch        *b_H_cal_xclusttrack;   //!
   TBranch        *b_H_cal_xtrack;   //!
   TBranch        *b_H_cal_yclusttrack;   //!
   TBranch        *b_H_cal_ytrack;   //!
   TBranch        *b_T_hms_hEL_CLEAN_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hEL_CLEAN_tdcTime;   //!
   TBranch        *b_T_hms_hEL_CLEAN_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hEL_HI_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hEL_HI_tdcTime;   //!
   TBranch        *b_T_hms_hEL_HI_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hEL_LO_LO_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hEL_LO_LO_tdcTime;   //!
   TBranch        *b_T_hms_hEL_LO_LO_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hEL_LO_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hEL_LO_tdcTime;   //!
   TBranch        *b_T_hms_hEL_LO_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hEL_REAL_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hEL_REAL_tdcTime;   //!
   TBranch        *b_T_hms_hEL_REAL_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcMultiplicity;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPed;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPedRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPulseAmp;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPulseAmpRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPulseInt;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPulseIntRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPulseTime;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPulseTimeRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampMultiplicity;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPed;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPedRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPulseAmp;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPulseAmpRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPulseInt;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPulseIntRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPulseTime;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPulseTimeRaw;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtTime;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtNum;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtType;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtLen;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fHelicity;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fTrigBits;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fRun;   //!

   T_new(TTree *tree=0);
   virtual ~T_new();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef T_new_cxx
T_new::T_new(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../../ROOTfiles/NPS/TIMING/nps_hms_notiming_window_1753_-1.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../../ROOTfiles/NPS/TIMING/nps_hms_notiming_window_1753_-1.root");
      }
      f->GetObject("T",tree);

   }
   Init(tree);
}

T_new::~T_new()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t T_new::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t T_new::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void T_new::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Ndata.H.cal.1pr.emean", &Ndata_H_cal_1pr_emean, &b_Ndata_H_cal_1pr_emean);
   fChain->SetBranchAddress("H.cal.1pr.emean", H_cal_1pr_emean, &b_H_cal_1pr_emean);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.eneg", &Ndata_H_cal_1pr_eneg, &b_Ndata_H_cal_1pr_eneg);
   fChain->SetBranchAddress("H.cal.1pr.eneg", H_cal_1pr_eneg, &b_H_cal_1pr_eneg);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.epos", &Ndata_H_cal_1pr_epos, &b_Ndata_H_cal_1pr_epos);
   fChain->SetBranchAddress("H.cal.1pr.epos", H_cal_1pr_epos, &b_H_cal_1pr_epos);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodNegAdcMult", &Ndata_H_cal_1pr_goodNegAdcMult, &b_Ndata_H_cal_1pr_goodNegAdcMult);
   fChain->SetBranchAddress("H.cal.1pr.goodNegAdcMult", H_cal_1pr_goodNegAdcMult, &b_H_cal_1pr_goodNegAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodNegAdcPed", &Ndata_H_cal_1pr_goodNegAdcPed, &b_Ndata_H_cal_1pr_goodNegAdcPed);
   fChain->SetBranchAddress("H.cal.1pr.goodNegAdcPed", H_cal_1pr_goodNegAdcPed, &b_H_cal_1pr_goodNegAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodNegAdcPulseAmp", &Ndata_H_cal_1pr_goodNegAdcPulseAmp, &b_Ndata_H_cal_1pr_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.1pr.goodNegAdcPulseAmp", H_cal_1pr_goodNegAdcPulseAmp, &b_H_cal_1pr_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodNegAdcPulseInt", &Ndata_H_cal_1pr_goodNegAdcPulseInt, &b_Ndata_H_cal_1pr_goodNegAdcPulseInt);
   fChain->SetBranchAddress("H.cal.1pr.goodNegAdcPulseInt", H_cal_1pr_goodNegAdcPulseInt, &b_H_cal_1pr_goodNegAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodNegAdcPulseIntRaw", &Ndata_H_cal_1pr_goodNegAdcPulseIntRaw, &b_Ndata_H_cal_1pr_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.1pr.goodNegAdcPulseIntRaw", H_cal_1pr_goodNegAdcPulseIntRaw, &b_H_cal_1pr_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodNegAdcPulseTime", &Ndata_H_cal_1pr_goodNegAdcPulseTime, &b_Ndata_H_cal_1pr_goodNegAdcPulseTime);
   fChain->SetBranchAddress("H.cal.1pr.goodNegAdcPulseTime", H_cal_1pr_goodNegAdcPulseTime, &b_H_cal_1pr_goodNegAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodNegAdcTdcDiffTime", &Ndata_H_cal_1pr_goodNegAdcTdcDiffTime, &b_Ndata_H_cal_1pr_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.1pr.goodNegAdcTdcDiffTime", H_cal_1pr_goodNegAdcTdcDiffTime, &b_H_cal_1pr_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodPosAdcMult", &Ndata_H_cal_1pr_goodPosAdcMult, &b_Ndata_H_cal_1pr_goodPosAdcMult);
   fChain->SetBranchAddress("H.cal.1pr.goodPosAdcMult", H_cal_1pr_goodPosAdcMult, &b_H_cal_1pr_goodPosAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodPosAdcPed", &Ndata_H_cal_1pr_goodPosAdcPed, &b_Ndata_H_cal_1pr_goodPosAdcPed);
   fChain->SetBranchAddress("H.cal.1pr.goodPosAdcPed", H_cal_1pr_goodPosAdcPed, &b_H_cal_1pr_goodPosAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodPosAdcPulseAmp", &Ndata_H_cal_1pr_goodPosAdcPulseAmp, &b_Ndata_H_cal_1pr_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.1pr.goodPosAdcPulseAmp", H_cal_1pr_goodPosAdcPulseAmp, &b_H_cal_1pr_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodPosAdcPulseInt", &Ndata_H_cal_1pr_goodPosAdcPulseInt, &b_Ndata_H_cal_1pr_goodPosAdcPulseInt);
   fChain->SetBranchAddress("H.cal.1pr.goodPosAdcPulseInt", H_cal_1pr_goodPosAdcPulseInt, &b_H_cal_1pr_goodPosAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodPosAdcPulseIntRaw", &Ndata_H_cal_1pr_goodPosAdcPulseIntRaw, &b_Ndata_H_cal_1pr_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.1pr.goodPosAdcPulseIntRaw", H_cal_1pr_goodPosAdcPulseIntRaw, &b_H_cal_1pr_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodPosAdcPulseTime", &Ndata_H_cal_1pr_goodPosAdcPulseTime, &b_Ndata_H_cal_1pr_goodPosAdcPulseTime);
   fChain->SetBranchAddress("H.cal.1pr.goodPosAdcPulseTime", H_cal_1pr_goodPosAdcPulseTime, &b_H_cal_1pr_goodPosAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodPosAdcTdcDiffTime", &Ndata_H_cal_1pr_goodPosAdcTdcDiffTime, &b_Ndata_H_cal_1pr_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.1pr.goodPosAdcTdcDiffTime", H_cal_1pr_goodPosAdcTdcDiffTime, &b_H_cal_1pr_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcCounter", &Ndata_H_cal_1pr_negAdcCounter, &b_Ndata_H_cal_1pr_negAdcCounter);
   fChain->SetBranchAddress("H.cal.1pr.negAdcCounter", H_cal_1pr_negAdcCounter, &b_H_cal_1pr_negAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcErrorFlag", &Ndata_H_cal_1pr_negAdcErrorFlag, &b_Ndata_H_cal_1pr_negAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.1pr.negAdcErrorFlag", H_cal_1pr_negAdcErrorFlag, &b_H_cal_1pr_negAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPed", &Ndata_H_cal_1pr_negAdcPed, &b_Ndata_H_cal_1pr_negAdcPed);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPed", H_cal_1pr_negAdcPed, &b_H_cal_1pr_negAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPedRaw", &Ndata_H_cal_1pr_negAdcPedRaw, &b_Ndata_H_cal_1pr_negAdcPedRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPedRaw", H_cal_1pr_negAdcPedRaw, &b_H_cal_1pr_negAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPulseAmp", &Ndata_H_cal_1pr_negAdcPulseAmp, &b_Ndata_H_cal_1pr_negAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPulseAmp", H_cal_1pr_negAdcPulseAmp, &b_H_cal_1pr_negAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPulseAmpRaw", &Ndata_H_cal_1pr_negAdcPulseAmpRaw, &b_Ndata_H_cal_1pr_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPulseAmpRaw", H_cal_1pr_negAdcPulseAmpRaw, &b_H_cal_1pr_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPulseInt", &Ndata_H_cal_1pr_negAdcPulseInt, &b_Ndata_H_cal_1pr_negAdcPulseInt);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPulseInt", H_cal_1pr_negAdcPulseInt, &b_H_cal_1pr_negAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPulseIntRaw", &Ndata_H_cal_1pr_negAdcPulseIntRaw, &b_Ndata_H_cal_1pr_negAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPulseIntRaw", H_cal_1pr_negAdcPulseIntRaw, &b_H_cal_1pr_negAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPulseTime", &Ndata_H_cal_1pr_negAdcPulseTime, &b_Ndata_H_cal_1pr_negAdcPulseTime);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPulseTime", H_cal_1pr_negAdcPulseTime, &b_H_cal_1pr_negAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPulseTimeRaw", &Ndata_H_cal_1pr_negAdcPulseTimeRaw, &b_Ndata_H_cal_1pr_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPulseTimeRaw", H_cal_1pr_negAdcPulseTimeRaw, &b_H_cal_1pr_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPed", &Ndata_H_cal_1pr_negAdcSampPed, &b_Ndata_H_cal_1pr_negAdcSampPed);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPed", &H_cal_1pr_negAdcSampPed, &b_H_cal_1pr_negAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPedRaw", &Ndata_H_cal_1pr_negAdcSampPedRaw, &b_Ndata_H_cal_1pr_negAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPedRaw", &H_cal_1pr_negAdcSampPedRaw, &b_H_cal_1pr_negAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPulseAmp", &Ndata_H_cal_1pr_negAdcSampPulseAmp, &b_Ndata_H_cal_1pr_negAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPulseAmp", &H_cal_1pr_negAdcSampPulseAmp, &b_H_cal_1pr_negAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPulseAmpRaw", &Ndata_H_cal_1pr_negAdcSampPulseAmpRaw, &b_Ndata_H_cal_1pr_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPulseAmpRaw", &H_cal_1pr_negAdcSampPulseAmpRaw, &b_H_cal_1pr_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPulseInt", &Ndata_H_cal_1pr_negAdcSampPulseInt, &b_Ndata_H_cal_1pr_negAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPulseInt", &H_cal_1pr_negAdcSampPulseInt, &b_H_cal_1pr_negAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPulseIntRaw", &Ndata_H_cal_1pr_negAdcSampPulseIntRaw, &b_Ndata_H_cal_1pr_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPulseIntRaw", &H_cal_1pr_negAdcSampPulseIntRaw, &b_H_cal_1pr_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPulseTime", &Ndata_H_cal_1pr_negAdcSampPulseTime, &b_Ndata_H_cal_1pr_negAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPulseTime", &H_cal_1pr_negAdcSampPulseTime, &b_H_cal_1pr_negAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPulseTimeRaw", &Ndata_H_cal_1pr_negAdcSampPulseTimeRaw, &b_Ndata_H_cal_1pr_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPulseTimeRaw", &H_cal_1pr_negAdcSampPulseTimeRaw, &b_H_cal_1pr_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.numGoodNegAdcHits", &Ndata_H_cal_1pr_numGoodNegAdcHits, &b_Ndata_H_cal_1pr_numGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.1pr.numGoodNegAdcHits", H_cal_1pr_numGoodNegAdcHits, &b_H_cal_1pr_numGoodNegAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.numGoodPosAdcHits", &Ndata_H_cal_1pr_numGoodPosAdcHits, &b_Ndata_H_cal_1pr_numGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.1pr.numGoodPosAdcHits", H_cal_1pr_numGoodPosAdcHits, &b_H_cal_1pr_numGoodPosAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcCounter", &Ndata_H_cal_1pr_posAdcCounter, &b_Ndata_H_cal_1pr_posAdcCounter);
   fChain->SetBranchAddress("H.cal.1pr.posAdcCounter", H_cal_1pr_posAdcCounter, &b_H_cal_1pr_posAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcErrorFlag", &Ndata_H_cal_1pr_posAdcErrorFlag, &b_Ndata_H_cal_1pr_posAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.1pr.posAdcErrorFlag", H_cal_1pr_posAdcErrorFlag, &b_H_cal_1pr_posAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPed", &Ndata_H_cal_1pr_posAdcPed, &b_Ndata_H_cal_1pr_posAdcPed);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPed", H_cal_1pr_posAdcPed, &b_H_cal_1pr_posAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPedRaw", &Ndata_H_cal_1pr_posAdcPedRaw, &b_Ndata_H_cal_1pr_posAdcPedRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPedRaw", H_cal_1pr_posAdcPedRaw, &b_H_cal_1pr_posAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPulseAmp", &Ndata_H_cal_1pr_posAdcPulseAmp, &b_Ndata_H_cal_1pr_posAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPulseAmp", H_cal_1pr_posAdcPulseAmp, &b_H_cal_1pr_posAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPulseAmpRaw", &Ndata_H_cal_1pr_posAdcPulseAmpRaw, &b_Ndata_H_cal_1pr_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPulseAmpRaw", H_cal_1pr_posAdcPulseAmpRaw, &b_H_cal_1pr_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPulseInt", &Ndata_H_cal_1pr_posAdcPulseInt, &b_Ndata_H_cal_1pr_posAdcPulseInt);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPulseInt", H_cal_1pr_posAdcPulseInt, &b_H_cal_1pr_posAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPulseIntRaw", &Ndata_H_cal_1pr_posAdcPulseIntRaw, &b_Ndata_H_cal_1pr_posAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPulseIntRaw", H_cal_1pr_posAdcPulseIntRaw, &b_H_cal_1pr_posAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPulseTime", &Ndata_H_cal_1pr_posAdcPulseTime, &b_Ndata_H_cal_1pr_posAdcPulseTime);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPulseTime", H_cal_1pr_posAdcPulseTime, &b_H_cal_1pr_posAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPulseTimeRaw", &Ndata_H_cal_1pr_posAdcPulseTimeRaw, &b_Ndata_H_cal_1pr_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPulseTimeRaw", H_cal_1pr_posAdcPulseTimeRaw, &b_H_cal_1pr_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPed", &Ndata_H_cal_1pr_posAdcSampPed, &b_Ndata_H_cal_1pr_posAdcSampPed);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPed", &H_cal_1pr_posAdcSampPed, &b_H_cal_1pr_posAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPedRaw", &Ndata_H_cal_1pr_posAdcSampPedRaw, &b_Ndata_H_cal_1pr_posAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPedRaw", &H_cal_1pr_posAdcSampPedRaw, &b_H_cal_1pr_posAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPulseAmp", &Ndata_H_cal_1pr_posAdcSampPulseAmp, &b_Ndata_H_cal_1pr_posAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPulseAmp", &H_cal_1pr_posAdcSampPulseAmp, &b_H_cal_1pr_posAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPulseAmpRaw", &Ndata_H_cal_1pr_posAdcSampPulseAmpRaw, &b_Ndata_H_cal_1pr_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPulseAmpRaw", &H_cal_1pr_posAdcSampPulseAmpRaw, &b_H_cal_1pr_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPulseInt", &Ndata_H_cal_1pr_posAdcSampPulseInt, &b_Ndata_H_cal_1pr_posAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPulseInt", &H_cal_1pr_posAdcSampPulseInt, &b_H_cal_1pr_posAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPulseIntRaw", &Ndata_H_cal_1pr_posAdcSampPulseIntRaw, &b_Ndata_H_cal_1pr_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPulseIntRaw", &H_cal_1pr_posAdcSampPulseIntRaw, &b_H_cal_1pr_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPulseTime", &Ndata_H_cal_1pr_posAdcSampPulseTime, &b_Ndata_H_cal_1pr_posAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPulseTime", &H_cal_1pr_posAdcSampPulseTime, &b_H_cal_1pr_posAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPulseTimeRaw", &Ndata_H_cal_1pr_posAdcSampPulseTimeRaw, &b_Ndata_H_cal_1pr_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPulseTimeRaw", &H_cal_1pr_posAdcSampPulseTimeRaw, &b_H_cal_1pr_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.emean", &Ndata_H_cal_2ta_emean, &b_Ndata_H_cal_2ta_emean);
   fChain->SetBranchAddress("H.cal.2ta.emean", H_cal_2ta_emean, &b_H_cal_2ta_emean);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.eneg", &Ndata_H_cal_2ta_eneg, &b_Ndata_H_cal_2ta_eneg);
   fChain->SetBranchAddress("H.cal.2ta.eneg", H_cal_2ta_eneg, &b_H_cal_2ta_eneg);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.epos", &Ndata_H_cal_2ta_epos, &b_Ndata_H_cal_2ta_epos);
   fChain->SetBranchAddress("H.cal.2ta.epos", H_cal_2ta_epos, &b_H_cal_2ta_epos);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodNegAdcMult", &Ndata_H_cal_2ta_goodNegAdcMult, &b_Ndata_H_cal_2ta_goodNegAdcMult);
   fChain->SetBranchAddress("H.cal.2ta.goodNegAdcMult", H_cal_2ta_goodNegAdcMult, &b_H_cal_2ta_goodNegAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodNegAdcPed", &Ndata_H_cal_2ta_goodNegAdcPed, &b_Ndata_H_cal_2ta_goodNegAdcPed);
   fChain->SetBranchAddress("H.cal.2ta.goodNegAdcPed", H_cal_2ta_goodNegAdcPed, &b_H_cal_2ta_goodNegAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodNegAdcPulseAmp", &Ndata_H_cal_2ta_goodNegAdcPulseAmp, &b_Ndata_H_cal_2ta_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.2ta.goodNegAdcPulseAmp", H_cal_2ta_goodNegAdcPulseAmp, &b_H_cal_2ta_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodNegAdcPulseInt", &Ndata_H_cal_2ta_goodNegAdcPulseInt, &b_Ndata_H_cal_2ta_goodNegAdcPulseInt);
   fChain->SetBranchAddress("H.cal.2ta.goodNegAdcPulseInt", H_cal_2ta_goodNegAdcPulseInt, &b_H_cal_2ta_goodNegAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodNegAdcPulseIntRaw", &Ndata_H_cal_2ta_goodNegAdcPulseIntRaw, &b_Ndata_H_cal_2ta_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.2ta.goodNegAdcPulseIntRaw", H_cal_2ta_goodNegAdcPulseIntRaw, &b_H_cal_2ta_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodNegAdcPulseTime", &Ndata_H_cal_2ta_goodNegAdcPulseTime, &b_Ndata_H_cal_2ta_goodNegAdcPulseTime);
   fChain->SetBranchAddress("H.cal.2ta.goodNegAdcPulseTime", H_cal_2ta_goodNegAdcPulseTime, &b_H_cal_2ta_goodNegAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodNegAdcTdcDiffTime", &Ndata_H_cal_2ta_goodNegAdcTdcDiffTime, &b_Ndata_H_cal_2ta_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.2ta.goodNegAdcTdcDiffTime", H_cal_2ta_goodNegAdcTdcDiffTime, &b_H_cal_2ta_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodPosAdcMult", &Ndata_H_cal_2ta_goodPosAdcMult, &b_Ndata_H_cal_2ta_goodPosAdcMult);
   fChain->SetBranchAddress("H.cal.2ta.goodPosAdcMult", H_cal_2ta_goodPosAdcMult, &b_H_cal_2ta_goodPosAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodPosAdcPed", &Ndata_H_cal_2ta_goodPosAdcPed, &b_Ndata_H_cal_2ta_goodPosAdcPed);
   fChain->SetBranchAddress("H.cal.2ta.goodPosAdcPed", H_cal_2ta_goodPosAdcPed, &b_H_cal_2ta_goodPosAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodPosAdcPulseAmp", &Ndata_H_cal_2ta_goodPosAdcPulseAmp, &b_Ndata_H_cal_2ta_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.2ta.goodPosAdcPulseAmp", H_cal_2ta_goodPosAdcPulseAmp, &b_H_cal_2ta_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodPosAdcPulseInt", &Ndata_H_cal_2ta_goodPosAdcPulseInt, &b_Ndata_H_cal_2ta_goodPosAdcPulseInt);
   fChain->SetBranchAddress("H.cal.2ta.goodPosAdcPulseInt", H_cal_2ta_goodPosAdcPulseInt, &b_H_cal_2ta_goodPosAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodPosAdcPulseIntRaw", &Ndata_H_cal_2ta_goodPosAdcPulseIntRaw, &b_Ndata_H_cal_2ta_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.2ta.goodPosAdcPulseIntRaw", H_cal_2ta_goodPosAdcPulseIntRaw, &b_H_cal_2ta_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodPosAdcPulseTime", &Ndata_H_cal_2ta_goodPosAdcPulseTime, &b_Ndata_H_cal_2ta_goodPosAdcPulseTime);
   fChain->SetBranchAddress("H.cal.2ta.goodPosAdcPulseTime", H_cal_2ta_goodPosAdcPulseTime, &b_H_cal_2ta_goodPosAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodPosAdcTdcDiffTime", &Ndata_H_cal_2ta_goodPosAdcTdcDiffTime, &b_Ndata_H_cal_2ta_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.2ta.goodPosAdcTdcDiffTime", H_cal_2ta_goodPosAdcTdcDiffTime, &b_H_cal_2ta_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcCounter", &Ndata_H_cal_2ta_negAdcCounter, &b_Ndata_H_cal_2ta_negAdcCounter);
   fChain->SetBranchAddress("H.cal.2ta.negAdcCounter", H_cal_2ta_negAdcCounter, &b_H_cal_2ta_negAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcErrorFlag", &Ndata_H_cal_2ta_negAdcErrorFlag, &b_Ndata_H_cal_2ta_negAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.2ta.negAdcErrorFlag", H_cal_2ta_negAdcErrorFlag, &b_H_cal_2ta_negAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPed", &Ndata_H_cal_2ta_negAdcPed, &b_Ndata_H_cal_2ta_negAdcPed);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPed", H_cal_2ta_negAdcPed, &b_H_cal_2ta_negAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPedRaw", &Ndata_H_cal_2ta_negAdcPedRaw, &b_Ndata_H_cal_2ta_negAdcPedRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPedRaw", H_cal_2ta_negAdcPedRaw, &b_H_cal_2ta_negAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPulseAmp", &Ndata_H_cal_2ta_negAdcPulseAmp, &b_Ndata_H_cal_2ta_negAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPulseAmp", H_cal_2ta_negAdcPulseAmp, &b_H_cal_2ta_negAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPulseAmpRaw", &Ndata_H_cal_2ta_negAdcPulseAmpRaw, &b_Ndata_H_cal_2ta_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPulseAmpRaw", H_cal_2ta_negAdcPulseAmpRaw, &b_H_cal_2ta_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPulseInt", &Ndata_H_cal_2ta_negAdcPulseInt, &b_Ndata_H_cal_2ta_negAdcPulseInt);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPulseInt", H_cal_2ta_negAdcPulseInt, &b_H_cal_2ta_negAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPulseIntRaw", &Ndata_H_cal_2ta_negAdcPulseIntRaw, &b_Ndata_H_cal_2ta_negAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPulseIntRaw", H_cal_2ta_negAdcPulseIntRaw, &b_H_cal_2ta_negAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPulseTime", &Ndata_H_cal_2ta_negAdcPulseTime, &b_Ndata_H_cal_2ta_negAdcPulseTime);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPulseTime", H_cal_2ta_negAdcPulseTime, &b_H_cal_2ta_negAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPulseTimeRaw", &Ndata_H_cal_2ta_negAdcPulseTimeRaw, &b_Ndata_H_cal_2ta_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPulseTimeRaw", H_cal_2ta_negAdcPulseTimeRaw, &b_H_cal_2ta_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPed", &Ndata_H_cal_2ta_negAdcSampPed, &b_Ndata_H_cal_2ta_negAdcSampPed);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPed", &H_cal_2ta_negAdcSampPed, &b_H_cal_2ta_negAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPedRaw", &Ndata_H_cal_2ta_negAdcSampPedRaw, &b_Ndata_H_cal_2ta_negAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPedRaw", &H_cal_2ta_negAdcSampPedRaw, &b_H_cal_2ta_negAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPulseAmp", &Ndata_H_cal_2ta_negAdcSampPulseAmp, &b_Ndata_H_cal_2ta_negAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPulseAmp", &H_cal_2ta_negAdcSampPulseAmp, &b_H_cal_2ta_negAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPulseAmpRaw", &Ndata_H_cal_2ta_negAdcSampPulseAmpRaw, &b_Ndata_H_cal_2ta_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPulseAmpRaw", &H_cal_2ta_negAdcSampPulseAmpRaw, &b_H_cal_2ta_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPulseInt", &Ndata_H_cal_2ta_negAdcSampPulseInt, &b_Ndata_H_cal_2ta_negAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPulseInt", &H_cal_2ta_negAdcSampPulseInt, &b_H_cal_2ta_negAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPulseIntRaw", &Ndata_H_cal_2ta_negAdcSampPulseIntRaw, &b_Ndata_H_cal_2ta_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPulseIntRaw", &H_cal_2ta_negAdcSampPulseIntRaw, &b_H_cal_2ta_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPulseTime", &Ndata_H_cal_2ta_negAdcSampPulseTime, &b_Ndata_H_cal_2ta_negAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPulseTime", &H_cal_2ta_negAdcSampPulseTime, &b_H_cal_2ta_negAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPulseTimeRaw", &Ndata_H_cal_2ta_negAdcSampPulseTimeRaw, &b_Ndata_H_cal_2ta_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPulseTimeRaw", &H_cal_2ta_negAdcSampPulseTimeRaw, &b_H_cal_2ta_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.numGoodNegAdcHits", &Ndata_H_cal_2ta_numGoodNegAdcHits, &b_Ndata_H_cal_2ta_numGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.numGoodNegAdcHits", H_cal_2ta_numGoodNegAdcHits, &b_H_cal_2ta_numGoodNegAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.numGoodPosAdcHits", &Ndata_H_cal_2ta_numGoodPosAdcHits, &b_Ndata_H_cal_2ta_numGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.numGoodPosAdcHits", H_cal_2ta_numGoodPosAdcHits, &b_H_cal_2ta_numGoodPosAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcCounter", &Ndata_H_cal_2ta_posAdcCounter, &b_Ndata_H_cal_2ta_posAdcCounter);
   fChain->SetBranchAddress("H.cal.2ta.posAdcCounter", H_cal_2ta_posAdcCounter, &b_H_cal_2ta_posAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcErrorFlag", &Ndata_H_cal_2ta_posAdcErrorFlag, &b_Ndata_H_cal_2ta_posAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.2ta.posAdcErrorFlag", H_cal_2ta_posAdcErrorFlag, &b_H_cal_2ta_posAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPed", &Ndata_H_cal_2ta_posAdcPed, &b_Ndata_H_cal_2ta_posAdcPed);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPed", H_cal_2ta_posAdcPed, &b_H_cal_2ta_posAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPedRaw", &Ndata_H_cal_2ta_posAdcPedRaw, &b_Ndata_H_cal_2ta_posAdcPedRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPedRaw", H_cal_2ta_posAdcPedRaw, &b_H_cal_2ta_posAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPulseAmp", &Ndata_H_cal_2ta_posAdcPulseAmp, &b_Ndata_H_cal_2ta_posAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPulseAmp", H_cal_2ta_posAdcPulseAmp, &b_H_cal_2ta_posAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPulseAmpRaw", &Ndata_H_cal_2ta_posAdcPulseAmpRaw, &b_Ndata_H_cal_2ta_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPulseAmpRaw", H_cal_2ta_posAdcPulseAmpRaw, &b_H_cal_2ta_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPulseInt", &Ndata_H_cal_2ta_posAdcPulseInt, &b_Ndata_H_cal_2ta_posAdcPulseInt);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPulseInt", H_cal_2ta_posAdcPulseInt, &b_H_cal_2ta_posAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPulseIntRaw", &Ndata_H_cal_2ta_posAdcPulseIntRaw, &b_Ndata_H_cal_2ta_posAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPulseIntRaw", H_cal_2ta_posAdcPulseIntRaw, &b_H_cal_2ta_posAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPulseTime", &Ndata_H_cal_2ta_posAdcPulseTime, &b_Ndata_H_cal_2ta_posAdcPulseTime);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPulseTime", H_cal_2ta_posAdcPulseTime, &b_H_cal_2ta_posAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPulseTimeRaw", &Ndata_H_cal_2ta_posAdcPulseTimeRaw, &b_Ndata_H_cal_2ta_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPulseTimeRaw", H_cal_2ta_posAdcPulseTimeRaw, &b_H_cal_2ta_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPed", &Ndata_H_cal_2ta_posAdcSampPed, &b_Ndata_H_cal_2ta_posAdcSampPed);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPed", &H_cal_2ta_posAdcSampPed, &b_H_cal_2ta_posAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPedRaw", &Ndata_H_cal_2ta_posAdcSampPedRaw, &b_Ndata_H_cal_2ta_posAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPedRaw", &H_cal_2ta_posAdcSampPedRaw, &b_H_cal_2ta_posAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPulseAmp", &Ndata_H_cal_2ta_posAdcSampPulseAmp, &b_Ndata_H_cal_2ta_posAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPulseAmp", &H_cal_2ta_posAdcSampPulseAmp, &b_H_cal_2ta_posAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPulseAmpRaw", &Ndata_H_cal_2ta_posAdcSampPulseAmpRaw, &b_Ndata_H_cal_2ta_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPulseAmpRaw", &H_cal_2ta_posAdcSampPulseAmpRaw, &b_H_cal_2ta_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPulseInt", &Ndata_H_cal_2ta_posAdcSampPulseInt, &b_Ndata_H_cal_2ta_posAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPulseInt", &H_cal_2ta_posAdcSampPulseInt, &b_H_cal_2ta_posAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPulseIntRaw", &Ndata_H_cal_2ta_posAdcSampPulseIntRaw, &b_Ndata_H_cal_2ta_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPulseIntRaw", &H_cal_2ta_posAdcSampPulseIntRaw, &b_H_cal_2ta_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPulseTime", &Ndata_H_cal_2ta_posAdcSampPulseTime, &b_Ndata_H_cal_2ta_posAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPulseTime", &H_cal_2ta_posAdcSampPulseTime, &b_H_cal_2ta_posAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPulseTimeRaw", &Ndata_H_cal_2ta_posAdcSampPulseTimeRaw, &b_Ndata_H_cal_2ta_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPulseTimeRaw", &H_cal_2ta_posAdcSampPulseTimeRaw, &b_H_cal_2ta_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.emean", &Ndata_H_cal_3ta_emean, &b_Ndata_H_cal_3ta_emean);
   fChain->SetBranchAddress("H.cal.3ta.emean", H_cal_3ta_emean, &b_H_cal_3ta_emean);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.eneg", &Ndata_H_cal_3ta_eneg, &b_Ndata_H_cal_3ta_eneg);
   fChain->SetBranchAddress("H.cal.3ta.eneg", H_cal_3ta_eneg, &b_H_cal_3ta_eneg);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.epos", &Ndata_H_cal_3ta_epos, &b_Ndata_H_cal_3ta_epos);
   fChain->SetBranchAddress("H.cal.3ta.epos", H_cal_3ta_epos, &b_H_cal_3ta_epos);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodNegAdcMult", &Ndata_H_cal_3ta_goodNegAdcMult, &b_Ndata_H_cal_3ta_goodNegAdcMult);
   fChain->SetBranchAddress("H.cal.3ta.goodNegAdcMult", H_cal_3ta_goodNegAdcMult, &b_H_cal_3ta_goodNegAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodNegAdcPed", &Ndata_H_cal_3ta_goodNegAdcPed, &b_Ndata_H_cal_3ta_goodNegAdcPed);
   fChain->SetBranchAddress("H.cal.3ta.goodNegAdcPed", H_cal_3ta_goodNegAdcPed, &b_H_cal_3ta_goodNegAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodNegAdcPulseAmp", &Ndata_H_cal_3ta_goodNegAdcPulseAmp, &b_Ndata_H_cal_3ta_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.3ta.goodNegAdcPulseAmp", H_cal_3ta_goodNegAdcPulseAmp, &b_H_cal_3ta_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodNegAdcPulseInt", &Ndata_H_cal_3ta_goodNegAdcPulseInt, &b_Ndata_H_cal_3ta_goodNegAdcPulseInt);
   fChain->SetBranchAddress("H.cal.3ta.goodNegAdcPulseInt", H_cal_3ta_goodNegAdcPulseInt, &b_H_cal_3ta_goodNegAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodNegAdcPulseIntRaw", &Ndata_H_cal_3ta_goodNegAdcPulseIntRaw, &b_Ndata_H_cal_3ta_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.3ta.goodNegAdcPulseIntRaw", H_cal_3ta_goodNegAdcPulseIntRaw, &b_H_cal_3ta_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodNegAdcPulseTime", &Ndata_H_cal_3ta_goodNegAdcPulseTime, &b_Ndata_H_cal_3ta_goodNegAdcPulseTime);
   fChain->SetBranchAddress("H.cal.3ta.goodNegAdcPulseTime", H_cal_3ta_goodNegAdcPulseTime, &b_H_cal_3ta_goodNegAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodNegAdcTdcDiffTime", &Ndata_H_cal_3ta_goodNegAdcTdcDiffTime, &b_Ndata_H_cal_3ta_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.3ta.goodNegAdcTdcDiffTime", H_cal_3ta_goodNegAdcTdcDiffTime, &b_H_cal_3ta_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodPosAdcMult", &Ndata_H_cal_3ta_goodPosAdcMult, &b_Ndata_H_cal_3ta_goodPosAdcMult);
   fChain->SetBranchAddress("H.cal.3ta.goodPosAdcMult", H_cal_3ta_goodPosAdcMult, &b_H_cal_3ta_goodPosAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodPosAdcPed", &Ndata_H_cal_3ta_goodPosAdcPed, &b_Ndata_H_cal_3ta_goodPosAdcPed);
   fChain->SetBranchAddress("H.cal.3ta.goodPosAdcPed", H_cal_3ta_goodPosAdcPed, &b_H_cal_3ta_goodPosAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodPosAdcPulseAmp", &Ndata_H_cal_3ta_goodPosAdcPulseAmp, &b_Ndata_H_cal_3ta_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.3ta.goodPosAdcPulseAmp", H_cal_3ta_goodPosAdcPulseAmp, &b_H_cal_3ta_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodPosAdcPulseInt", &Ndata_H_cal_3ta_goodPosAdcPulseInt, &b_Ndata_H_cal_3ta_goodPosAdcPulseInt);
   fChain->SetBranchAddress("H.cal.3ta.goodPosAdcPulseInt", H_cal_3ta_goodPosAdcPulseInt, &b_H_cal_3ta_goodPosAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodPosAdcPulseIntRaw", &Ndata_H_cal_3ta_goodPosAdcPulseIntRaw, &b_Ndata_H_cal_3ta_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.3ta.goodPosAdcPulseIntRaw", H_cal_3ta_goodPosAdcPulseIntRaw, &b_H_cal_3ta_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodPosAdcPulseTime", &Ndata_H_cal_3ta_goodPosAdcPulseTime, &b_Ndata_H_cal_3ta_goodPosAdcPulseTime);
   fChain->SetBranchAddress("H.cal.3ta.goodPosAdcPulseTime", H_cal_3ta_goodPosAdcPulseTime, &b_H_cal_3ta_goodPosAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodPosAdcTdcDiffTime", &Ndata_H_cal_3ta_goodPosAdcTdcDiffTime, &b_Ndata_H_cal_3ta_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.3ta.goodPosAdcTdcDiffTime", H_cal_3ta_goodPosAdcTdcDiffTime, &b_H_cal_3ta_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcCounter", &Ndata_H_cal_3ta_negAdcCounter, &b_Ndata_H_cal_3ta_negAdcCounter);
   fChain->SetBranchAddress("H.cal.3ta.negAdcCounter", &H_cal_3ta_negAdcCounter, &b_H_cal_3ta_negAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcErrorFlag", &Ndata_H_cal_3ta_negAdcErrorFlag, &b_Ndata_H_cal_3ta_negAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.3ta.negAdcErrorFlag", &H_cal_3ta_negAdcErrorFlag, &b_H_cal_3ta_negAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPed", &Ndata_H_cal_3ta_negAdcPed, &b_Ndata_H_cal_3ta_negAdcPed);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPed", &H_cal_3ta_negAdcPed, &b_H_cal_3ta_negAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPedRaw", &Ndata_H_cal_3ta_negAdcPedRaw, &b_Ndata_H_cal_3ta_negAdcPedRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPedRaw", &H_cal_3ta_negAdcPedRaw, &b_H_cal_3ta_negAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPulseAmp", &Ndata_H_cal_3ta_negAdcPulseAmp, &b_Ndata_H_cal_3ta_negAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPulseAmp", &H_cal_3ta_negAdcPulseAmp, &b_H_cal_3ta_negAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPulseAmpRaw", &Ndata_H_cal_3ta_negAdcPulseAmpRaw, &b_Ndata_H_cal_3ta_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPulseAmpRaw", &H_cal_3ta_negAdcPulseAmpRaw, &b_H_cal_3ta_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPulseInt", &Ndata_H_cal_3ta_negAdcPulseInt, &b_Ndata_H_cal_3ta_negAdcPulseInt);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPulseInt", &H_cal_3ta_negAdcPulseInt, &b_H_cal_3ta_negAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPulseIntRaw", &Ndata_H_cal_3ta_negAdcPulseIntRaw, &b_Ndata_H_cal_3ta_negAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPulseIntRaw", &H_cal_3ta_negAdcPulseIntRaw, &b_H_cal_3ta_negAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPulseTime", &Ndata_H_cal_3ta_negAdcPulseTime, &b_Ndata_H_cal_3ta_negAdcPulseTime);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPulseTime", &H_cal_3ta_negAdcPulseTime, &b_H_cal_3ta_negAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPulseTimeRaw", &Ndata_H_cal_3ta_negAdcPulseTimeRaw, &b_Ndata_H_cal_3ta_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPulseTimeRaw", &H_cal_3ta_negAdcPulseTimeRaw, &b_H_cal_3ta_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPed", &Ndata_H_cal_3ta_negAdcSampPed, &b_Ndata_H_cal_3ta_negAdcSampPed);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPed", &H_cal_3ta_negAdcSampPed, &b_H_cal_3ta_negAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPedRaw", &Ndata_H_cal_3ta_negAdcSampPedRaw, &b_Ndata_H_cal_3ta_negAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPedRaw", &H_cal_3ta_negAdcSampPedRaw, &b_H_cal_3ta_negAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPulseAmp", &Ndata_H_cal_3ta_negAdcSampPulseAmp, &b_Ndata_H_cal_3ta_negAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPulseAmp", &H_cal_3ta_negAdcSampPulseAmp, &b_H_cal_3ta_negAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPulseAmpRaw", &Ndata_H_cal_3ta_negAdcSampPulseAmpRaw, &b_Ndata_H_cal_3ta_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPulseAmpRaw", &H_cal_3ta_negAdcSampPulseAmpRaw, &b_H_cal_3ta_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPulseInt", &Ndata_H_cal_3ta_negAdcSampPulseInt, &b_Ndata_H_cal_3ta_negAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPulseInt", &H_cal_3ta_negAdcSampPulseInt, &b_H_cal_3ta_negAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPulseIntRaw", &Ndata_H_cal_3ta_negAdcSampPulseIntRaw, &b_Ndata_H_cal_3ta_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPulseIntRaw", &H_cal_3ta_negAdcSampPulseIntRaw, &b_H_cal_3ta_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPulseTime", &Ndata_H_cal_3ta_negAdcSampPulseTime, &b_Ndata_H_cal_3ta_negAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPulseTime", &H_cal_3ta_negAdcSampPulseTime, &b_H_cal_3ta_negAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPulseTimeRaw", &Ndata_H_cal_3ta_negAdcSampPulseTimeRaw, &b_Ndata_H_cal_3ta_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPulseTimeRaw", &H_cal_3ta_negAdcSampPulseTimeRaw, &b_H_cal_3ta_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.numGoodNegAdcHits", &Ndata_H_cal_3ta_numGoodNegAdcHits, &b_Ndata_H_cal_3ta_numGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.numGoodNegAdcHits", H_cal_3ta_numGoodNegAdcHits, &b_H_cal_3ta_numGoodNegAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.numGoodPosAdcHits", &Ndata_H_cal_3ta_numGoodPosAdcHits, &b_Ndata_H_cal_3ta_numGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.numGoodPosAdcHits", H_cal_3ta_numGoodPosAdcHits, &b_H_cal_3ta_numGoodPosAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcCounter", &Ndata_H_cal_3ta_posAdcCounter, &b_Ndata_H_cal_3ta_posAdcCounter);
   fChain->SetBranchAddress("H.cal.3ta.posAdcCounter", H_cal_3ta_posAdcCounter, &b_H_cal_3ta_posAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcErrorFlag", &Ndata_H_cal_3ta_posAdcErrorFlag, &b_Ndata_H_cal_3ta_posAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.3ta.posAdcErrorFlag", H_cal_3ta_posAdcErrorFlag, &b_H_cal_3ta_posAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPed", &Ndata_H_cal_3ta_posAdcPed, &b_Ndata_H_cal_3ta_posAdcPed);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPed", H_cal_3ta_posAdcPed, &b_H_cal_3ta_posAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPedRaw", &Ndata_H_cal_3ta_posAdcPedRaw, &b_Ndata_H_cal_3ta_posAdcPedRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPedRaw", H_cal_3ta_posAdcPedRaw, &b_H_cal_3ta_posAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPulseAmp", &Ndata_H_cal_3ta_posAdcPulseAmp, &b_Ndata_H_cal_3ta_posAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPulseAmp", H_cal_3ta_posAdcPulseAmp, &b_H_cal_3ta_posAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPulseAmpRaw", &Ndata_H_cal_3ta_posAdcPulseAmpRaw, &b_Ndata_H_cal_3ta_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPulseAmpRaw", H_cal_3ta_posAdcPulseAmpRaw, &b_H_cal_3ta_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPulseInt", &Ndata_H_cal_3ta_posAdcPulseInt, &b_Ndata_H_cal_3ta_posAdcPulseInt);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPulseInt", H_cal_3ta_posAdcPulseInt, &b_H_cal_3ta_posAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPulseIntRaw", &Ndata_H_cal_3ta_posAdcPulseIntRaw, &b_Ndata_H_cal_3ta_posAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPulseIntRaw", H_cal_3ta_posAdcPulseIntRaw, &b_H_cal_3ta_posAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPulseTime", &Ndata_H_cal_3ta_posAdcPulseTime, &b_Ndata_H_cal_3ta_posAdcPulseTime);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPulseTime", H_cal_3ta_posAdcPulseTime, &b_H_cal_3ta_posAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPulseTimeRaw", &Ndata_H_cal_3ta_posAdcPulseTimeRaw, &b_Ndata_H_cal_3ta_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPulseTimeRaw", H_cal_3ta_posAdcPulseTimeRaw, &b_H_cal_3ta_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPed", &Ndata_H_cal_3ta_posAdcSampPed, &b_Ndata_H_cal_3ta_posAdcSampPed);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPed", H_cal_3ta_posAdcSampPed, &b_H_cal_3ta_posAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPedRaw", &Ndata_H_cal_3ta_posAdcSampPedRaw, &b_Ndata_H_cal_3ta_posAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPedRaw", H_cal_3ta_posAdcSampPedRaw, &b_H_cal_3ta_posAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPulseAmp", &Ndata_H_cal_3ta_posAdcSampPulseAmp, &b_Ndata_H_cal_3ta_posAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPulseAmp", H_cal_3ta_posAdcSampPulseAmp, &b_H_cal_3ta_posAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPulseAmpRaw", &Ndata_H_cal_3ta_posAdcSampPulseAmpRaw, &b_Ndata_H_cal_3ta_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPulseAmpRaw", H_cal_3ta_posAdcSampPulseAmpRaw, &b_H_cal_3ta_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPulseInt", &Ndata_H_cal_3ta_posAdcSampPulseInt, &b_Ndata_H_cal_3ta_posAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPulseInt", H_cal_3ta_posAdcSampPulseInt, &b_H_cal_3ta_posAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPulseIntRaw", &Ndata_H_cal_3ta_posAdcSampPulseIntRaw, &b_Ndata_H_cal_3ta_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPulseIntRaw", H_cal_3ta_posAdcSampPulseIntRaw, &b_H_cal_3ta_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPulseTime", &Ndata_H_cal_3ta_posAdcSampPulseTime, &b_Ndata_H_cal_3ta_posAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPulseTime", H_cal_3ta_posAdcSampPulseTime, &b_H_cal_3ta_posAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPulseTimeRaw", &Ndata_H_cal_3ta_posAdcSampPulseTimeRaw, &b_Ndata_H_cal_3ta_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPulseTimeRaw", H_cal_3ta_posAdcSampPulseTimeRaw, &b_H_cal_3ta_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.emean", &Ndata_H_cal_4ta_emean, &b_Ndata_H_cal_4ta_emean);
   fChain->SetBranchAddress("H.cal.4ta.emean", H_cal_4ta_emean, &b_H_cal_4ta_emean);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.eneg", &Ndata_H_cal_4ta_eneg, &b_Ndata_H_cal_4ta_eneg);
   fChain->SetBranchAddress("H.cal.4ta.eneg", H_cal_4ta_eneg, &b_H_cal_4ta_eneg);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.epos", &Ndata_H_cal_4ta_epos, &b_Ndata_H_cal_4ta_epos);
   fChain->SetBranchAddress("H.cal.4ta.epos", H_cal_4ta_epos, &b_H_cal_4ta_epos);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodNegAdcMult", &Ndata_H_cal_4ta_goodNegAdcMult, &b_Ndata_H_cal_4ta_goodNegAdcMult);
   fChain->SetBranchAddress("H.cal.4ta.goodNegAdcMult", H_cal_4ta_goodNegAdcMult, &b_H_cal_4ta_goodNegAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodNegAdcPed", &Ndata_H_cal_4ta_goodNegAdcPed, &b_Ndata_H_cal_4ta_goodNegAdcPed);
   fChain->SetBranchAddress("H.cal.4ta.goodNegAdcPed", H_cal_4ta_goodNegAdcPed, &b_H_cal_4ta_goodNegAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodNegAdcPulseAmp", &Ndata_H_cal_4ta_goodNegAdcPulseAmp, &b_Ndata_H_cal_4ta_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.4ta.goodNegAdcPulseAmp", H_cal_4ta_goodNegAdcPulseAmp, &b_H_cal_4ta_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodNegAdcPulseInt", &Ndata_H_cal_4ta_goodNegAdcPulseInt, &b_Ndata_H_cal_4ta_goodNegAdcPulseInt);
   fChain->SetBranchAddress("H.cal.4ta.goodNegAdcPulseInt", H_cal_4ta_goodNegAdcPulseInt, &b_H_cal_4ta_goodNegAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodNegAdcPulseIntRaw", &Ndata_H_cal_4ta_goodNegAdcPulseIntRaw, &b_Ndata_H_cal_4ta_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.4ta.goodNegAdcPulseIntRaw", H_cal_4ta_goodNegAdcPulseIntRaw, &b_H_cal_4ta_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodNegAdcPulseTime", &Ndata_H_cal_4ta_goodNegAdcPulseTime, &b_Ndata_H_cal_4ta_goodNegAdcPulseTime);
   fChain->SetBranchAddress("H.cal.4ta.goodNegAdcPulseTime", H_cal_4ta_goodNegAdcPulseTime, &b_H_cal_4ta_goodNegAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodNegAdcTdcDiffTime", &Ndata_H_cal_4ta_goodNegAdcTdcDiffTime, &b_Ndata_H_cal_4ta_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.4ta.goodNegAdcTdcDiffTime", H_cal_4ta_goodNegAdcTdcDiffTime, &b_H_cal_4ta_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodPosAdcMult", &Ndata_H_cal_4ta_goodPosAdcMult, &b_Ndata_H_cal_4ta_goodPosAdcMult);
   fChain->SetBranchAddress("H.cal.4ta.goodPosAdcMult", H_cal_4ta_goodPosAdcMult, &b_H_cal_4ta_goodPosAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodPosAdcPed", &Ndata_H_cal_4ta_goodPosAdcPed, &b_Ndata_H_cal_4ta_goodPosAdcPed);
   fChain->SetBranchAddress("H.cal.4ta.goodPosAdcPed", H_cal_4ta_goodPosAdcPed, &b_H_cal_4ta_goodPosAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodPosAdcPulseAmp", &Ndata_H_cal_4ta_goodPosAdcPulseAmp, &b_Ndata_H_cal_4ta_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.4ta.goodPosAdcPulseAmp", H_cal_4ta_goodPosAdcPulseAmp, &b_H_cal_4ta_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodPosAdcPulseInt", &Ndata_H_cal_4ta_goodPosAdcPulseInt, &b_Ndata_H_cal_4ta_goodPosAdcPulseInt);
   fChain->SetBranchAddress("H.cal.4ta.goodPosAdcPulseInt", H_cal_4ta_goodPosAdcPulseInt, &b_H_cal_4ta_goodPosAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodPosAdcPulseIntRaw", &Ndata_H_cal_4ta_goodPosAdcPulseIntRaw, &b_Ndata_H_cal_4ta_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.4ta.goodPosAdcPulseIntRaw", H_cal_4ta_goodPosAdcPulseIntRaw, &b_H_cal_4ta_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodPosAdcPulseTime", &Ndata_H_cal_4ta_goodPosAdcPulseTime, &b_Ndata_H_cal_4ta_goodPosAdcPulseTime);
   fChain->SetBranchAddress("H.cal.4ta.goodPosAdcPulseTime", H_cal_4ta_goodPosAdcPulseTime, &b_H_cal_4ta_goodPosAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodPosAdcTdcDiffTime", &Ndata_H_cal_4ta_goodPosAdcTdcDiffTime, &b_Ndata_H_cal_4ta_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.4ta.goodPosAdcTdcDiffTime", H_cal_4ta_goodPosAdcTdcDiffTime, &b_H_cal_4ta_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcCounter", &Ndata_H_cal_4ta_negAdcCounter, &b_Ndata_H_cal_4ta_negAdcCounter);
   fChain->SetBranchAddress("H.cal.4ta.negAdcCounter", &H_cal_4ta_negAdcCounter, &b_H_cal_4ta_negAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcErrorFlag", &Ndata_H_cal_4ta_negAdcErrorFlag, &b_Ndata_H_cal_4ta_negAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.4ta.negAdcErrorFlag", &H_cal_4ta_negAdcErrorFlag, &b_H_cal_4ta_negAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPed", &Ndata_H_cal_4ta_negAdcPed, &b_Ndata_H_cal_4ta_negAdcPed);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPed", &H_cal_4ta_negAdcPed, &b_H_cal_4ta_negAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPedRaw", &Ndata_H_cal_4ta_negAdcPedRaw, &b_Ndata_H_cal_4ta_negAdcPedRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPedRaw", &H_cal_4ta_negAdcPedRaw, &b_H_cal_4ta_negAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPulseAmp", &Ndata_H_cal_4ta_negAdcPulseAmp, &b_Ndata_H_cal_4ta_negAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPulseAmp", &H_cal_4ta_negAdcPulseAmp, &b_H_cal_4ta_negAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPulseAmpRaw", &Ndata_H_cal_4ta_negAdcPulseAmpRaw, &b_Ndata_H_cal_4ta_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPulseAmpRaw", &H_cal_4ta_negAdcPulseAmpRaw, &b_H_cal_4ta_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPulseInt", &Ndata_H_cal_4ta_negAdcPulseInt, &b_Ndata_H_cal_4ta_negAdcPulseInt);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPulseInt", &H_cal_4ta_negAdcPulseInt, &b_H_cal_4ta_negAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPulseIntRaw", &Ndata_H_cal_4ta_negAdcPulseIntRaw, &b_Ndata_H_cal_4ta_negAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPulseIntRaw", &H_cal_4ta_negAdcPulseIntRaw, &b_H_cal_4ta_negAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPulseTime", &Ndata_H_cal_4ta_negAdcPulseTime, &b_Ndata_H_cal_4ta_negAdcPulseTime);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPulseTime", &H_cal_4ta_negAdcPulseTime, &b_H_cal_4ta_negAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPulseTimeRaw", &Ndata_H_cal_4ta_negAdcPulseTimeRaw, &b_Ndata_H_cal_4ta_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPulseTimeRaw", &H_cal_4ta_negAdcPulseTimeRaw, &b_H_cal_4ta_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPed", &Ndata_H_cal_4ta_negAdcSampPed, &b_Ndata_H_cal_4ta_negAdcSampPed);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPed", &H_cal_4ta_negAdcSampPed, &b_H_cal_4ta_negAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPedRaw", &Ndata_H_cal_4ta_negAdcSampPedRaw, &b_Ndata_H_cal_4ta_negAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPedRaw", &H_cal_4ta_negAdcSampPedRaw, &b_H_cal_4ta_negAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPulseAmp", &Ndata_H_cal_4ta_negAdcSampPulseAmp, &b_Ndata_H_cal_4ta_negAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPulseAmp", &H_cal_4ta_negAdcSampPulseAmp, &b_H_cal_4ta_negAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPulseAmpRaw", &Ndata_H_cal_4ta_negAdcSampPulseAmpRaw, &b_Ndata_H_cal_4ta_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPulseAmpRaw", &H_cal_4ta_negAdcSampPulseAmpRaw, &b_H_cal_4ta_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPulseInt", &Ndata_H_cal_4ta_negAdcSampPulseInt, &b_Ndata_H_cal_4ta_negAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPulseInt", &H_cal_4ta_negAdcSampPulseInt, &b_H_cal_4ta_negAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPulseIntRaw", &Ndata_H_cal_4ta_negAdcSampPulseIntRaw, &b_Ndata_H_cal_4ta_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPulseIntRaw", &H_cal_4ta_negAdcSampPulseIntRaw, &b_H_cal_4ta_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPulseTime", &Ndata_H_cal_4ta_negAdcSampPulseTime, &b_Ndata_H_cal_4ta_negAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPulseTime", &H_cal_4ta_negAdcSampPulseTime, &b_H_cal_4ta_negAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPulseTimeRaw", &Ndata_H_cal_4ta_negAdcSampPulseTimeRaw, &b_Ndata_H_cal_4ta_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPulseTimeRaw", &H_cal_4ta_negAdcSampPulseTimeRaw, &b_H_cal_4ta_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.numGoodNegAdcHits", &Ndata_H_cal_4ta_numGoodNegAdcHits, &b_Ndata_H_cal_4ta_numGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.numGoodNegAdcHits", H_cal_4ta_numGoodNegAdcHits, &b_H_cal_4ta_numGoodNegAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.numGoodPosAdcHits", &Ndata_H_cal_4ta_numGoodPosAdcHits, &b_Ndata_H_cal_4ta_numGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.numGoodPosAdcHits", H_cal_4ta_numGoodPosAdcHits, &b_H_cal_4ta_numGoodPosAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcCounter", &Ndata_H_cal_4ta_posAdcCounter, &b_Ndata_H_cal_4ta_posAdcCounter);
   fChain->SetBranchAddress("H.cal.4ta.posAdcCounter", H_cal_4ta_posAdcCounter, &b_H_cal_4ta_posAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcErrorFlag", &Ndata_H_cal_4ta_posAdcErrorFlag, &b_Ndata_H_cal_4ta_posAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.4ta.posAdcErrorFlag", H_cal_4ta_posAdcErrorFlag, &b_H_cal_4ta_posAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPed", &Ndata_H_cal_4ta_posAdcPed, &b_Ndata_H_cal_4ta_posAdcPed);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPed", H_cal_4ta_posAdcPed, &b_H_cal_4ta_posAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPedRaw", &Ndata_H_cal_4ta_posAdcPedRaw, &b_Ndata_H_cal_4ta_posAdcPedRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPedRaw", H_cal_4ta_posAdcPedRaw, &b_H_cal_4ta_posAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPulseAmp", &Ndata_H_cal_4ta_posAdcPulseAmp, &b_Ndata_H_cal_4ta_posAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPulseAmp", H_cal_4ta_posAdcPulseAmp, &b_H_cal_4ta_posAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPulseAmpRaw", &Ndata_H_cal_4ta_posAdcPulseAmpRaw, &b_Ndata_H_cal_4ta_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPulseAmpRaw", H_cal_4ta_posAdcPulseAmpRaw, &b_H_cal_4ta_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPulseInt", &Ndata_H_cal_4ta_posAdcPulseInt, &b_Ndata_H_cal_4ta_posAdcPulseInt);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPulseInt", H_cal_4ta_posAdcPulseInt, &b_H_cal_4ta_posAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPulseIntRaw", &Ndata_H_cal_4ta_posAdcPulseIntRaw, &b_Ndata_H_cal_4ta_posAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPulseIntRaw", H_cal_4ta_posAdcPulseIntRaw, &b_H_cal_4ta_posAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPulseTime", &Ndata_H_cal_4ta_posAdcPulseTime, &b_Ndata_H_cal_4ta_posAdcPulseTime);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPulseTime", H_cal_4ta_posAdcPulseTime, &b_H_cal_4ta_posAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPulseTimeRaw", &Ndata_H_cal_4ta_posAdcPulseTimeRaw, &b_Ndata_H_cal_4ta_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPulseTimeRaw", H_cal_4ta_posAdcPulseTimeRaw, &b_H_cal_4ta_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPed", &Ndata_H_cal_4ta_posAdcSampPed, &b_Ndata_H_cal_4ta_posAdcSampPed);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPed", H_cal_4ta_posAdcSampPed, &b_H_cal_4ta_posAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPedRaw", &Ndata_H_cal_4ta_posAdcSampPedRaw, &b_Ndata_H_cal_4ta_posAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPedRaw", H_cal_4ta_posAdcSampPedRaw, &b_H_cal_4ta_posAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPulseAmp", &Ndata_H_cal_4ta_posAdcSampPulseAmp, &b_Ndata_H_cal_4ta_posAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPulseAmp", H_cal_4ta_posAdcSampPulseAmp, &b_H_cal_4ta_posAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPulseAmpRaw", &Ndata_H_cal_4ta_posAdcSampPulseAmpRaw, &b_Ndata_H_cal_4ta_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPulseAmpRaw", H_cal_4ta_posAdcSampPulseAmpRaw, &b_H_cal_4ta_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPulseInt", &Ndata_H_cal_4ta_posAdcSampPulseInt, &b_Ndata_H_cal_4ta_posAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPulseInt", H_cal_4ta_posAdcSampPulseInt, &b_H_cal_4ta_posAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPulseIntRaw", &Ndata_H_cal_4ta_posAdcSampPulseIntRaw, &b_Ndata_H_cal_4ta_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPulseIntRaw", H_cal_4ta_posAdcSampPulseIntRaw, &b_H_cal_4ta_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPulseTime", &Ndata_H_cal_4ta_posAdcSampPulseTime, &b_Ndata_H_cal_4ta_posAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPulseTime", H_cal_4ta_posAdcSampPulseTime, &b_H_cal_4ta_posAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPulseTimeRaw", &Ndata_H_cal_4ta_posAdcSampPulseTimeRaw, &b_Ndata_H_cal_4ta_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPulseTimeRaw", H_cal_4ta_posAdcSampPulseTimeRaw, &b_H_cal_4ta_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.T.hms.hEL_CLEAN_vecTdcTime", &Ndata_T_hms_hEL_CLEAN_vecTdcTime, &b_Ndata_T_hms_hEL_CLEAN_vecTdcTime);
   fChain->SetBranchAddress("T.hms.hEL_CLEAN_vecTdcTime", T_hms_hEL_CLEAN_vecTdcTime, &b_T_hms_hEL_CLEAN_vecTdcTime);
   fChain->SetBranchAddress("Ndata.T.hms.hEL_CLEAN_vecTdcTimeRaw", &Ndata_T_hms_hEL_CLEAN_vecTdcTimeRaw, &b_Ndata_T_hms_hEL_CLEAN_vecTdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hEL_CLEAN_vecTdcTimeRaw", T_hms_hEL_CLEAN_vecTdcTimeRaw, &b_T_hms_hEL_CLEAN_vecTdcTimeRaw);
   fChain->SetBranchAddress("Ndata.T.hms.hEL_HI_vecTdcTime", &Ndata_T_hms_hEL_HI_vecTdcTime, &b_Ndata_T_hms_hEL_HI_vecTdcTime);
   fChain->SetBranchAddress("T.hms.hEL_HI_vecTdcTime", T_hms_hEL_HI_vecTdcTime, &b_T_hms_hEL_HI_vecTdcTime);
   fChain->SetBranchAddress("Ndata.T.hms.hEL_HI_vecTdcTimeRaw", &Ndata_T_hms_hEL_HI_vecTdcTimeRaw, &b_Ndata_T_hms_hEL_HI_vecTdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hEL_HI_vecTdcTimeRaw", T_hms_hEL_HI_vecTdcTimeRaw, &b_T_hms_hEL_HI_vecTdcTimeRaw);
   fChain->SetBranchAddress("Ndata.T.hms.hEL_LO_LO_vecTdcTime", &Ndata_T_hms_hEL_LO_LO_vecTdcTime, &b_Ndata_T_hms_hEL_LO_LO_vecTdcTime);
   fChain->SetBranchAddress("T.hms.hEL_LO_LO_vecTdcTime", T_hms_hEL_LO_LO_vecTdcTime, &b_T_hms_hEL_LO_LO_vecTdcTime);
   fChain->SetBranchAddress("Ndata.T.hms.hEL_LO_LO_vecTdcTimeRaw", &Ndata_T_hms_hEL_LO_LO_vecTdcTimeRaw, &b_Ndata_T_hms_hEL_LO_LO_vecTdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hEL_LO_LO_vecTdcTimeRaw", T_hms_hEL_LO_LO_vecTdcTimeRaw, &b_T_hms_hEL_LO_LO_vecTdcTimeRaw);
   fChain->SetBranchAddress("Ndata.T.hms.hEL_LO_vecTdcTime", &Ndata_T_hms_hEL_LO_vecTdcTime, &b_Ndata_T_hms_hEL_LO_vecTdcTime);
   fChain->SetBranchAddress("T.hms.hEL_LO_vecTdcTime", T_hms_hEL_LO_vecTdcTime, &b_T_hms_hEL_LO_vecTdcTime);
   fChain->SetBranchAddress("Ndata.T.hms.hEL_LO_vecTdcTimeRaw", &Ndata_T_hms_hEL_LO_vecTdcTimeRaw, &b_Ndata_T_hms_hEL_LO_vecTdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hEL_LO_vecTdcTimeRaw", T_hms_hEL_LO_vecTdcTimeRaw, &b_T_hms_hEL_LO_vecTdcTimeRaw);
   fChain->SetBranchAddress("Ndata.T.hms.hEL_REAL_vecTdcTime", &Ndata_T_hms_hEL_REAL_vecTdcTime, &b_Ndata_T_hms_hEL_REAL_vecTdcTime);
   fChain->SetBranchAddress("T.hms.hEL_REAL_vecTdcTime", T_hms_hEL_REAL_vecTdcTime, &b_T_hms_hEL_REAL_vecTdcTime);
   fChain->SetBranchAddress("Ndata.T.hms.hEL_REAL_vecTdcTimeRaw", &Ndata_T_hms_hEL_REAL_vecTdcTimeRaw, &b_Ndata_T_hms_hEL_REAL_vecTdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hEL_REAL_vecTdcTimeRaw", T_hms_hEL_REAL_vecTdcTimeRaw, &b_T_hms_hEL_REAL_vecTdcTimeRaw);
   fChain->SetBranchAddress("H.cal.1pr.eplane", &H_cal_1pr_eplane, &b_H_cal_1pr_eplane);
   fChain->SetBranchAddress("H.cal.1pr.eplane_neg", &H_cal_1pr_eplane_neg, &b_H_cal_1pr_eplane_neg);
   fChain->SetBranchAddress("H.cal.1pr.eplane_pos", &H_cal_1pr_eplane_pos, &b_H_cal_1pr_eplane_pos);
   fChain->SetBranchAddress("H.cal.1pr.totNumGoodNegAdcHits", &H_cal_1pr_totNumGoodNegAdcHits, &b_H_cal_1pr_totNumGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.1pr.totNumGoodPosAdcHits", &H_cal_1pr_totNumGoodPosAdcHits, &b_H_cal_1pr_totNumGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.1pr.totNumNegAdcHits", &H_cal_1pr_totNumNegAdcHits, &b_H_cal_1pr_totNumNegAdcHits);
   fChain->SetBranchAddress("H.cal.1pr.totNumPosAdcHits", &H_cal_1pr_totNumPosAdcHits, &b_H_cal_1pr_totNumPosAdcHits);
   fChain->SetBranchAddress("H.cal.1pr.totnumAdcHits", &H_cal_1pr_totnumAdcHits, &b_H_cal_1pr_totnumAdcHits);
   fChain->SetBranchAddress("H.cal.1pr.totnumGoodAdcHits", &H_cal_1pr_totnumGoodAdcHits, &b_H_cal_1pr_totnumGoodAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.eplane", &H_cal_2ta_eplane, &b_H_cal_2ta_eplane);
   fChain->SetBranchAddress("H.cal.2ta.eplane_neg", &H_cal_2ta_eplane_neg, &b_H_cal_2ta_eplane_neg);
   fChain->SetBranchAddress("H.cal.2ta.eplane_pos", &H_cal_2ta_eplane_pos, &b_H_cal_2ta_eplane_pos);
   fChain->SetBranchAddress("H.cal.2ta.totNumGoodNegAdcHits", &H_cal_2ta_totNumGoodNegAdcHits, &b_H_cal_2ta_totNumGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.totNumGoodPosAdcHits", &H_cal_2ta_totNumGoodPosAdcHits, &b_H_cal_2ta_totNumGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.totNumNegAdcHits", &H_cal_2ta_totNumNegAdcHits, &b_H_cal_2ta_totNumNegAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.totNumPosAdcHits", &H_cal_2ta_totNumPosAdcHits, &b_H_cal_2ta_totNumPosAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.totnumAdcHits", &H_cal_2ta_totnumAdcHits, &b_H_cal_2ta_totnumAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.totnumGoodAdcHits", &H_cal_2ta_totnumGoodAdcHits, &b_H_cal_2ta_totnumGoodAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.eplane", &H_cal_3ta_eplane, &b_H_cal_3ta_eplane);
   fChain->SetBranchAddress("H.cal.3ta.eplane_neg", &H_cal_3ta_eplane_neg, &b_H_cal_3ta_eplane_neg);
   fChain->SetBranchAddress("H.cal.3ta.eplane_pos", &H_cal_3ta_eplane_pos, &b_H_cal_3ta_eplane_pos);
   fChain->SetBranchAddress("H.cal.3ta.totNumGoodNegAdcHits", &H_cal_3ta_totNumGoodNegAdcHits, &b_H_cal_3ta_totNumGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.totNumGoodPosAdcHits", &H_cal_3ta_totNumGoodPosAdcHits, &b_H_cal_3ta_totNumGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.totNumNegAdcHits", &H_cal_3ta_totNumNegAdcHits, &b_H_cal_3ta_totNumNegAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.totNumPosAdcHits", &H_cal_3ta_totNumPosAdcHits, &b_H_cal_3ta_totNumPosAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.totnumAdcHits", &H_cal_3ta_totnumAdcHits, &b_H_cal_3ta_totnumAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.totnumGoodAdcHits", &H_cal_3ta_totnumGoodAdcHits, &b_H_cal_3ta_totnumGoodAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.eplane", &H_cal_4ta_eplane, &b_H_cal_4ta_eplane);
   fChain->SetBranchAddress("H.cal.4ta.eplane_neg", &H_cal_4ta_eplane_neg, &b_H_cal_4ta_eplane_neg);
   fChain->SetBranchAddress("H.cal.4ta.eplane_pos", &H_cal_4ta_eplane_pos, &b_H_cal_4ta_eplane_pos);
   fChain->SetBranchAddress("H.cal.4ta.totNumGoodNegAdcHits", &H_cal_4ta_totNumGoodNegAdcHits, &b_H_cal_4ta_totNumGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.totNumGoodPosAdcHits", &H_cal_4ta_totNumGoodPosAdcHits, &b_H_cal_4ta_totNumGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.totNumNegAdcHits", &H_cal_4ta_totNumNegAdcHits, &b_H_cal_4ta_totNumNegAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.totNumPosAdcHits", &H_cal_4ta_totNumPosAdcHits, &b_H_cal_4ta_totNumPosAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.totnumAdcHits", &H_cal_4ta_totnumAdcHits, &b_H_cal_4ta_totnumAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.totnumGoodAdcHits", &H_cal_4ta_totnumGoodAdcHits, &b_H_cal_4ta_totnumGoodAdcHits);
   fChain->SetBranchAddress("H.cal.eprtrack", &H_cal_eprtrack, &b_H_cal_eprtrack);
   fChain->SetBranchAddress("H.cal.eprtracknorm", &H_cal_eprtracknorm, &b_H_cal_eprtracknorm);
   fChain->SetBranchAddress("H.cal.etot", &H_cal_etot, &b_H_cal_etot);
   fChain->SetBranchAddress("H.cal.etotnorm", &H_cal_etotnorm, &b_H_cal_etotnorm);
   fChain->SetBranchAddress("H.cal.etottracknorm", &H_cal_etottracknorm, &b_H_cal_etottracknorm);
   fChain->SetBranchAddress("H.cal.etrack", &H_cal_etrack, &b_H_cal_etrack);
   fChain->SetBranchAddress("H.cal.etracknorm", &H_cal_etracknorm, &b_H_cal_etracknorm);
   fChain->SetBranchAddress("H.cal.nclust", &H_cal_nclust, &b_H_cal_nclust);
   fChain->SetBranchAddress("H.cal.nclusttrack", &H_cal_nclusttrack, &b_H_cal_nclusttrack);
   fChain->SetBranchAddress("H.cal.nhits", &H_cal_nhits, &b_H_cal_nhits);
   fChain->SetBranchAddress("H.cal.ntracks", &H_cal_ntracks, &b_H_cal_ntracks);
   fChain->SetBranchAddress("H.cal.xclusttrack", &H_cal_xclusttrack, &b_H_cal_xclusttrack);
   fChain->SetBranchAddress("H.cal.xtrack", &H_cal_xtrack, &b_H_cal_xtrack);
   fChain->SetBranchAddress("H.cal.yclusttrack", &H_cal_yclusttrack, &b_H_cal_yclusttrack);
   fChain->SetBranchAddress("H.cal.ytrack", &H_cal_ytrack, &b_H_cal_ytrack);
   fChain->SetBranchAddress("T.hms.hEL_CLEAN_tdcMultiplicity", &T_hms_hEL_CLEAN_tdcMultiplicity, &b_T_hms_hEL_CLEAN_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hEL_CLEAN_tdcTime", &T_hms_hEL_CLEAN_tdcTime, &b_T_hms_hEL_CLEAN_tdcTime);
   fChain->SetBranchAddress("T.hms.hEL_CLEAN_tdcTimeRaw", &T_hms_hEL_CLEAN_tdcTimeRaw, &b_T_hms_hEL_CLEAN_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hEL_HI_tdcMultiplicity", &T_hms_hEL_HI_tdcMultiplicity, &b_T_hms_hEL_HI_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hEL_HI_tdcTime", &T_hms_hEL_HI_tdcTime, &b_T_hms_hEL_HI_tdcTime);
   fChain->SetBranchAddress("T.hms.hEL_HI_tdcTimeRaw", &T_hms_hEL_HI_tdcTimeRaw, &b_T_hms_hEL_HI_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hEL_LO_LO_tdcMultiplicity", &T_hms_hEL_LO_LO_tdcMultiplicity, &b_T_hms_hEL_LO_LO_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hEL_LO_LO_tdcTime", &T_hms_hEL_LO_LO_tdcTime, &b_T_hms_hEL_LO_LO_tdcTime);
   fChain->SetBranchAddress("T.hms.hEL_LO_LO_tdcTimeRaw", &T_hms_hEL_LO_LO_tdcTimeRaw, &b_T_hms_hEL_LO_LO_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hEL_LO_tdcMultiplicity", &T_hms_hEL_LO_tdcMultiplicity, &b_T_hms_hEL_LO_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hEL_LO_tdcTime", &T_hms_hEL_LO_tdcTime, &b_T_hms_hEL_LO_tdcTime);
   fChain->SetBranchAddress("T.hms.hEL_LO_tdcTimeRaw", &T_hms_hEL_LO_tdcTimeRaw, &b_T_hms_hEL_LO_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hEL_REAL_tdcMultiplicity", &T_hms_hEL_REAL_tdcMultiplicity, &b_T_hms_hEL_REAL_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hEL_REAL_tdcTime", &T_hms_hEL_REAL_tdcTime, &b_T_hms_hEL_REAL_tdcTime);
   fChain->SetBranchAddress("T.hms.hEL_REAL_tdcTimeRaw", &T_hms_hEL_REAL_tdcTimeRaw, &b_T_hms_hEL_REAL_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcMultiplicity", &T_hms_hFADC_TREF_ROC1_adcMultiplicity, &b_T_hms_hFADC_TREF_ROC1_adcMultiplicity);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPed", &T_hms_hFADC_TREF_ROC1_adcPed, &b_T_hms_hFADC_TREF_ROC1_adcPed);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPedRaw", &T_hms_hFADC_TREF_ROC1_adcPedRaw, &b_T_hms_hFADC_TREF_ROC1_adcPedRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPulseAmp", &T_hms_hFADC_TREF_ROC1_adcPulseAmp, &b_T_hms_hFADC_TREF_ROC1_adcPulseAmp);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPulseAmpRaw", &T_hms_hFADC_TREF_ROC1_adcPulseAmpRaw, &b_T_hms_hFADC_TREF_ROC1_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPulseInt", &T_hms_hFADC_TREF_ROC1_adcPulseInt, &b_T_hms_hFADC_TREF_ROC1_adcPulseInt);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPulseIntRaw", &T_hms_hFADC_TREF_ROC1_adcPulseIntRaw, &b_T_hms_hFADC_TREF_ROC1_adcPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPulseTime", &T_hms_hFADC_TREF_ROC1_adcPulseTime, &b_T_hms_hFADC_TREF_ROC1_adcPulseTime);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPulseTimeRaw", &T_hms_hFADC_TREF_ROC1_adcPulseTimeRaw, &b_T_hms_hFADC_TREF_ROC1_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampMultiplicity", &T_hms_hFADC_TREF_ROC1_adcSampMultiplicity, &b_T_hms_hFADC_TREF_ROC1_adcSampMultiplicity);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPed", &T_hms_hFADC_TREF_ROC1_adcSampPed, &b_T_hms_hFADC_TREF_ROC1_adcSampPed);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPedRaw", &T_hms_hFADC_TREF_ROC1_adcSampPedRaw, &b_T_hms_hFADC_TREF_ROC1_adcSampPedRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPulseAmp", &T_hms_hFADC_TREF_ROC1_adcSampPulseAmp, &b_T_hms_hFADC_TREF_ROC1_adcSampPulseAmp);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPulseAmpRaw", &T_hms_hFADC_TREF_ROC1_adcSampPulseAmpRaw, &b_T_hms_hFADC_TREF_ROC1_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPulseInt", &T_hms_hFADC_TREF_ROC1_adcSampPulseInt, &b_T_hms_hFADC_TREF_ROC1_adcSampPulseInt);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPulseIntRaw", &T_hms_hFADC_TREF_ROC1_adcSampPulseIntRaw, &b_T_hms_hFADC_TREF_ROC1_adcSampPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPulseTime", &T_hms_hFADC_TREF_ROC1_adcSampPulseTime, &b_T_hms_hFADC_TREF_ROC1_adcSampPulseTime);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPulseTimeRaw", &T_hms_hFADC_TREF_ROC1_adcSampPulseTimeRaw, &b_T_hms_hFADC_TREF_ROC1_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("fEvtHdr.fEvtTime", &fEvtHdr_fEvtTime, &b_Event_Branch_fEvtHdr_fEvtTime);
   fChain->SetBranchAddress("fEvtHdr.fEvtNum", &fEvtHdr_fEvtNum, &b_Event_Branch_fEvtHdr_fEvtNum);
   fChain->SetBranchAddress("fEvtHdr.fEvtType", &fEvtHdr_fEvtType, &b_Event_Branch_fEvtHdr_fEvtType);
   fChain->SetBranchAddress("fEvtHdr.fEvtLen", &fEvtHdr_fEvtLen, &b_Event_Branch_fEvtHdr_fEvtLen);
   fChain->SetBranchAddress("fEvtHdr.fHelicity", &fEvtHdr_fHelicity, &b_Event_Branch_fEvtHdr_fHelicity);
   fChain->SetBranchAddress("fEvtHdr.fTrigBits", &fEvtHdr_fTrigBits, &b_Event_Branch_fEvtHdr_fTrigBits);
   fChain->SetBranchAddress("fEvtHdr.fRun", &fEvtHdr_fRun, &b_Event_Branch_fEvtHdr_fRun);
   Notify();
}

Bool_t T_new::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void T_new::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t T_new::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef T_new_cxx
