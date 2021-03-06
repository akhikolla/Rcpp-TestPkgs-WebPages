// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// SurvTime_DeepState_TestHarness_generation.cpp and SurvTime_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double SurvTime(double birthyear, double age, double probability, int sex);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector birthyear(1);
  birthyear[0]  = RcppDeepState_double();
  std::string birthyear_t = "/home/akhila/fuzzer_packages/fuzzedpackages/missDeaths/inst/testfiles/SurvTime/libFuzzer_SurvTime/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_birthyear.qs";
  qs::c_qsave(birthyear,birthyear_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "birthyear values: "<< birthyear << std::endl;
  NumericVector age(1);
  age[0]  = RcppDeepState_double();
  std::string age_t = "/home/akhila/fuzzer_packages/fuzzedpackages/missDeaths/inst/testfiles/SurvTime/libFuzzer_SurvTime/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_age.qs";
  qs::c_qsave(age,age_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "age values: "<< age << std::endl;
  NumericVector probability(1);
  probability[0]  = RcppDeepState_double();
  std::string probability_t = "/home/akhila/fuzzer_packages/fuzzedpackages/missDeaths/inst/testfiles/SurvTime/libFuzzer_SurvTime/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_probability.qs";
  qs::c_qsave(probability,probability_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "probability values: "<< probability << std::endl;
  IntegerVector sex(1);
  sex[0]  = RcppDeepState_int();
  std::string sex_t = "/home/akhila/fuzzer_packages/fuzzedpackages/missDeaths/inst/testfiles/SurvTime/libFuzzer_SurvTime/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_sex.qs";
  qs::c_qsave(sex,sex_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sex values: "<< sex << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    SurvTime(birthyear[0],age[0],probability[0],sex[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
