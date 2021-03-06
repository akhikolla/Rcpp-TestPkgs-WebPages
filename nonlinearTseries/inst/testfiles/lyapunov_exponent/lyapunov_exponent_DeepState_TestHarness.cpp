// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// lyapunov_exponent_DeepState_TestHarness_generation.cpp and lyapunov_exponent_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix lyapunov_exponent(const NumericVector& timeSeries, int minEmbeddingDim, int maxEmbeddingDim, int timeLag, double radius, int theilerWindow, int minNumNeighbours, int nRefPoints, int maxTimeSteps, int nBoxes);

TEST(,){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector timeSeries  = RcppDeepState_NumericVector();
  qs::c_qsave(timeSeries,"/home/akhila/fuzzer_packages/fuzzedpackages/nonlinearTseries/inst/testfiles/lyapunov_exponent/inputs/timeSeries.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "timeSeries values: "<< timeSeries << std::endl;
  IntegerVector minEmbeddingDim(1);
  minEmbeddingDim[0]  = RcppDeepState_int();
  qs::c_qsave(minEmbeddingDim,"/home/akhila/fuzzer_packages/fuzzedpackages/nonlinearTseries/inst/testfiles/lyapunov_exponent/inputs/minEmbeddingDim.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "minEmbeddingDim values: "<< minEmbeddingDim << std::endl;
  IntegerVector maxEmbeddingDim(1);
  maxEmbeddingDim[0]  = RcppDeepState_int();
  qs::c_qsave(maxEmbeddingDim,"/home/akhila/fuzzer_packages/fuzzedpackages/nonlinearTseries/inst/testfiles/lyapunov_exponent/inputs/maxEmbeddingDim.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "maxEmbeddingDim values: "<< maxEmbeddingDim << std::endl;
  IntegerVector timeLag(1);
  timeLag[0]  = RcppDeepState_int();
  qs::c_qsave(timeLag,"/home/akhila/fuzzer_packages/fuzzedpackages/nonlinearTseries/inst/testfiles/lyapunov_exponent/inputs/timeLag.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "timeLag values: "<< timeLag << std::endl;
  NumericVector radius(1);
  radius[0]  = RcppDeepState_double();
  qs::c_qsave(radius,"/home/akhila/fuzzer_packages/fuzzedpackages/nonlinearTseries/inst/testfiles/lyapunov_exponent/inputs/radius.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "radius values: "<< radius << std::endl;
  IntegerVector theilerWindow(1);
  theilerWindow[0]  = RcppDeepState_int();
  qs::c_qsave(theilerWindow,"/home/akhila/fuzzer_packages/fuzzedpackages/nonlinearTseries/inst/testfiles/lyapunov_exponent/inputs/theilerWindow.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "theilerWindow values: "<< theilerWindow << std::endl;
  IntegerVector minNumNeighbours(1);
  minNumNeighbours[0]  = RcppDeepState_int();
  qs::c_qsave(minNumNeighbours,"/home/akhila/fuzzer_packages/fuzzedpackages/nonlinearTseries/inst/testfiles/lyapunov_exponent/inputs/minNumNeighbours.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "minNumNeighbours values: "<< minNumNeighbours << std::endl;
  IntegerVector nRefPoints(1);
  nRefPoints[0]  = RcppDeepState_int();
  qs::c_qsave(nRefPoints,"/home/akhila/fuzzer_packages/fuzzedpackages/nonlinearTseries/inst/testfiles/lyapunov_exponent/inputs/nRefPoints.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nRefPoints values: "<< nRefPoints << std::endl;
  IntegerVector maxTimeSteps(1);
  maxTimeSteps[0]  = RcppDeepState_int();
  qs::c_qsave(maxTimeSteps,"/home/akhila/fuzzer_packages/fuzzedpackages/nonlinearTseries/inst/testfiles/lyapunov_exponent/inputs/maxTimeSteps.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "maxTimeSteps values: "<< maxTimeSteps << std::endl;
  IntegerVector nBoxes(1);
  nBoxes[0]  = RcppDeepState_int();
  qs::c_qsave(nBoxes,"/home/akhila/fuzzer_packages/fuzzedpackages/nonlinearTseries/inst/testfiles/lyapunov_exponent/inputs/nBoxes.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nBoxes values: "<< nBoxes << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    lyapunov_exponent(timeSeries,minEmbeddingDim[0],maxEmbeddingDim[0],timeLag[0],radius[0],theilerWindow[0],minNumNeighbours[0],nRefPoints[0],maxTimeSteps[0],nBoxes[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
