// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cpp_chisq_DeepState_TestHarness_generation.cpp and cpp_chisq_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double cpp_chisq(const IntegerVector& T1, const IntegerVector& T2, const IntegerVector& Tsum);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  IntegerVector T1  = RcppDeepState_IntegerVector();
  std::string T1_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rainette/inst/testfiles/cpp_chisq/libFuzzer_cpp_chisq/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_T1.qs";
  qs::c_qsave(T1,T1_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "T1 values: "<< T1 << std::endl;
  IntegerVector T2  = RcppDeepState_IntegerVector();
  std::string T2_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rainette/inst/testfiles/cpp_chisq/libFuzzer_cpp_chisq/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_T2.qs";
  qs::c_qsave(T2,T2_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "T2 values: "<< T2 << std::endl;
  IntegerVector Tsum  = RcppDeepState_IntegerVector();
  std::string Tsum_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rainette/inst/testfiles/cpp_chisq/libFuzzer_cpp_chisq/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_Tsum.qs";
  qs::c_qsave(Tsum,Tsum_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Tsum values: "<< Tsum << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cpp_chisq(T1,T2,Tsum);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
