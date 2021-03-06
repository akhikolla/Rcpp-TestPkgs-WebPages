// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// reg_2d_DeepState_TestHarness_generation.cpp and reg_2d_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix reg_2d(NumericMatrix& y_vec, NumericMatrix& w_vec, int metric);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix y_vec  = RcppDeepState_NumericMatrix();
  qs::c_qsave(y_vec,"/home/akhila/fuzzer_packages/fuzzedpackages/UniIsoRegression/inst/testfiles/reg_2d/inputs/y_vec.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y_vec values: "<< y_vec << std::endl;
  NumericMatrix w_vec  = RcppDeepState_NumericMatrix();
  qs::c_qsave(w_vec,"/home/akhila/fuzzer_packages/fuzzedpackages/UniIsoRegression/inst/testfiles/reg_2d/inputs/w_vec.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "w_vec values: "<< w_vec << std::endl;
  IntegerVector metric(1);
  metric[0]  = RcppDeepState_int();
  qs::c_qsave(metric,"/home/akhila/fuzzer_packages/fuzzedpackages/UniIsoRegression/inst/testfiles/reg_2d/inputs/metric.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "metric values: "<< metric << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    reg_2d(y_vec,w_vec,metric[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
