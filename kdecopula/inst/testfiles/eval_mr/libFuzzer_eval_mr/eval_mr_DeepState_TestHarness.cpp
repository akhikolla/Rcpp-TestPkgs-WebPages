// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// eval_mr_DeepState_TestHarness_generation.cpp and eval_mr_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::vec eval_mr(const arma::mat& uev, const arma::mat& dat, const double& b);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  std::ofstream uev_stream;
  arma::mat uev  = RcppDeepState_mat();
  uev_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/kdecopula/inst/testfiles/eval_mr/inputs/uev");
  uev_stream << uev;
  std::cout << "uev values: "<< uev << std::endl;
  uev_stream.close();
  std::ofstream dat_stream;
  arma::mat dat  = RcppDeepState_mat();
  dat_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/kdecopula/inst/testfiles/eval_mr/inputs/dat");
  dat_stream << dat;
  std::cout << "dat values: "<< dat << std::endl;
  dat_stream.close();
  NumericVector b(1);
  b[0]  = RcppDeepState_double();
  std::string b_t = "/home/akhila/fuzzer_packages/fuzzedpackages/kdecopula/inst/testfiles/eval_mr/libFuzzer_eval_mr/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_b.qs";
  qs::c_qsave(b,b_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "b values: "<< b << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    eval_mr(uev,dat,b[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
