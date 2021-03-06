// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// fftable_DeepState_TestHarness_generation.cpp and fftable_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerMatrix fftable(NumericMatrix df, int w);

TEST(,){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix df  = RcppDeepState_NumericMatrix();
  std::string df_t = "/home/akhila/fuzzer_packages/fuzzedpackages/BNSL/inst/testfiles/fftable/AFL_fftable/afl_inputs/" + std::to_string(t) + "_df.qs";
  qs::c_qsave(df,df_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "df values: "<< df << std::endl;
  IntegerVector w(1);
  w[0]  = RcppDeepState_int();
  std::string w_t = "/home/akhila/fuzzer_packages/fuzzedpackages/BNSL/inst/testfiles/fftable/AFL_fftable/afl_inputs/" + std::to_string(t) + "_w.qs";
  qs::c_qsave(w,w_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "w values: "<< w << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    fftable(df,w[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
