// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// check_gengamma_DeepState_TestHarness_generation.cpp and check_gengamma_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::LogicalVector check_gengamma(const Rcpp::NumericVector& mu, const Rcpp::NumericVector& sigma, const Rcpp::NumericVector& Q);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector mu  = RcppDeepState_NumericVector();
  qs::c_qsave(mu,"/home/akhila/fuzzer_packages/fuzzedpackages/flexsurv/inst/testfiles/check_gengamma/inputs/mu.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "mu values: "<< mu << std::endl;
  NumericVector sigma  = RcppDeepState_NumericVector();
  qs::c_qsave(sigma,"/home/akhila/fuzzer_packages/fuzzedpackages/flexsurv/inst/testfiles/check_gengamma/inputs/sigma.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sigma values: "<< sigma << std::endl;
  NumericVector Q  = RcppDeepState_NumericVector();
  qs::c_qsave(Q,"/home/akhila/fuzzer_packages/fuzzedpackages/flexsurv/inst/testfiles/check_gengamma/inputs/Q.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Q values: "<< Q << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    check_gengamma(mu,sigma,Q);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
