// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// k_mat_exp_DeepState_TestHarness_generation.cpp and k_mat_exp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::mat k_mat_exp(const arma::mat& coords, const double& h);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  std::ofstream coords_stream;
  arma::mat coords  = RcppDeepState_mat();
  coords_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/SpatialBSS/inst/testfiles/k_mat_exp/inputs/coords");
  coords_stream << coords;
  std::cout << "coords values: "<< coords << std::endl;
  coords_stream.close();
  NumericVector h(1);
  h[0]  = RcppDeepState_double();
  std::string h_t = "/home/akhila/fuzzer_packages/fuzzedpackages/SpatialBSS/inst/testfiles/k_mat_exp/libFuzzer_k_mat_exp/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_h.qs";
  qs::c_qsave(h,h_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "h values: "<< h << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    k_mat_exp(coords,h[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
