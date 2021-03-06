// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// truncatedSamplingSubiterationBinomialY_DeepState_TestHarness_generation.cpp and truncatedSamplingSubiterationBinomialY_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double truncatedSamplingSubiterationBinomialY(double uniformSample, double theta, double betaMinusOne);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector uniformSample(1);
  uniformSample[0]  = RcppDeepState_double();
  qs::c_qsave(uniformSample,"/home/akhila/fuzzer_packages/fuzzedpackages/multibridge/inst/testfiles/truncatedSamplingSubiterationBinomialY/inputs/uniformSample.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "uniformSample values: "<< uniformSample << std::endl;
  NumericVector theta(1);
  theta[0]  = RcppDeepState_double();
  qs::c_qsave(theta,"/home/akhila/fuzzer_packages/fuzzedpackages/multibridge/inst/testfiles/truncatedSamplingSubiterationBinomialY/inputs/theta.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "theta values: "<< theta << std::endl;
  NumericVector betaMinusOne(1);
  betaMinusOne[0]  = RcppDeepState_double();
  qs::c_qsave(betaMinusOne,"/home/akhila/fuzzer_packages/fuzzedpackages/multibridge/inst/testfiles/truncatedSamplingSubiterationBinomialY/inputs/betaMinusOne.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "betaMinusOne values: "<< betaMinusOne << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    truncatedSamplingSubiterationBinomialY(uniformSample[0],theta[0],betaMinusOne[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
