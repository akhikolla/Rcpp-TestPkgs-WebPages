// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// makeFull_DeepState_TestHarness_generation.cpp and makeFull_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat makeFull(const arma::mat& X);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  std::ofstream X_stream;
  arma::mat X  = RcppDeepState_mat();
  X_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/sommer/inst/testfiles/makeFull/inputs/X");
  X_stream << X;
  std::cout << "X values: "<< X << std::endl;
  X_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    makeFull(X);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
