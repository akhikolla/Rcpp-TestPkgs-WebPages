// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// mantelStat_DeepState_TestHarness_generation.cpp and mantelStat_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double mantelStat(NumericMatrix xr, NumericMatrix Wr);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix xr  = RcppDeepState_NumericMatrix();
  std::string xr_t = "/home/akhila/fuzzer_packages/fuzzedpackages/phylosignal/inst/testfiles/mantelStat/libFuzzer_mantelStat/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_xr.qs";
  qs::c_qsave(xr,xr_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "xr values: "<< xr << std::endl;
  NumericMatrix Wr  = RcppDeepState_NumericMatrix();
  std::string Wr_t = "/home/akhila/fuzzer_packages/fuzzedpackages/phylosignal/inst/testfiles/mantelStat/libFuzzer_mantelStat/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_Wr.qs";
  qs::c_qsave(Wr,Wr_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Wr values: "<< Wr << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    mantelStat(xr,Wr);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
