// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// discord_DeepState_TestHarness_generation.cpp and discord_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

int discord(const arma::mat& xytab);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  std::ofstream xytab_stream;
  arma::mat xytab  = RcppDeepState_mat();
  xytab_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/wCorr/inst/testfiles/discord/inputs/xytab");
  xytab_stream << xytab;
  std::cout << "xytab values: "<< xytab << std::endl;
  xytab_stream.close();
  std::cout << "input ends" << std::endl;
  try{
    discord(xytab);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
