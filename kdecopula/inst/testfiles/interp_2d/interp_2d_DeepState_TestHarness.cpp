// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// interp_2d_DeepState_TestHarness_generation.cpp and interp_2d_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericVector interp_2d(const Rcpp::NumericMatrix& x, const Rcpp::NumericMatrix& vals, const Rcpp::NumericVector& grid, Rcpp::NumericVector tmpgrid, Rcpp::NumericVector tmpvals);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix x  = RcppDeepState_NumericMatrix();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/kdecopula/inst/testfiles/interp_2d/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericMatrix vals  = RcppDeepState_NumericMatrix();
  qs::c_qsave(vals,"/home/akhila/fuzzer_packages/fuzzedpackages/kdecopula/inst/testfiles/interp_2d/inputs/vals.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vals values: "<< vals << std::endl;
  NumericVector grid  = RcppDeepState_NumericVector();
  qs::c_qsave(grid,"/home/akhila/fuzzer_packages/fuzzedpackages/kdecopula/inst/testfiles/interp_2d/inputs/grid.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "grid values: "<< grid << std::endl;
  NumericVector tmpgrid  = RcppDeepState_NumericVector();
  qs::c_qsave(tmpgrid,"/home/akhila/fuzzer_packages/fuzzedpackages/kdecopula/inst/testfiles/interp_2d/inputs/tmpgrid.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tmpgrid values: "<< tmpgrid << std::endl;
  NumericVector tmpvals  = RcppDeepState_NumericVector();
  qs::c_qsave(tmpvals,"/home/akhila/fuzzer_packages/fuzzedpackages/kdecopula/inst/testfiles/interp_2d/inputs/tmpvals.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tmpvals values: "<< tmpvals << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    interp_2d(x,vals,grid,tmpgrid,tmpvals);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
