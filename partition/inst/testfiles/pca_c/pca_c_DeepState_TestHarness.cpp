// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// pca_c_DeepState_TestHarness_generation.cpp and pca_c_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List pca_c(arma::mat x);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  std::ofstream x_stream;
  arma::mat x  = RcppDeepState_mat();
  x_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/partition/inst/testfiles/pca_c/inputs/x");
  x_stream << x;
  std::cout << "x values: "<< x << std::endl;
  x_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    pca_c(x);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
