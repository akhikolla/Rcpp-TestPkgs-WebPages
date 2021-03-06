// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// permute_nvector_stratified_DeepState_TestHarness_generation.cpp and permute_nvector_stratified_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix permute_nvector_stratified(const int n_perm, const NumericVector& x, const IntegerVector& strata, int n_strata);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  IntegerVector n_perm(1);
  n_perm[0]  = RcppDeepState_int();
  std::string n_perm_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/permute_nvector_stratified/libFuzzer_permute_nvector_stratified/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_n_perm.qs";
  qs::c_qsave(n_perm,n_perm_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n_perm values: "<< n_perm << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  std::string x_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/permute_nvector_stratified/libFuzzer_permute_nvector_stratified/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_x.qs";
  qs::c_qsave(x,x_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  IntegerVector strata  = RcppDeepState_IntegerVector();
  std::string strata_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/permute_nvector_stratified/libFuzzer_permute_nvector_stratified/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_strata.qs";
  qs::c_qsave(strata,strata_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "strata values: "<< strata << std::endl;
  IntegerVector n_strata(1);
  n_strata[0]  = RcppDeepState_int();
  std::string n_strata_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/permute_nvector_stratified/libFuzzer_permute_nvector_stratified/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_n_strata.qs";
  qs::c_qsave(n_strata,n_strata_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n_strata values: "<< n_strata << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    permute_nvector_stratified(n_perm[0],x,strata,n_strata[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
