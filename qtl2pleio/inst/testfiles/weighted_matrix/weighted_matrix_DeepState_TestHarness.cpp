// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// weighted_matrix_DeepState_TestHarness_generation.cpp and weighted_matrix_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix weighted_matrix(const NumericMatrix& mat, const NumericVector& weights);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix mat  = RcppDeepState_NumericMatrix();
  qs::c_qsave(mat,"/home/akhila/fuzzer_packages/fuzzedpackages/qtl2pleio/inst/testfiles/weighted_matrix/inputs/mat.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "mat values: "<< mat << std::endl;
  NumericVector weights  = RcppDeepState_NumericVector();
  qs::c_qsave(weights,"/home/akhila/fuzzer_packages/fuzzedpackages/qtl2pleio/inst/testfiles/weighted_matrix/inputs/weights.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weights values: "<< weights << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    weighted_matrix(mat,weights);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
