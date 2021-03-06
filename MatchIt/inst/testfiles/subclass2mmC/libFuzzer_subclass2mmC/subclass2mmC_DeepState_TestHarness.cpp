// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// subclass2mmC_DeepState_TestHarness_generation.cpp and subclass2mmC_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerMatrix subclass2mmC(const IntegerVector& subclass, const IntegerVector& treat, const int& focal);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  IntegerVector subclass  = RcppDeepState_IntegerVector();
  std::string subclass_t = "/home/akhila/fuzzer_packages/fuzzedpackages/MatchIt/inst/testfiles/subclass2mmC/libFuzzer_subclass2mmC/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_subclass.qs";
  qs::c_qsave(subclass,subclass_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "subclass values: "<< subclass << std::endl;
  IntegerVector treat  = RcppDeepState_IntegerVector();
  std::string treat_t = "/home/akhila/fuzzer_packages/fuzzedpackages/MatchIt/inst/testfiles/subclass2mmC/libFuzzer_subclass2mmC/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_treat.qs";
  qs::c_qsave(treat,treat_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "treat values: "<< treat << std::endl;
  IntegerVector focal(1);
  focal[0]  = RcppDeepState_int();
  std::string focal_t = "/home/akhila/fuzzer_packages/fuzzedpackages/MatchIt/inst/testfiles/subclass2mmC/libFuzzer_subclass2mmC/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_focal.qs";
  qs::c_qsave(focal,focal_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "focal values: "<< focal << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    subclass2mmC(subclass,treat,focal[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
