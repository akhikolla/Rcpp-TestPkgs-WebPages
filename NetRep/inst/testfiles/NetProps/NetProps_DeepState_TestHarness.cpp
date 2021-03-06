// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// NetProps_DeepState_TestHarness_generation.cpp and NetProps_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List NetProps(Rcpp::NumericMatrix data, Rcpp::NumericMatrix net, Rcpp::CharacterVector moduleAssignments, Rcpp::CharacterVector modules);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix data  = RcppDeepState_NumericMatrix();
  qs::c_qsave(data,"/home/akhila/fuzzer_packages/fuzzedpackages/NetRep/inst/testfiles/NetProps/inputs/data.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "data values: "<< data << std::endl;
  NumericMatrix net  = RcppDeepState_NumericMatrix();
  qs::c_qsave(net,"/home/akhila/fuzzer_packages/fuzzedpackages/NetRep/inst/testfiles/NetProps/inputs/net.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "net values: "<< net << std::endl;
  CharacterVector moduleAssignments  = RcppDeepState_CharacterVector();
  qs::c_qsave(moduleAssignments,"/home/akhila/fuzzer_packages/fuzzedpackages/NetRep/inst/testfiles/NetProps/inputs/moduleAssignments.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "moduleAssignments values: "<< moduleAssignments << std::endl;
  CharacterVector modules  = RcppDeepState_CharacterVector();
  qs::c_qsave(modules,"/home/akhila/fuzzer_packages/fuzzedpackages/NetRep/inst/testfiles/NetProps/inputs/modules.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "modules values: "<< modules << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    NetProps(data,net,moduleAssignments,modules);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
