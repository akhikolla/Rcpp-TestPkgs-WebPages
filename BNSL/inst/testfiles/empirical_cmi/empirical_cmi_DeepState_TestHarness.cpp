// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// empirical_cmi_DeepState_TestHarness_generation.cpp and empirical_cmi_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double empirical_cmi(NumericVector x, NumericVector y, NumericVector z);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/BNSL/inst/testfiles/empirical_cmi/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector y  = RcppDeepState_NumericVector();
  qs::c_qsave(y,"/home/akhila/fuzzer_packages/fuzzedpackages/BNSL/inst/testfiles/empirical_cmi/inputs/y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  NumericVector z  = RcppDeepState_NumericVector();
  qs::c_qsave(z,"/home/akhila/fuzzer_packages/fuzzedpackages/BNSL/inst/testfiles/empirical_cmi/inputs/z.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "z values: "<< z << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    empirical_cmi(x,y,z);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
