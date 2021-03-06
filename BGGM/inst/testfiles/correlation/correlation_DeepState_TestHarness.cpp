// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// correlation_DeepState_TestHarness_generation.cpp and correlation_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

float correlation(arma::mat Rinv_1, arma::mat Rinv_2);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  std::ofstream Rinv_1_stream;
  arma::mat Rinv_1  = RcppDeepState_mat();
  Rinv_1_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/BGGM/inst/testfiles/correlation/inputs/Rinv_1");
  Rinv_1_stream << Rinv_1;
  std::cout << "Rinv_1 values: "<< Rinv_1 << std::endl;
  Rinv_1_stream.close();
  std::ofstream Rinv_2_stream;
  arma::mat Rinv_2  = RcppDeepState_mat();
  Rinv_2_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/BGGM/inst/testfiles/correlation/inputs/Rinv_2");
  Rinv_2_stream << Rinv_2;
  std::cout << "Rinv_2 values: "<< Rinv_2 << std::endl;
  Rinv_2_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    correlation(Rinv_1,Rinv_2);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
