// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// lfdistance_DeepState_TestHarness_generation.cpp and lfdistance_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double lfdistance(arma::mat& L1, arma::mat& L2, double inct);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  std::ofstream L1_stream;
  arma::mat L1  = RcppDeepState_mat();
  L1_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/NetworkDistance/inst/testfiles/lfdistance/inputs/L1");
  L1_stream << L1;
  std::cout << "L1 values: "<< L1 << std::endl;
  L1_stream.close();
  std::ofstream L2_stream;
  arma::mat L2  = RcppDeepState_mat();
  L2_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/NetworkDistance/inst/testfiles/lfdistance/inputs/L2");
  L2_stream << L2;
  std::cout << "L2 values: "<< L2 << std::endl;
  L2_stream.close();
  NumericVector inct(1);
  inct[0]  = RcppDeepState_double();
  qs::c_qsave(inct,"/home/akhila/fuzzer_packages/fuzzedpackages/NetworkDistance/inst/testfiles/lfdistance/inputs/inct.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "inct values: "<< inct << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    lfdistance(L1,L2,inct[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
