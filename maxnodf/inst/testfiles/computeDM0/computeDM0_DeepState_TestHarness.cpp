// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// computeDM0_DeepState_TestHarness_generation.cpp and computeDM0_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix computeDM0(NumericMatrix mtx);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix mtx  = RcppDeepState_NumericMatrix();
  qs::c_qsave(mtx,"/home/akhila/fuzzer_packages/fuzzedpackages/maxnodf/inst/testfiles/computeDM0/inputs/mtx.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "mtx values: "<< mtx << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    computeDM0(mtx);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
