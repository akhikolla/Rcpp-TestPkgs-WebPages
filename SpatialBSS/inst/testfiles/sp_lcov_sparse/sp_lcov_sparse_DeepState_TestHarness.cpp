// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// sp_lcov_sparse_DeepState_TestHarness_generation.cpp and sp_lcov_sparse_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat sp_lcov_sparse(const arma::mat& x, const arma::mat& k);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  std::ofstream x_stream;
  arma::mat x  = RcppDeepState_mat();
  x_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/SpatialBSS/inst/testfiles/sp_lcov_sparse/inputs/x");
  x_stream << x;
  std::cout << "x values: "<< x << std::endl;
  x_stream.close();
  std::ofstream k_stream;
  arma::mat k  = RcppDeepState_mat();
  k_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/SpatialBSS/inst/testfiles/sp_lcov_sparse/inputs/k");
  k_stream << k;
  std::cout << "k values: "<< k << std::endl;
  k_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    sp_lcov_sparse(x,k);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
