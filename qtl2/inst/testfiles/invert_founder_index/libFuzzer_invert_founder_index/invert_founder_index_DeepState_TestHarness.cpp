// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// invert_founder_index_DeepState_TestHarness_generation.cpp and invert_founder_index_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerVector invert_founder_index(IntegerVector cross_info);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  IntegerVector cross_info  = RcppDeepState_IntegerVector();
  std::string cross_info_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/invert_founder_index/libFuzzer_invert_founder_index/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_cross_info.qs";
  qs::c_qsave(cross_info,cross_info_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cross_info values: "<< cross_info << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    invert_founder_index(cross_info);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
