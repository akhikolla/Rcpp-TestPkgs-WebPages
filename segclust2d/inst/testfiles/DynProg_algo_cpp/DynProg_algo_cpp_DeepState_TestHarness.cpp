// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// DynProg_algo_cpp_DeepState_TestHarness_generation.cpp and DynProg_algo_cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List DynProg_algo_cpp(arma::mat matD, int Kmax);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  std::ofstream matD_stream;
  arma::mat matD  = RcppDeepState_mat();
  matD_stream.open("/home/akhila/fuzzer_packages/fuzzedpackages/segclust2d/inst/testfiles/DynProg_algo_cpp/inputs/matD");
  matD_stream << matD;
  std::cout << "matD values: "<< matD << std::endl;
  matD_stream.close();
  IntegerVector Kmax(1);
  Kmax[0]  = RcppDeepState_int();
  qs::c_qsave(Kmax,"/home/akhila/fuzzer_packages/fuzzedpackages/segclust2d/inst/testfiles/DynProg_algo_cpp/inputs/Kmax.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Kmax values: "<< Kmax << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    DynProg_algo_cpp(matD,Kmax[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
