// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// ecf_cpp_DeepState_TestHarness_generation.cpp and ecf_cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::cx_vec ecf_cpp(const arma::mat& t, const arma::mat& smp);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  std::ofstream t_stream;
  arma::mat t  = RcppDeepState_mat();
  t_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/empichar/inst/testfiles/ecf_cpp/inputs/t");
  t_stream << t;
  std::cout << "t values: "<< t << std::endl;
  t_stream.close();
  std::ofstream smp_stream;
  arma::mat smp  = RcppDeepState_mat();
  smp_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/empichar/inst/testfiles/ecf_cpp/inputs/smp");
  smp_stream << smp;
  std::cout << "smp values: "<< smp << std::endl;
  smp_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    ecf_cpp(t,smp);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
