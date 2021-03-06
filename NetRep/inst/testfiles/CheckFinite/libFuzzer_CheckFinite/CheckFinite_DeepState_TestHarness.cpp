// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// CheckFinite_DeepState_TestHarness_generation.cpp and CheckFinite_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

void CheckFinite(Rcpp::NumericMatrix matPtr);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix matPtr  = RcppDeepState_NumericMatrix();
  std::string matPtr_t = "/home/akhila/fuzzer_packages/fuzzedpackages/NetRep/inst/testfiles/CheckFinite/libFuzzer_CheckFinite/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_matPtr.qs";
  qs::c_qsave(matPtr,matPtr_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "matPtr values: "<< matPtr << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    CheckFinite(matPtr);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
