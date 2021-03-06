// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// weighted_3darray_DeepState_TestHarness_generation.cpp and weighted_3darray_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector weighted_3darray(const NumericVector& array, const NumericVector& weights);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector array  = RcppDeepState_NumericVector();
  std::string array_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2pleio/inst/testfiles/weighted_3darray/libFuzzer_weighted_3darray/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_array.qs";
  qs::c_qsave(array,array_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "array values: "<< array << std::endl;
  NumericVector weights  = RcppDeepState_NumericVector();
  std::string weights_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2pleio/inst/testfiles/weighted_3darray/libFuzzer_weighted_3darray/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_weights.qs";
  qs::c_qsave(weights,weights_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weights values: "<< weights << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    weighted_3darray(array,weights);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
