// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// update_offset_DeepState_TestHarness_generation.cpp and update_offset_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double update_offset(const NumericMatrix& offset_n_tk, const NumericMatrix& offset_m_tk, const NumericVector& theta, const NumericVector& normalized_const, const NumericVector& m_t, const double shape, const double rate);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix offset_n_tk  = RcppDeepState_NumericMatrix();
  qs::c_qsave(offset_n_tk,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_offset/inputs/offset_n_tk.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "offset_n_tk values: "<< offset_n_tk << std::endl;
  NumericMatrix offset_m_tk  = RcppDeepState_NumericMatrix();
  qs::c_qsave(offset_m_tk,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_offset/inputs/offset_m_tk.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "offset_m_tk values: "<< offset_m_tk << std::endl;
  NumericVector theta  = RcppDeepState_NumericVector();
  qs::c_qsave(theta,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_offset/inputs/theta.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "theta values: "<< theta << std::endl;
  NumericVector normalized_  = RcppDeepState_NumericVector();
  qs::c_qsave(normalized_const,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_offset/inputs/normalized_const.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "normalized_const values: "<< normalized_const << std::endl;
  NumericVector m_t  = RcppDeepState_NumericVector();
  qs::c_qsave(m_t,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_offset/inputs/m_t.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "m_t values: "<< m_t << std::endl;
  NumericVector shape(1);
  shape[0]  = RcppDeepState_double();
  qs::c_qsave(shape,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_offset/inputs/shape.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "shape values: "<< shape << std::endl;
  NumericVector rate(1);
  rate[0]  = RcppDeepState_double();
  qs::c_qsave(rate,"/home/akhila/fuzzer_packages/fuzzedpackages/PAFit/inst/testfiles/update_offset/inputs/rate.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "rate values: "<< rate << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    update_offset(offset_n_tk,offset_m_tk,theta,normalized_const,m_t,shape[0],rate[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
