// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// oneEMgammaCPP_DeepState_TestHarness_generation.cpp and oneEMgammaCPP_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List oneEMgammaCPP(const NumericVector& my_xs, const NumericVector& my_ws, const int g, const NumericVector& val);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector my_xs  = RcppDeepState_NumericVector();
  qs::c_qsave(my_xs,"/home/akhila/fuzzer_packages/fuzzedpackages/MHMM/inst/testfiles/oneEMgammaCPP/inputs/my_xs.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "my_xs values: "<< my_xs << std::endl;
  NumericVector my_ws  = RcppDeepState_NumericVector();
  qs::c_qsave(my_ws,"/home/akhila/fuzzer_packages/fuzzedpackages/MHMM/inst/testfiles/oneEMgammaCPP/inputs/my_ws.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "my_ws values: "<< my_ws << std::endl;
  IntegerVector g(1);
  g[0]  = RcppDeepState_int();
  qs::c_qsave(g,"/home/akhila/fuzzer_packages/fuzzedpackages/MHMM/inst/testfiles/oneEMgammaCPP/inputs/g.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "g values: "<< g << std::endl;
  NumericVector val  = RcppDeepState_NumericVector();
  qs::c_qsave(val,"/home/akhila/fuzzer_packages/fuzzedpackages/MHMM/inst/testfiles/oneEMgammaCPP/inputs/val.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "val values: "<< val << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    oneEMgammaCPP(my_xs,my_ws,g[0],val);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
