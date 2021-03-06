// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// interpolate_color_DeepState_TestHarness_generation.cpp and interpolate_color_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix interpolate_color(double color_nw, double color_ne, double color_se, double color_sw);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector color_nw(1);
  color_nw[0]  = RcppDeepState_double();
  qs::c_qsave(color_nw,"/home/akhila/fuzzer_packages/fuzzedpackages/rayshader/inst/testfiles/interpolate_color/inputs/color_nw.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "color_nw values: "<< color_nw << std::endl;
  NumericVector color_ne(1);
  color_ne[0]  = RcppDeepState_double();
  qs::c_qsave(color_ne,"/home/akhila/fuzzer_packages/fuzzedpackages/rayshader/inst/testfiles/interpolate_color/inputs/color_ne.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "color_ne values: "<< color_ne << std::endl;
  NumericVector color_se(1);
  color_se[0]  = RcppDeepState_double();
  qs::c_qsave(color_se,"/home/akhila/fuzzer_packages/fuzzedpackages/rayshader/inst/testfiles/interpolate_color/inputs/color_se.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "color_se values: "<< color_se << std::endl;
  NumericVector color_sw(1);
  color_sw[0]  = RcppDeepState_double();
  qs::c_qsave(color_sw,"/home/akhila/fuzzer_packages/fuzzedpackages/rayshader/inst/testfiles/interpolate_color/inputs/color_sw.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "color_sw values: "<< color_sw << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    interpolate_color(color_nw[0],color_ne[0],color_se[0],color_sw[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
