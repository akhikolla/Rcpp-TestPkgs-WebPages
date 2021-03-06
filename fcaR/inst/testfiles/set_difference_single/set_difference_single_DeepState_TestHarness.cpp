// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// set_difference_single_DeepState_TestHarness_generation.cpp and set_difference_single_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

S4 set_difference_single(IntegerVector xi, IntegerVector xp, NumericVector xx, IntegerVector yi, IntegerVector yp, NumericVector yx, int number);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector xi  = RcppDeepState_IntegerVector();
  qs::c_qsave(xi,"/home/akhila/fuzzer_packages/fuzzedpackages/fcaR/inst/testfiles/set_difference_single/inputs/xi.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "xi values: "<< xi << std::endl;
  IntegerVector xp  = RcppDeepState_IntegerVector();
  qs::c_qsave(xp,"/home/akhila/fuzzer_packages/fuzzedpackages/fcaR/inst/testfiles/set_difference_single/inputs/xp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "xp values: "<< xp << std::endl;
  NumericVector xx  = RcppDeepState_NumericVector();
  qs::c_qsave(xx,"/home/akhila/fuzzer_packages/fuzzedpackages/fcaR/inst/testfiles/set_difference_single/inputs/xx.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "xx values: "<< xx << std::endl;
  IntegerVector yi  = RcppDeepState_IntegerVector();
  qs::c_qsave(yi,"/home/akhila/fuzzer_packages/fuzzedpackages/fcaR/inst/testfiles/set_difference_single/inputs/yi.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "yi values: "<< yi << std::endl;
  IntegerVector yp  = RcppDeepState_IntegerVector();
  qs::c_qsave(yp,"/home/akhila/fuzzer_packages/fuzzedpackages/fcaR/inst/testfiles/set_difference_single/inputs/yp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "yp values: "<< yp << std::endl;
  NumericVector yx  = RcppDeepState_NumericVector();
  qs::c_qsave(yx,"/home/akhila/fuzzer_packages/fuzzedpackages/fcaR/inst/testfiles/set_difference_single/inputs/yx.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "yx values: "<< yx << std::endl;
  IntegerVector number(1);
  number[0]  = RcppDeepState_int();
  qs::c_qsave(number,"/home/akhila/fuzzer_packages/fuzzedpackages/fcaR/inst/testfiles/set_difference_single/inputs/number.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "number values: "<< number << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    set_difference_single(xi,xp,xx,yi,yp,yx,number[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
