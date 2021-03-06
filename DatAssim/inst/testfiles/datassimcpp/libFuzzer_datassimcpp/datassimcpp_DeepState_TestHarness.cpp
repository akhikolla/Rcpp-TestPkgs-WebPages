// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// datassimcpp_DeepState_TestHarness_generation.cpp and datassimcpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List datassimcpp(arma::mat& pred, arma::mat& var, arma::mat Corr);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  std::ofstream pred_stream;
  arma::mat pred  = RcppDeepState_mat();
  pred_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/DatAssim/inst/testfiles/datassimcpp/inputs/pred");
  pred_stream << pred;
  std::cout << "pred values: "<< pred << std::endl;
  pred_stream.close();
  std::ofstream var_stream;
  arma::mat var  = RcppDeepState_mat();
  var_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/DatAssim/inst/testfiles/datassimcpp/inputs/var");
  var_stream << var;
  std::cout << "var values: "<< var << std::endl;
  var_stream.close();
  std::ofstream Corr_stream;
  arma::mat Corr  = RcppDeepState_mat();
  Corr_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/DatAssim/inst/testfiles/datassimcpp/inputs/Corr");
  Corr_stream << Corr;
  std::cout << "Corr values: "<< Corr << std::endl;
  Corr_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    datassimcpp(pred,var,Corr);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
