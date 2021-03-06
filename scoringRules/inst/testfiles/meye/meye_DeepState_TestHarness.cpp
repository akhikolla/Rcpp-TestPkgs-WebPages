// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// meye_DeepState_TestHarness_generation.cpp and meye_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat meye(double n);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector n(1);
  n[0]  = RcppDeepState_double();
  qs::c_qsave(n,"/home/akhila/fuzzer_packages/fuzzedpackages/scoringRules/inst/testfiles/meye/inputs/n.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n values: "<< n << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    meye(n[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
