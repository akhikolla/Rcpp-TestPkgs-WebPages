// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// comp_lsl_DeepState_TestHarness_generation.cpp and comp_lsl_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::vec comp_lsl(arma::mat& A);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  std::ofstream A_stream;
  arma::mat A  = RcppDeepState_mat();
  A_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/HTLR/inst/testfiles/comp_lsl/inputs/A");
  A_stream << A;
  std::cout << "A values: "<< A << std::endl;
  A_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    comp_lsl(A);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
