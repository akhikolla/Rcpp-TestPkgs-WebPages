// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// interp_genoprob_onechr_DeepState_TestHarness_generation.cpp and interp_genoprob_onechr_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector interp_genoprob_onechr(const NumericVector& genoprob, const NumericVector& map, const IntegerVector& pos_index);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector genoprob  = RcppDeepState_NumericVector();
  qs::c_qsave(genoprob,"/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/interp_genoprob_onechr/inputs/genoprob.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "genoprob values: "<< genoprob << std::endl;
  NumericVector map  = RcppDeepState_NumericVector();
  qs::c_qsave(map,"/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/interp_genoprob_onechr/inputs/map.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "map values: "<< map << std::endl;
  IntegerVector pos_index  = RcppDeepState_IntegerVector();
  qs::c_qsave(pos_index,"/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/interp_genoprob_onechr/inputs/pos_index.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "pos_index values: "<< pos_index << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    interp_genoprob_onechr(genoprob,map,pos_index);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
