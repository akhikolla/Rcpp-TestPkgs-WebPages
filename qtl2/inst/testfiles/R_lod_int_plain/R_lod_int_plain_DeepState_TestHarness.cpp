// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// R_lod_int_plain_DeepState_TestHarness_generation.cpp and R_lod_int_plain_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerVector R_lod_int_plain(const NumericVector& lod, const double drop);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector lod  = RcppDeepState_NumericVector();
  qs::c_qsave(lod,"/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/R_lod_int_plain/inputs/lod.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lod values: "<< lod << std::endl;
  NumericVector drop(1);
  drop[0]  = RcppDeepState_double();
  qs::c_qsave(drop,"/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/R_lod_int_plain/inputs/drop.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "drop values: "<< drop << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    R_lod_int_plain(lod,drop[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
