// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// dbasis_matrix_DeepState_TestHarness_generation.cpp and dbasis_matrix_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericMatrix dbasis_matrix(const Rcpp::NumericMatrix& knots, const Rcpp::NumericVector& x);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix knots  = RcppDeepState_NumericMatrix();
  qs::c_qsave(knots,"/home/akhila/fuzzer_packages/fuzzedpackages/flexsurv/inst/testfiles/dbasis_matrix/inputs/knots.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "knots values: "<< knots << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/flexsurv/inst/testfiles/dbasis_matrix/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    dbasis_matrix(knots,x);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
