// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_row_quantile
NumericVector rcpp_row_quantile(NumericMatrix data, const double q);
RcppExport SEXP biwavelet_rcpp_row_quantile(SEXP dataSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const double >::type q(qSEXP);
    __result = Rcpp::wrap(rcpp_row_quantile(data, q));
    return __result;
END_RCPP
}
// rcpp_wt_bases_dog
List rcpp_wt_bases_dog(const NumericVector k, const double scale, const int param);
RcppExport SEXP biwavelet_rcpp_wt_bases_dog(SEXP kSEXP, SEXP scaleSEXP, SEXP paramSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< const double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< const int >::type param(paramSEXP);
    __result = Rcpp::wrap(rcpp_wt_bases_dog(k, scale, param));
    return __result;
END_RCPP
}
// rcpp_wt_bases_morlet
List rcpp_wt_bases_morlet(const NumericVector k, const double scale, const int param);
RcppExport SEXP biwavelet_rcpp_wt_bases_morlet(SEXP kSEXP, SEXP scaleSEXP, SEXP paramSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< const double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< const int >::type param(paramSEXP);
    __result = Rcpp::wrap(rcpp_wt_bases_morlet(k, scale, param));
    return __result;
END_RCPP
}
// rcpp_wt_bases_paul
List rcpp_wt_bases_paul(const NumericVector k, const double scale, const int param);
RcppExport SEXP biwavelet_rcpp_wt_bases_paul(SEXP kSEXP, SEXP scaleSEXP, SEXP paramSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< const double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< const int >::type param(paramSEXP);
    __result = Rcpp::wrap(rcpp_wt_bases_paul(k, scale, param));
    return __result;
END_RCPP
}
