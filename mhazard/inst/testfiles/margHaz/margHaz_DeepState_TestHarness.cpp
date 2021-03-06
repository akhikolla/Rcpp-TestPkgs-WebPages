// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// margHaz_DeepState_TestHarness_generation.cpp and margHaz_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector margHaz(NumericVector Y, NumericVector T, NumericVector Delta);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector Y  = RcppDeepState_NumericVector();
  qs::c_qsave(Y,"/home/akhila/fuzzer_packages/fuzzedpackages/mhazard/inst/testfiles/margHaz/inputs/Y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Y values: "<< Y << std::endl;
  NumericVector T  = RcppDeepState_NumericVector();
  qs::c_qsave(T,"/home/akhila/fuzzer_packages/fuzzedpackages/mhazard/inst/testfiles/margHaz/inputs/T.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "T values: "<< T << std::endl;
  NumericVector Delta  = RcppDeepState_NumericVector();
  qs::c_qsave(Delta,"/home/akhila/fuzzer_packages/fuzzedpackages/mhazard/inst/testfiles/margHaz/inputs/Delta.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Delta values: "<< Delta << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    margHaz(Y,T,Delta);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
