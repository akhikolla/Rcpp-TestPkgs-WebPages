// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// mean_boot_DeepState_TestHarness_generation.cpp and mean_boot_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector mean_boot(NumericVector x, int N, int S);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/sctransform/inst/testfiles/mean_boot/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  IntegerVector N(1);
  N[0]  = RcppDeepState_int();
  qs::c_qsave(N,"/home/akhila/fuzzer_packages/fuzzedpackages/sctransform/inst/testfiles/mean_boot/inputs/N.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "N values: "<< N << std::endl;
  IntegerVector S(1);
  S[0]  = RcppDeepState_int();
  qs::c_qsave(S,"/home/akhila/fuzzer_packages/fuzzedpackages/sctransform/inst/testfiles/mean_boot/inputs/S.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "S values: "<< S << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    mean_boot(x,N[0],S[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
