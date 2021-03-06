// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// mdmb_rcpp_frm_normalize_posterior_DeepState_TestHarness_generation.cpp and mdmb_rcpp_frm_normalize_posterior_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::NumericVector mdmb_rcpp_frm_normalize_posterior(Rcpp::NumericVector post, Rcpp::IntegerVector case_);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector post  = RcppDeepState_NumericVector();
  qs::c_qsave(post,"/home/akhila/fuzzer_packages/fuzzedpackages/mdmb/inst/testfiles/mdmb_rcpp_frm_normalize_posterior/inputs/post.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "post values: "<< post << std::endl;
  IntegerVector case_  = RcppDeepState_IntegerVector();
  qs::c_qsave(case_,"/home/akhila/fuzzer_packages/fuzzedpackages/mdmb/inst/testfiles/mdmb_rcpp_frm_normalize_posterior/inputs/case_.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "case_ values: "<< case_ << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    mdmb_rcpp_frm_normalize_posterior(post,case_);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
