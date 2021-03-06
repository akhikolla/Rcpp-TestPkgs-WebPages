// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// StrBCD_BT_In_DeepState_TestHarness_generation.cpp and StrBCD_BT_In_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double StrBCD_BT_In(arma::mat data, double B, double p);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  std::ofstream data_stream;
  arma::mat data  = RcppDeepState_mat();
  data_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/carat/inst/testfiles/StrBCD_BT_In/inputs/data");
  data_stream << data;
  std::cout << "data values: "<< data << std::endl;
  data_stream.close();
  NumericVector B(1);
  B[0]  = RcppDeepState_double();
  qs::c_qsave(B,"/home/akhila/fuzzer_packages/fuzzedpackages/carat/inst/testfiles/StrBCD_BT_In/inputs/B.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "B values: "<< B << std::endl;
  NumericVector p(1);
  p[0]  = RcppDeepState_double();
  qs::c_qsave(p,"/home/akhila/fuzzer_packages/fuzzedpackages/carat/inst/testfiles/StrBCD_BT_In/inputs/p.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "p values: "<< p << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    StrBCD_BT_In(data,B[0],p[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
