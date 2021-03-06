// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// colmeans_DeepState_TestHarness_generation.cpp and colmeans_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector colmeans(NumericMatrix input_mat);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix input_mat  = RcppDeepState_NumericMatrix();
  std::string input_mat_t = "/home/akhila/fuzzer_packages/fuzzedpackages/obliqueRSF/inst/testfiles/colmeans/libFuzzer_colmeans/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_input_mat.qs";
  qs::c_qsave(input_mat,input_mat_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "input_mat values: "<< input_mat << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    colmeans(input_mat);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
