// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// qloop_qq_DeepState_TestHarness_generation.cpp and qloop_qq_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List qloop_qq(NumericVector times, NumericVector service, NumericVector x, IntegerVector y);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector times  = RcppDeepState_NumericVector();
  std::string times_t = "/home/akhila/fuzzer_packages/fuzzedpackages/queuecomputer/inst/testfiles/qloop_qq/libFuzzer_qloop_qq/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_times.qs";
  qs::c_qsave(times,times_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "times values: "<< times << std::endl;
  NumericVector service  = RcppDeepState_NumericVector();
  std::string service_t = "/home/akhila/fuzzer_packages/fuzzedpackages/queuecomputer/inst/testfiles/qloop_qq/libFuzzer_qloop_qq/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_service.qs";
  qs::c_qsave(service,service_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "service values: "<< service << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  std::string x_t = "/home/akhila/fuzzer_packages/fuzzedpackages/queuecomputer/inst/testfiles/qloop_qq/libFuzzer_qloop_qq/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_x.qs";
  qs::c_qsave(x,x_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  IntegerVector y  = RcppDeepState_IntegerVector();
  std::string y_t = "/home/akhila/fuzzer_packages/fuzzedpackages/queuecomputer/inst/testfiles/qloop_qq/libFuzzer_qloop_qq/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_y.qs";
  qs::c_qsave(y,y_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    qloop_qq(times,service,x,y);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
