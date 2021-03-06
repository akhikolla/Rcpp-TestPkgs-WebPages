// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// RIDGEc_DeepState_TestHarness_generation.cpp and RIDGEc_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat RIDGEc(const arma::mat& S, double lam);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  std::ofstream S_stream;
  arma::mat S  = RcppDeepState_mat();
  S_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/ADMMsigma/inst/testfiles/RIDGEc/inputs/S");
  S_stream << S;
  std::cout << "S values: "<< S << std::endl;
  S_stream.close();
  NumericVector lam(1);
  lam[0]  = RcppDeepState_double();
  qs::c_qsave(lam,"/home/akhila/fuzzer_packages/fuzzedpackages/ADMMsigma/inst/testfiles/RIDGEc/inputs/lam.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lam values: "<< lam << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    RIDGEc(S,lam[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
