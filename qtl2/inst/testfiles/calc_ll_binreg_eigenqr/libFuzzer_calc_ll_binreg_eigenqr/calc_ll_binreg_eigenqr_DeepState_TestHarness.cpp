// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// calc_ll_binreg_eigenqr_DeepState_TestHarness_generation.cpp and calc_ll_binreg_eigenqr_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double calc_ll_binreg_eigenqr(const NumericMatrix& X, const NumericVector& y, const int maxit, const double tol, const double qr_tol, const double eta_max);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix X  = RcppDeepState_NumericMatrix();
  std::string X_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/calc_ll_binreg_eigenqr/libFuzzer_calc_ll_binreg_eigenqr/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_X.qs";
  qs::c_qsave(X,X_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "X values: "<< X << std::endl;
  NumericVector y  = RcppDeepState_NumericVector();
  std::string y_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/calc_ll_binreg_eigenqr/libFuzzer_calc_ll_binreg_eigenqr/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_y.qs";
  qs::c_qsave(y,y_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  IntegerVector maxit(1);
  maxit[0]  = RcppDeepState_int();
  std::string maxit_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/calc_ll_binreg_eigenqr/libFuzzer_calc_ll_binreg_eigenqr/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_maxit.qs";
  qs::c_qsave(maxit,maxit_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "maxit values: "<< maxit << std::endl;
  NumericVector tol(1);
  tol[0]  = RcppDeepState_double();
  std::string tol_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/calc_ll_binreg_eigenqr/libFuzzer_calc_ll_binreg_eigenqr/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_tol.qs";
  qs::c_qsave(tol,tol_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tol values: "<< tol << std::endl;
  NumericVector qr_tol(1);
  qr_tol[0]  = RcppDeepState_double();
  std::string qr_tol_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/calc_ll_binreg_eigenqr/libFuzzer_calc_ll_binreg_eigenqr/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_qr_tol.qs";
  qs::c_qsave(qr_tol,qr_tol_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "qr_tol values: "<< qr_tol << std::endl;
  NumericVector eta_max(1);
  eta_max[0]  = RcppDeepState_double();
  std::string eta_max_t = "/home/akhila/fuzzer_packages/fuzzedpackages/qtl2/inst/testfiles/calc_ll_binreg_eigenqr/libFuzzer_calc_ll_binreg_eigenqr/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_eta_max.qs";
  qs::c_qsave(eta_max,eta_max_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "eta_max values: "<< eta_max << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    calc_ll_binreg_eigenqr(X,y,maxit[0],tol[0],qr_tol[0],eta_max[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
