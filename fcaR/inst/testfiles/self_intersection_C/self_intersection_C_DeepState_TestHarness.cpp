// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// self_intersection_C_DeepState_TestHarness_generation.cpp and self_intersection_C_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerVector self_intersection_C(IntegerVector x_i, IntegerVector x_p, IntegerVector y_i, IntegerVector y_p);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector x_i  = RcppDeepState_IntegerVector();
  qs::c_qsave(x_i,"/home/akhila/fuzzer_packages/fuzzedpackages/fcaR/inst/testfiles/self_intersection_C/inputs/x_i.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x_i values: "<< x_i << std::endl;
  IntegerVector x_p  = RcppDeepState_IntegerVector();
  qs::c_qsave(x_p,"/home/akhila/fuzzer_packages/fuzzedpackages/fcaR/inst/testfiles/self_intersection_C/inputs/x_p.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x_p values: "<< x_p << std::endl;
  IntegerVector y_i  = RcppDeepState_IntegerVector();
  qs::c_qsave(y_i,"/home/akhila/fuzzer_packages/fuzzedpackages/fcaR/inst/testfiles/self_intersection_C/inputs/y_i.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y_i values: "<< y_i << std::endl;
  IntegerVector y_p  = RcppDeepState_IntegerVector();
  qs::c_qsave(y_p,"/home/akhila/fuzzer_packages/fuzzedpackages/fcaR/inst/testfiles/self_intersection_C/inputs/y_p.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y_p values: "<< y_p << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    self_intersection_C(x_i,x_p,y_i,y_p);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
