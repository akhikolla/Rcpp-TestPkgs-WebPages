// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// IntermediatePropertiesNoData_DeepState_TestHarness_generation.cpp and IntermediatePropertiesNoData_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List IntermediatePropertiesNoData(Rcpp::NumericMatrix dCorr, Rcpp::NumericMatrix dNet, Rcpp::CharacterVector tNodeNames, Rcpp::CharacterVector moduleAssignments, Rcpp::CharacterVector modules);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix dCorr  = RcppDeepState_NumericMatrix();
  qs::c_qsave(dCorr,"/home/akhila/fuzzer_packages/fuzzedpackages/NetRep/inst/testfiles/IntermediatePropertiesNoData/inputs/dCorr.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dCorr values: "<< dCorr << std::endl;
  NumericMatrix dNet  = RcppDeepState_NumericMatrix();
  qs::c_qsave(dNet,"/home/akhila/fuzzer_packages/fuzzedpackages/NetRep/inst/testfiles/IntermediatePropertiesNoData/inputs/dNet.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dNet values: "<< dNet << std::endl;
  CharacterVector tNodeNames  = RcppDeepState_CharacterVector();
  qs::c_qsave(tNodeNames,"/home/akhila/fuzzer_packages/fuzzedpackages/NetRep/inst/testfiles/IntermediatePropertiesNoData/inputs/tNodeNames.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tNodeNames values: "<< tNodeNames << std::endl;
  CharacterVector moduleAssignments  = RcppDeepState_CharacterVector();
  qs::c_qsave(moduleAssignments,"/home/akhila/fuzzer_packages/fuzzedpackages/NetRep/inst/testfiles/IntermediatePropertiesNoData/inputs/moduleAssignments.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "moduleAssignments values: "<< moduleAssignments << std::endl;
  CharacterVector modules  = RcppDeepState_CharacterVector();
  qs::c_qsave(modules,"/home/akhila/fuzzer_packages/fuzzedpackages/NetRep/inst/testfiles/IntermediatePropertiesNoData/inputs/modules.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "modules values: "<< modules << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    IntermediatePropertiesNoData(dCorr,dNet,tNodeNames,moduleAssignments,modules);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
