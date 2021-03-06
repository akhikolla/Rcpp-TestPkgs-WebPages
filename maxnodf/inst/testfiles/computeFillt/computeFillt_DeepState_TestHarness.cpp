// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// computeFillt_DeepState_TestHarness_generation.cpp and computeFillt_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix computeFillt(NumericMatrix mtx);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix mtx  = RcppDeepState_NumericMatrix();
  qs::c_qsave(mtx,"/home/akhila/fuzzer_packages/fuzzedpackages/maxnodf/inst/testfiles/computeFillt/inputs/mtx.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "mtx values: "<< mtx << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    computeFillt(mtx);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
