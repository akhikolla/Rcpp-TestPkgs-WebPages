// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// print_matrix_DeepState_TestHarness_generation.cpp and print_matrix_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

void print_matrix(NumericMatrix I);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix I  = RcppDeepState_NumericMatrix();
  qs::c_qsave(I,"/home/akhila/fuzzer_packages/fuzzedpackages/fcaR/inst/testfiles/print_matrix/inputs/I.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "I values: "<< I << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    print_matrix(I);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
