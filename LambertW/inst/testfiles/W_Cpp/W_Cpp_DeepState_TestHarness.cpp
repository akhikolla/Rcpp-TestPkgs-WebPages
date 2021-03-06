// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// W_Cpp_DeepState_TestHarness_generation.cpp and W_Cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector W_Cpp(const NumericVector& z, int branch);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector z  = RcppDeepState_NumericVector();
  qs::c_qsave(z,"/home/akhila/fuzzer_packages/fuzzedpackages/LambertW/inst/testfiles/W_Cpp/inputs/z.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "z values: "<< z << std::endl;
  IntegerVector branch(1);
  branch[0]  = RcppDeepState_int();
  qs::c_qsave(branch,"/home/akhila/fuzzer_packages/fuzzedpackages/LambertW/inst/testfiles/W_Cpp/inputs/branch.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "branch values: "<< branch << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    W_Cpp(z,branch[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
