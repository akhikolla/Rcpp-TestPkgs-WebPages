// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// sample_sigma_DeepState_TestHarness_generation.cpp and sample_sigma_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat sample_sigma(double const& nu, arma::mat const& V, int const& p);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector nu(1);
  nu[0]  = RcppDeepState_double();
  qs::c_qsave(nu,"/home/akhila/fuzzer_packages/fuzzedpackages/surbayes/inst/testfiles/sample_sigma/inputs/nu.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nu values: "<< nu << std::endl;
  std::ofstream V_stream;
  arma::mat V  = RcppDeepState_mat();
  V_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/surbayes/inst/testfiles/sample_sigma/inputs/V");
  V_stream << V;
  std::cout << "V values: "<< V << std::endl;
  V_stream.close();
  IntegerVector p(1);
  p[0]  = RcppDeepState_int();
  qs::c_qsave(p,"/home/akhila/fuzzer_packages/fuzzedpackages/surbayes/inst/testfiles/sample_sigma/inputs/p.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "p values: "<< p << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    sample_sigma(nu[0],V,p[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
