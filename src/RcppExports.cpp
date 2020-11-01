// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// similarityCount
int similarityCount(NumericMatrix mat, double r);
RcppExport SEXP _MSMVSampEn_similarityCount(SEXP matSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(similarityCount(mat, r));
    return rcpp_result_gen;
END_RCPP
}
// vectorEmbed
NumericMatrix vectorEmbed(NumericMatrix mat, NumericVector M, NumericVector tau);
RcppExport SEXP _MSMVSampEn_vectorEmbed(SEXP matSEXP, SEXP MSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type M(MSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(vectorEmbed(mat, M, tau));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MSMVSampEn_similarityCount", (DL_FUNC) &_MSMVSampEn_similarityCount, 2},
    {"_MSMVSampEn_vectorEmbed", (DL_FUNC) &_MSMVSampEn_vectorEmbed, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_MSMVSampEn(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
