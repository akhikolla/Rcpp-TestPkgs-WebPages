// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// unislicemESCD_DeepState_TestHarness_generation.cpp and unislicemESCD_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector unislicemESCD(NumericVector x1, double lx, IntegerVector Lm, NumericVector mu0, NumericVector hpriorpar, double w, int m, NumericVector lo, NumericVector up, IntegerVector samind);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector x1  = RcppDeepState_NumericVector();
  std::string x1_t = "/home/akhila/fuzzer_packages/fuzzedpackages/microclustr/inst/testfiles/unislicemESCD/libFuzzer_unislicemESCD/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_x1.qs";
  qs::c_qsave(x1,x1_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x1 values: "<< x1 << std::endl;
  NumericVector lx(1);
  lx[0]  = RcppDeepState_double();
  std::string lx_t = "/home/akhila/fuzzer_packages/fuzzedpackages/microclustr/inst/testfiles/unislicemESCD/libFuzzer_unislicemESCD/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_lx.qs";
  qs::c_qsave(lx,lx_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lx values: "<< lx << std::endl;
  IntegerVector Lm  = RcppDeepState_IntegerVector();
  std::string Lm_t = "/home/akhila/fuzzer_packages/fuzzedpackages/microclustr/inst/testfiles/unislicemESCD/libFuzzer_unislicemESCD/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_Lm.qs";
  qs::c_qsave(Lm,Lm_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Lm values: "<< Lm << std::endl;
  NumericVector mu0  = RcppDeepState_NumericVector();
  std::string mu0_t = "/home/akhila/fuzzer_packages/fuzzedpackages/microclustr/inst/testfiles/unislicemESCD/libFuzzer_unislicemESCD/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_mu0.qs";
  std::string m_t = "/home/akhila/fuzzer_packages/fuzzedpackages/microclustr/inst/testfiles/unislicemESCD/libFuzzer_unislicemESCD/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_m.qs";
  qs::c_qsave(mu0,mu0_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "mu0 values: "<< mu0 << std::endl;
  NumericVector hpriorpar  = RcppDeepState_NumericVector();
  std::string hpriorpar_t = "/home/akhila/fuzzer_packages/fuzzedpackages/microclustr/inst/testfiles/unislicemESCD/libFuzzer_unislicemESCD/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_hpriorpar.qs";
  qs::c_qsave(hpriorpar,hpriorpar_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "hpriorpar values: "<< hpriorpar << std::endl;
  NumericVector w(1);
  w[0]  = RcppDeepState_double();
  std::string w_t = "/home/akhila/fuzzer_packages/fuzzedpackages/microclustr/inst/testfiles/unislicemESCD/libFuzzer_unislicemESCD/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_w.qs";
  qs::c_qsave(w,w_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "w values: "<< w << std::endl;
  IntegerVector m(1);
  m[0]  = RcppDeepState_int();
  std::string m_t = "/home/akhila/fuzzer_packages/fuzzedpackages/microclustr/inst/testfiles/unislicemESCD/libFuzzer_unislicemESCD/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_m.qs";
  qs::c_qsave(m,m_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "m values: "<< m << std::endl;
  NumericVector lo  = RcppDeepState_NumericVector();
  std::string lo_t = "/home/akhila/fuzzer_packages/fuzzedpackages/microclustr/inst/testfiles/unislicemESCD/libFuzzer_unislicemESCD/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_lo.qs";
  qs::c_qsave(lo,lo_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lo values: "<< lo << std::endl;
  NumericVector up  = RcppDeepState_NumericVector();
  std::string up_t = "/home/akhila/fuzzer_packages/fuzzedpackages/microclustr/inst/testfiles/unislicemESCD/libFuzzer_unislicemESCD/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_up.qs";
  qs::c_qsave(up,up_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "up values: "<< up << std::endl;
  IntegerVector samind  = RcppDeepState_IntegerVector();
  std::string samind_t = "/home/akhila/fuzzer_packages/fuzzedpackages/microclustr/inst/testfiles/unislicemESCD/libFuzzer_unislicemESCD/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_samind.qs";
  qs::c_qsave(samind,samind_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "samind values: "<< samind << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    unislicemESCD(x1,lx[0],Lm,mu0,hpriorpar,w[0],m[0],lo,up,samind);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
