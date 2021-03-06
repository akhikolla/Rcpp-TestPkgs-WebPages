// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// getDelta_DeepState_TestHarness_generation.cpp and getDelta_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List getDelta(const NumericMatrix& theta2, const NumericVector& deltaOld, const IntegerVector& cdid, const IntegerVector& cdindex, const NumericMatrix& Xrandom, const NumericVector& obsshare, const double& innerCrit, const int& innerMaxit, const int& printLevel, const NumericMatrix& indices, const NumericMatrix& nodesRcMktShape, const NumericMatrix& nodesDemMktShape, const NumericVector& weights);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix theta2  = RcppDeepState_NumericMatrix();
  qs::c_qsave(theta2,"/home/akhila/fuzzer_packages/fuzzedpackages/BLPestimatoR/inst/testfiles/getDelta/inputs/theta2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "theta2 values: "<< theta2 << std::endl;
  NumericVector deltaOld  = RcppDeepState_NumericVector();
  qs::c_qsave(deltaOld,"/home/akhila/fuzzer_packages/fuzzedpackages/BLPestimatoR/inst/testfiles/getDelta/inputs/deltaOld.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "deltaOld values: "<< deltaOld << std::endl;
  IntegerVector cdid  = RcppDeepState_IntegerVector();
  qs::c_qsave(cdid,"/home/akhila/fuzzer_packages/fuzzedpackages/BLPestimatoR/inst/testfiles/getDelta/inputs/cdid.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cdid values: "<< cdid << std::endl;
  IntegerVector cdindex  = RcppDeepState_IntegerVector();
  qs::c_qsave(cdindex,"/home/akhila/fuzzer_packages/fuzzedpackages/BLPestimatoR/inst/testfiles/getDelta/inputs/cdindex.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cdindex values: "<< cdindex << std::endl;
  NumericMatrix Xrandom  = RcppDeepState_NumericMatrix();
  qs::c_qsave(Xrandom,"/home/akhila/fuzzer_packages/fuzzedpackages/BLPestimatoR/inst/testfiles/getDelta/inputs/Xrandom.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Xrandom values: "<< Xrandom << std::endl;
  NumericVector obsshare  = RcppDeepState_NumericVector();
  qs::c_qsave(obsshare,"/home/akhila/fuzzer_packages/fuzzedpackages/BLPestimatoR/inst/testfiles/getDelta/inputs/obsshare.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "obsshare values: "<< obsshare << std::endl;
  NumericVector innerCrit(1);
  innerCrit[0]  = RcppDeepState_double();
  qs::c_qsave(innerCrit,"/home/akhila/fuzzer_packages/fuzzedpackages/BLPestimatoR/inst/testfiles/getDelta/inputs/innerCrit.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "innerCrit values: "<< innerCrit << std::endl;
  IntegerVector innerMaxit(1);
  innerMaxit[0]  = RcppDeepState_int();
  qs::c_qsave(innerMaxit,"/home/akhila/fuzzer_packages/fuzzedpackages/BLPestimatoR/inst/testfiles/getDelta/inputs/innerMaxit.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "innerMaxit values: "<< innerMaxit << std::endl;
  IntegerVector printLevel(1);
  printLevel[0]  = RcppDeepState_int();
  qs::c_qsave(printLevel,"/home/akhila/fuzzer_packages/fuzzedpackages/BLPestimatoR/inst/testfiles/getDelta/inputs/printLevel.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "printLevel values: "<< printLevel << std::endl;
  NumericMatrix indices  = RcppDeepState_NumericMatrix();
  qs::c_qsave(indices,"/home/akhila/fuzzer_packages/fuzzedpackages/BLPestimatoR/inst/testfiles/getDelta/inputs/indices.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "indices values: "<< indices << std::endl;
  NumericMatrix nodesRcMktShape  = RcppDeepState_NumericMatrix();
  qs::c_qsave(nodesRcMktShape,"/home/akhila/fuzzer_packages/fuzzedpackages/BLPestimatoR/inst/testfiles/getDelta/inputs/nodesRcMktShape.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nodesRcMktShape values: "<< nodesRcMktShape << std::endl;
  NumericMatrix nodesDemMktShape  = RcppDeepState_NumericMatrix();
  qs::c_qsave(nodesDemMktShape,"/home/akhila/fuzzer_packages/fuzzedpackages/BLPestimatoR/inst/testfiles/getDelta/inputs/nodesDemMktShape.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nodesDemMktShape values: "<< nodesDemMktShape << std::endl;
  NumericVector weights  = RcppDeepState_NumericVector();
  qs::c_qsave(weights,"/home/akhila/fuzzer_packages/fuzzedpackages/BLPestimatoR/inst/testfiles/getDelta/inputs/weights.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weights values: "<< weights << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    getDelta(theta2,deltaOld,cdid,cdindex,Xrandom,obsshare,innerCrit[0],innerMaxit[0],printLevel[0],indices,nodesRcMktShape,nodesDemMktShape,weights);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
