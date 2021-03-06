// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// subsample_DeepState_TestHarness_generation.cpp and subsample_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat subsample(arma::mat& circle, int size);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  std::ofstream circle_stream;
  arma::mat circle  = RcppDeepState_mat();
  circle_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/rayshader/inst/testfiles/subsample/inputs/circle");
  circle_stream << circle;
  std::cout << "circle values: "<< circle << std::endl;
  circle_stream.close();
  IntegerVector size(1);
  size[0]  = RcppDeepState_int();
  qs::c_qsave(size,"/home/akhila/fuzzer_packages/fuzzedpackages/rayshader/inst/testfiles/subsample/inputs/size.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "size values: "<< size << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    subsample(circle,size[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
