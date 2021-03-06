// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// solveNNLS_DeepState_TestHarness_generation.cpp and solveNNLS_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat solveNNLS(const arma::mat& C, const arma::mat& B);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  std::ofstream C_stream;
  arma::mat C  = RcppDeepState_mat();
  C_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/rliger/inst/testfiles/solveNNLS/inputs/C");
  C_stream << C;
  std::cout << "C values: "<< C << std::endl;
  C_stream.close();
  std::ofstream B_stream;
  arma::mat B  = RcppDeepState_mat();
  B_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/rliger/inst/testfiles/solveNNLS/inputs/B");
  B_stream << B;
  std::cout << "B values: "<< B << std::endl;
  B_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    solveNNLS(C,B);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
