// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// sample_path_unif_DeepState_TestHarness_generation.cpp and sample_path_unif_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat sample_path_unif(const int a, const int b, const double t0, const double t1, const arma::mat& Q);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  IntegerVector a(1);
  a[0]  = RcppDeepState_int();
  std::string a_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ECctmc/inst/testfiles/sample_path_unif/libFuzzer_sample_path_unif/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_a.qs";
  qs::c_qsave(a,a_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "a values: "<< a << std::endl;
  IntegerVector b(1);
  b[0]  = RcppDeepState_int();
  std::string b_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ECctmc/inst/testfiles/sample_path_unif/libFuzzer_sample_path_unif/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_b.qs";
  qs::c_qsave(b,b_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "b values: "<< b << std::endl;
  NumericVector t0(1);
  t0[0]  = RcppDeepState_double();
  std::string t0_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ECctmc/inst/testfiles/sample_path_unif/libFuzzer_sample_path_unif/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_t0.qs";
  qs::c_qsave(t0,t0_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "t0 values: "<< t0 << std::endl;
  NumericVector t1(1);
  t1[0]  = RcppDeepState_double();
  std::string t1_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ECctmc/inst/testfiles/sample_path_unif/libFuzzer_sample_path_unif/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_t1.qs";
  qs::c_qsave(t1,t1_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "t1 values: "<< t1 << std::endl;
  std::ofstream Q_stream;
  arma::mat Q  = RcppDeepState_mat();
  Q_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/ECctmc/inst/testfiles/sample_path_unif/inputs/Q");
  Q_stream << Q;
  std::cout << "Q values: "<< Q << std::endl;
  Q_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    sample_path_unif(a[0],b[0],t0[0],t1[0],Q);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
