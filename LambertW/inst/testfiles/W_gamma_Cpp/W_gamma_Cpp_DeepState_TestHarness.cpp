// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// W_gamma_Cpp_DeepState_TestHarness_generation.cpp and W_gamma_Cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector W_gamma_Cpp(const NumericVector& z, double gamma, int branch);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector z  = RcppDeepState_NumericVector();
  qs::c_qsave(z,"/home/akhila/fuzzer_packages/fuzzedpackages/LambertW/inst/testfiles/W_gamma_Cpp/inputs/z.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "z values: "<< z << std::endl;
  NumericVector gamma(1);
  gamma[0]  = RcppDeepState_double();
  qs::c_qsave(gamma,"/home/akhila/fuzzer_packages/fuzzedpackages/LambertW/inst/testfiles/W_gamma_Cpp/inputs/gamma.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "gamma values: "<< gamma << std::endl;
  IntegerVector branch(1);
  branch[0]  = RcppDeepState_int();
  qs::c_qsave(branch,"/home/akhila/fuzzer_packages/fuzzedpackages/LambertW/inst/testfiles/W_gamma_Cpp/inputs/branch.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "branch values: "<< branch << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    W_gamma_Cpp(z,gamma[0],branch[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
