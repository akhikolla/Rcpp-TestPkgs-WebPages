// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// Ensemble_EN_Objective_DeepState_TestHarness_generation.cpp and Ensemble_EN_Objective_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double Ensemble_EN_Objective(const arma::mat& current_res, const arma::mat& beta, const double& lambda_sparsity, const double& lambda_diversity, const double& alpha);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  std::ofstream current_res_stream;
  arma::mat current_res  = RcppDeepState_mat();
  current_res_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/SplitReg/inst/testfiles/Ensemble_EN_Objective/inputs/current_res");
  current_res_stream << current_res;
  std::cout << "current_res values: "<< current_res << std::endl;
  current_res_stream.close();
  std::ofstream beta_stream;
  arma::mat beta  = RcppDeepState_mat();
  beta_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/SplitReg/inst/testfiles/Ensemble_EN_Objective/inputs/beta");
  beta_stream << beta;
  std::cout << "beta values: "<< beta << std::endl;
  beta_stream.close();
  NumericVector lambda_sparsity(1);
  lambda_sparsity[0]  = RcppDeepState_double();
  qs::c_qsave(lambda_sparsity,"/home/akhila/fuzzer_packages/fuzzedpackages/SplitReg/inst/testfiles/Ensemble_EN_Objective/inputs/lambda_sparsity.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lambda_sparsity values: "<< lambda_sparsity << std::endl;
  NumericVector lambda_diversity(1);
  lambda_diversity[0]  = RcppDeepState_double();
  qs::c_qsave(lambda_diversity,"/home/akhila/fuzzer_packages/fuzzedpackages/SplitReg/inst/testfiles/Ensemble_EN_Objective/inputs/lambda_diversity.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lambda_diversity values: "<< lambda_diversity << std::endl;
  NumericVector alpha(1);
  alpha[0]  = RcppDeepState_double();
  qs::c_qsave(alpha,"/home/akhila/fuzzer_packages/fuzzedpackages/SplitReg/inst/testfiles/Ensemble_EN_Objective/inputs/alpha.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "alpha values: "<< alpha << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    Ensemble_EN_Objective(current_res,beta,lambda_sparsity[0],lambda_diversity[0],alpha[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
