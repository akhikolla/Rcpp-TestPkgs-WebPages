// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// matrix_x_3darray_DeepState_TestHarness_generation.cpp and matrix_x_3darray_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector matrix_x_3darray(const NumericMatrix& X, NumericVector& A);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix X  = RcppDeepState_NumericMatrix();
  qs::c_qsave(X,"/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/matrix_x_3darray/inputs/X.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "X values: "<< X << std::endl;
  NumericVector A  = RcppDeepState_NumericVector();
  qs::c_qsave(A,"/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/matrix_x_3darray/inputs/A.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "A values: "<< A << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    matrix_x_3darray(X,A);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
