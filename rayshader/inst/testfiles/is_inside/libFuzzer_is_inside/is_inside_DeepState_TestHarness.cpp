// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// is_inside_DeepState_TestHarness_generation.cpp and is_inside_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

bool is_inside(double sizehex, double positionx, double positiony, double sinval, double cosval);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector sizehex(1);
  sizehex[0]  = RcppDeepState_double();
  std::string sizehex_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rayshader/inst/testfiles/is_inside/libFuzzer_is_inside/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_sizehex.qs";
  qs::c_qsave(sizehex,sizehex_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sizehex values: "<< sizehex << std::endl;
  NumericVector positionx(1);
  positionx[0]  = RcppDeepState_double();
  std::string positionx_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rayshader/inst/testfiles/is_inside/libFuzzer_is_inside/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_positionx.qs";
  qs::c_qsave(positionx,positionx_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "positionx values: "<< positionx << std::endl;
  NumericVector positiony(1);
  positiony[0]  = RcppDeepState_double();
  std::string positiony_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rayshader/inst/testfiles/is_inside/libFuzzer_is_inside/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_positiony.qs";
  qs::c_qsave(positiony,positiony_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "positiony values: "<< positiony << std::endl;
  NumericVector sinval(1);
  sinval[0]  = RcppDeepState_double();
  std::string sinval_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rayshader/inst/testfiles/is_inside/libFuzzer_is_inside/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_sinval.qs";
  qs::c_qsave(sinval,sinval_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sinval values: "<< sinval << std::endl;
  NumericVector cosval(1);
  cosval[0]  = RcppDeepState_double();
  std::string cosval_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rayshader/inst/testfiles/is_inside/libFuzzer_is_inside/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_cosval.qs";
  qs::c_qsave(cosval,cosval_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cosval values: "<< cosval << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    is_inside(sizehex[0],positionx[0],positiony[0],sinval[0],cosval[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
