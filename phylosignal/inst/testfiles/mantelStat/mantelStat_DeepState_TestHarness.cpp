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
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix xr  = RcppDeepState_NumericMatrix();
  qs::c_qsave(xr,"/home/akhila/fuzzer_packages/fuzzedpackages/phylosignal/inst/testfiles/mantelStat/inputs/xr.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "xr values: "<< xr << std::endl;
  NumericMatrix Wr  = RcppDeepState_NumericMatrix();
  qs::c_qsave(Wr,"/home/akhila/fuzzer_packages/fuzzedpackages/phylosignal/inst/testfiles/mantelStat/inputs/Wr.qs",
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
