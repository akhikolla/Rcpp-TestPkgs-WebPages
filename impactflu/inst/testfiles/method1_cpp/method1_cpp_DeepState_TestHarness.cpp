// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// method1_cpp_DeepState_TestHarness_generation.cpp and method1_cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

DataFrame method1_cpp(const int init_pop_size, const IntegerVector& vaccinations, const IntegerVector& cases, const NumericVector& ve);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector init_pop_size(1);
  init_pop_size[0]  = RcppDeepState_int();
  qs::c_qsave(init_pop_size,"/home/akhila/fuzzer_packages/fuzzedpackages/impactflu/inst/testfiles/method1_cpp/inputs/init_pop_size.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "init_pop_size values: "<< init_pop_size << std::endl;
  IntegerVector vaccinations  = RcppDeepState_IntegerVector();
  qs::c_qsave(vaccinations,"/home/akhila/fuzzer_packages/fuzzedpackages/impactflu/inst/testfiles/method1_cpp/inputs/vaccinations.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vaccinations values: "<< vaccinations << std::endl;
  IntegerVector cases  = RcppDeepState_IntegerVector();
  qs::c_qsave(cases,"/home/akhila/fuzzer_packages/fuzzedpackages/impactflu/inst/testfiles/method1_cpp/inputs/cases.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cases values: "<< cases << std::endl;
  NumericVector ve  = RcppDeepState_NumericVector();
  qs::c_qsave(ve,"/home/akhila/fuzzer_packages/fuzzedpackages/impactflu/inst/testfiles/method1_cpp/inputs/ve.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ve values: "<< ve << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    method1_cpp(init_pop_size[0],vaccinations,cases,ve);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
