// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// pre_2d_l1_inc_DeepState_TestHarness_generation.cpp and pre_2d_l1_inc_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix pre_2d_l1_inc(NumericMatrix& w, NumericMatrix& data);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix w  = RcppDeepState_NumericMatrix();
  std::string w_t = "/home/akhila/fuzzer_packages/fuzzedpackages/UniIsoRegression/inst/testfiles/pre_2d_l1_inc/libFuzzer_pre_2d_l1_inc/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_w.qs";
  qs::c_qsave(w,w_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "w values: "<< w << std::endl;
  NumericMatrix data  = RcppDeepState_NumericMatrix();
  std::string data_t = "/home/akhila/fuzzer_packages/fuzzedpackages/UniIsoRegression/inst/testfiles/pre_2d_l1_inc/libFuzzer_pre_2d_l1_inc/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_data.qs";
  qs::c_qsave(data,data_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "data values: "<< data << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    pre_2d_l1_inc(w,data);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
