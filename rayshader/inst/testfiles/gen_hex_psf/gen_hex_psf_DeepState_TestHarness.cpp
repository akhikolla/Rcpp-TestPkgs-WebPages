// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// gen_hex_psf_DeepState_TestHarness_generation.cpp and gen_hex_psf_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat gen_hex_psf(const double radius, const double rotation);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector radius(1);
  radius[0]  = RcppDeepState_double();
  qs::c_qsave(radius,"/home/akhila/fuzzer_packages/fuzzedpackages/rayshader/inst/testfiles/gen_hex_psf/inputs/radius.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "radius values: "<< radius << std::endl;
  NumericVector rotation(1);
  rotation[0]  = RcppDeepState_double();
  qs::c_qsave(rotation,"/home/akhila/fuzzer_packages/fuzzedpackages/rayshader/inst/testfiles/gen_hex_psf/inputs/rotation.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "rotation values: "<< rotation << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    gen_hex_psf(radius[0],rotation[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
