// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// qloop_numeric_DeepState_TestHarness_generation.cpp and qloop_numeric_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List qloop_numeric(NumericVector times, NumericVector service, int n_servers);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector times  = RcppDeepState_NumericVector();
  std::string times_t = "/home/akhila/fuzzer_packages/fuzzedpackages/queuecomputer/inst/testfiles/qloop_numeric/libFuzzer_qloop_numeric/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_times.qs";
  qs::c_qsave(times,times_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "times values: "<< times << std::endl;
  NumericVector service  = RcppDeepState_NumericVector();
  std::string service_t = "/home/akhila/fuzzer_packages/fuzzedpackages/queuecomputer/inst/testfiles/qloop_numeric/libFuzzer_qloop_numeric/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_service.qs";
  qs::c_qsave(service,service_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "service values: "<< service << std::endl;
  IntegerVector n_servers(1);
  n_servers[0]  = RcppDeepState_int();
  std::string n_servers_t = "/home/akhila/fuzzer_packages/fuzzedpackages/queuecomputer/inst/testfiles/qloop_numeric/libFuzzer_qloop_numeric/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_n_servers.qs";
  qs::c_qsave(n_servers,n_servers_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n_servers values: "<< n_servers << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    qloop_numeric(times,service,n_servers[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
