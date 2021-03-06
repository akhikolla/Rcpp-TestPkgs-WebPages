// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// getGoodnessOMP_DeepState_TestHarness_generation.cpp and getGoodnessOMP_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericVector getGoodnessOMP(Rcpp::NumericVector const& x, Rcpp::NumericVector const& wt, Rcpp::NumericVector const& medians);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  std::string x_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rpart.LAD/inst/testfiles/getGoodnessOMP/libFuzzer_getGoodnessOMP/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_x.qs";
  qs::c_qsave(x,x_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector wt  = RcppDeepState_NumericVector();
  std::string wt_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rpart.LAD/inst/testfiles/getGoodnessOMP/libFuzzer_getGoodnessOMP/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_wt.qs";
  qs::c_qsave(wt,wt_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "wt values: "<< wt << std::endl;
  NumericVector medians  = RcppDeepState_NumericVector();
  std::string medians_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rpart.LAD/inst/testfiles/getGoodnessOMP/libFuzzer_getGoodnessOMP/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_medians.qs";
  qs::c_qsave(medians,medians_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "medians values: "<< medians << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    getGoodnessOMP(x,wt,medians);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
