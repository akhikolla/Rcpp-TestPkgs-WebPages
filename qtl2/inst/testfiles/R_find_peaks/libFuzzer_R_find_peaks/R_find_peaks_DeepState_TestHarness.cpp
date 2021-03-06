// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// R_find_peaks_DeepState_TestHarness_generation.cpp and R_find_peaks_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List R_find_peaks(const NumericVector& lod, const double threshold, const double peakdrop);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector lod  = RcppDeepState_NumericVector();
  std::string lod_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/R_find_peaks/libFuzzer_R_find_peaks/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_lod.qs";
  qs::c_qsave(lod,lod_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lod values: "<< lod << std::endl;
  NumericVector threshold(1);
  threshold[0]  = RcppDeepState_double();
  std::string threshold_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/R_find_peaks/libFuzzer_R_find_peaks/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_threshold.qs";
  qs::c_qsave(threshold,threshold_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "threshold values: "<< threshold << std::endl;
  NumericVector peakdrop(1);
  peakdrop[0]  = RcppDeepState_double();
  std::string peakdrop_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/R_find_peaks/libFuzzer_R_find_peaks/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_peakdrop.qs";
  qs::c_qsave(peakdrop,peakdrop_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "peakdrop values: "<< peakdrop << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    R_find_peaks(lod,threshold[0],peakdrop[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
