// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// pmin3_DeepState_TestHarness_generation.cpp and pmin3_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector pmin3(NumericVector vec1, NumericVector vec2);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector vec1  = RcppDeepState_NumericVector();
  std::string vec1_t = "/home/akhila/fuzzer_packages/fuzzedpackages/maxnodf/inst/testfiles/pmin3/libFuzzer_pmin3/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_vec1.qs";
  qs::c_qsave(vec1,vec1_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vec1 values: "<< vec1 << std::endl;
  NumericVector vec2  = RcppDeepState_NumericVector();
  std::string vec2_t = "/home/akhila/fuzzer_packages/fuzzedpackages/maxnodf/inst/testfiles/pmin3/libFuzzer_pmin3/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_vec2.qs";
  qs::c_qsave(vec2,vec2_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vec2 values: "<< vec2 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    pmin3(vec1,vec2);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
