// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// corr_betw_matrices_unpaired_bestpairs_DeepState_TestHarness_generation.cpp and corr_betw_matrices_unpaired_bestpairs_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List corr_betw_matrices_unpaired_bestpairs(const NumericMatrix& x, const NumericMatrix& y, const double corr_threshold);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix x  = RcppDeepState_NumericMatrix();
  std::string x_t = "/home/akhila/fuzzer_packages/fuzzedpackages/lineup2/inst/testfiles/corr_betw_matrices_unpaired_bestpairs/libFuzzer_corr_betw_matrices_unpaired_bestpairs/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_x.qs";
  qs::c_qsave(x,x_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericMatrix y  = RcppDeepState_NumericMatrix();
  std::string y_t = "/home/akhila/fuzzer_packages/fuzzedpackages/lineup2/inst/testfiles/corr_betw_matrices_unpaired_bestpairs/libFuzzer_corr_betw_matrices_unpaired_bestpairs/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_y.qs";
  qs::c_qsave(y,y_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  NumericVector corr_threshold(1);
  corr_threshold[0]  = RcppDeepState_double();
  std::string corr_threshold_t = "/home/akhila/fuzzer_packages/fuzzedpackages/lineup2/inst/testfiles/corr_betw_matrices_unpaired_bestpairs/libFuzzer_corr_betw_matrices_unpaired_bestpairs/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_corr_threshold.qs";
  qs::c_qsave(corr_threshold,corr_threshold_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "corr_threshold values: "<< corr_threshold << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    corr_betw_matrices_unpaired_bestpairs(x,y,corr_threshold[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
