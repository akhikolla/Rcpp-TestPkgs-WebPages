// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// get_Q0_DeepState_TestHarness_generation.cpp and get_Q0_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat get_Q0(const arma::mat& Qmat, const arma::mat& Fmat);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  std::ofstream Qmat_stream;
  arma::mat Qmat  = RcppDeepState_mat();
  Qmat_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/mssm/inst/testfiles/get_Q0/inputs/Qmat");
  Qmat_stream << Qmat;
  std::cout << "Qmat values: "<< Qmat << std::endl;
  Qmat_stream.close();
  std::ofstream Fmat_stream;
  arma::mat Fmat  = RcppDeepState_mat();
  Fmat_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/mssm/inst/testfiles/get_Q0/inputs/Fmat");
  Fmat_stream << Fmat;
  std::cout << "Fmat values: "<< Fmat << std::endl;
  Fmat_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    get_Q0(Qmat,Fmat);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
