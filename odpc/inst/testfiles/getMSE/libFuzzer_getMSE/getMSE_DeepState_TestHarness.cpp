// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// getMSE_DeepState_TestHarness_generation.cpp and getMSE_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double getMSE(const arma::mat& resp, const arma::mat& Fitted);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  std::ofstream resp_stream;
  arma::mat resp  = RcppDeepState_mat();
  resp_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/odpc/inst/testfiles/getMSE/inputs/resp");
  resp_stream << resp;
  std::cout << "resp values: "<< resp << std::endl;
  resp_stream.close();
  std::ofstream Fitted_stream;
  arma::mat Fitted  = RcppDeepState_mat();
  Fitted_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/odpc/inst/testfiles/getMSE/inputs/Fitted");
  Fitted_stream << Fitted;
  std::cout << "Fitted values: "<< Fitted << std::endl;
  Fitted_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    getMSE(resp,Fitted);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
