// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// Krone_DeepState_TestHarness_generation.cpp and Krone_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat Krone(const arma::mat& A, const arma::mat& B);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  std::ofstream A_stream;
  arma::mat A  = RcppDeepState_mat();
  A_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/BMTME/inst/testfiles/Krone/inputs/A");
  A_stream << A;
  std::cout << "A values: "<< A << std::endl;
  A_stream.close();
  std::ofstream B_stream;
  arma::mat B  = RcppDeepState_mat();
  B_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/BMTME/inst/testfiles/Krone/inputs/B");
  B_stream << B;
  std::cout << "B values: "<< B << std::endl;
  B_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    Krone(A,B);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
