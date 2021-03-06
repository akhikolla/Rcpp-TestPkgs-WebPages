// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// comp_expmat_DeepState_TestHarness_generation.cpp and comp_expmat_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat comp_expmat(const arma::mat& Q);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  std::ofstream Q_stream;
  arma::mat Q  = RcppDeepState_mat();
  Q_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/ECctmc/inst/testfiles/comp_expmat/inputs/Q");
  Q_stream << Q;
  std::cout << "Q values: "<< Q << std::endl;
  Q_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    comp_expmat(Q);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
