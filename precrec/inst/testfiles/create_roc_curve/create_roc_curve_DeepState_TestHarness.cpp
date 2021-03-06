// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// create_roc_curve_DeepState_TestHarness_generation.cpp and create_roc_curve_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List create_roc_curve(const Rcpp::NumericVector& tps, const Rcpp::NumericVector& fps, const Rcpp::NumericVector& sp, const Rcpp::NumericVector& sn, double x_bins);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector tps  = RcppDeepState_NumericVector();
  qs::c_qsave(tps,"/home/akhila/fuzzer_packages/fuzzedpackages/precrec/inst/testfiles/create_roc_curve/inputs/tps.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tps values: "<< tps << std::endl;
  NumericVector fps  = RcppDeepState_NumericVector();
  qs::c_qsave(fps,"/home/akhila/fuzzer_packages/fuzzedpackages/precrec/inst/testfiles/create_roc_curve/inputs/fps.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "fps values: "<< fps << std::endl;
  NumericVector sp  = RcppDeepState_NumericVector();
  qs::c_qsave(sp,"/home/akhila/fuzzer_packages/fuzzedpackages/precrec/inst/testfiles/create_roc_curve/inputs/sp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sp values: "<< sp << std::endl;
  NumericVector sn  = RcppDeepState_NumericVector();
  qs::c_qsave(sn,"/home/akhila/fuzzer_packages/fuzzedpackages/precrec/inst/testfiles/create_roc_curve/inputs/sn.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sn values: "<< sn << std::endl;
  NumericVector x_bins(1);
  x_bins[0]  = RcppDeepState_double();
  qs::c_qsave(x_bins,"/home/akhila/fuzzer_packages/fuzzedpackages/precrec/inst/testfiles/create_roc_curve/inputs/x_bins.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x_bins values: "<< x_bins << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    create_roc_curve(tps,fps,sp,sn,x_bins[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
