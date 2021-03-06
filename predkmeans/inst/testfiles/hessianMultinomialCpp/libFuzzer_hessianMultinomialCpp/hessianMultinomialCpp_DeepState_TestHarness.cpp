// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// hessianMultinomialCpp_DeepState_TestHarness_generation.cpp and hessianMultinomialCpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat hessianMultinomialCpp(arma::mat X, arma::mat b, arma::mat y, int p, int k);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  std::ofstream X_stream;
  arma::mat X  = RcppDeepState_mat();
  X_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/predkmeans/inst/testfiles/hessianMultinomialCpp/inputs/X");
  X_stream << X;
  std::cout << "X values: "<< X << std::endl;
  X_stream.close();
  std::ofstream b_stream;
  arma::mat b  = RcppDeepState_mat();
  b_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/predkmeans/inst/testfiles/hessianMultinomialCpp/inputs/b");
  b_stream << b;
  std::cout << "b values: "<< b << std::endl;
  b_stream.close();
  std::ofstream y_stream;
  arma::mat y  = RcppDeepState_mat();
  y_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/predkmeans/inst/testfiles/hessianMultinomialCpp/inputs/y");
  y_stream << y;
  std::cout << "y values: "<< y << std::endl;
  y_stream.close();
  IntegerVector p(1);
  p[0]  = RcppDeepState_int();
  std::string p_t = "/home/akhila/fuzzer_packages/fuzzedpackages/predkmeans/inst/testfiles/hessianMultinomialCpp/libFuzzer_hessianMultinomialCpp/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_p.qs";
  qs::c_qsave(p,p_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "p values: "<< p << std::endl;
  IntegerVector k(1);
  k[0]  = RcppDeepState_int();
  std::string k_t = "/home/akhila/fuzzer_packages/fuzzedpackages/predkmeans/inst/testfiles/hessianMultinomialCpp/libFuzzer_hessianMultinomialCpp/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_k.qs";
  qs::c_qsave(k,k_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "k values: "<< k << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    hessianMultinomialCpp(X,b,y,p[0],k[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
