// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// duration_to_string_impl_DeepState_TestHarness_generation.cpp and duration_to_string_impl_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::CharacterVector duration_to_string_impl(Rcpp::NumericVector dur);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector dur  = RcppDeepState_NumericVector();
  qs::c_qsave(dur,"/home/akhila/fuzzer_packages/fuzzedpackages/nanotime/inst/testfiles/duration_to_string_impl/inputs/dur.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dur values: "<< dur << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    duration_to_string_impl(dur);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
