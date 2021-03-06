// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// NetPropsNoData_DeepState_TestHarness_generation.cpp and NetPropsNoData_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List NetPropsNoData(Rcpp::NumericMatrix net, Rcpp::CharacterVector moduleAssignments, Rcpp::CharacterVector modules);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix net  = RcppDeepState_NumericMatrix();
  qs::c_qsave(net,"/home/akhila/fuzzer_packages/fuzzedpackages/NetRep/inst/testfiles/NetPropsNoData/inputs/net.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "net values: "<< net << std::endl;
  CharacterVector moduleAssignments  = RcppDeepState_CharacterVector();
  qs::c_qsave(moduleAssignments,"/home/akhila/fuzzer_packages/fuzzedpackages/NetRep/inst/testfiles/NetPropsNoData/inputs/moduleAssignments.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "moduleAssignments values: "<< moduleAssignments << std::endl;
  CharacterVector modules  = RcppDeepState_CharacterVector();
  qs::c_qsave(modules,"/home/akhila/fuzzer_packages/fuzzedpackages/NetRep/inst/testfiles/NetPropsNoData/inputs/modules.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "modules values: "<< modules << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    NetPropsNoData(net,moduleAssignments,modules);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
