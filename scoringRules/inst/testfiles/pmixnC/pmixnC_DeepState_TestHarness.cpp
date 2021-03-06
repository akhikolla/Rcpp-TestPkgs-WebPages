// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// pmixnC_DeepState_TestHarness_generation.cpp and pmixnC_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector pmixnC(NumericVector m, NumericVector s, NumericVector y);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector m  = RcppDeepState_NumericVector();
  qs::c_qsave(m,"/home/akhila/fuzzer_packages/fuzzedpackages/scoringRules/inst/testfiles/pmixnC/inputs/m.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "m values: "<< m << std::endl;
  NumericVector s  = RcppDeepState_NumericVector();
  qs::c_qsave(s,"/home/akhila/fuzzer_packages/fuzzedpackages/scoringRules/inst/testfiles/pmixnC/inputs/s.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "s values: "<< s << std::endl;
  NumericVector y  = RcppDeepState_NumericVector();
  qs::c_qsave(y,"/home/akhila/fuzzer_packages/fuzzedpackages/scoringRules/inst/testfiles/pmixnC/inputs/y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    pmixnC(m,s,y);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
