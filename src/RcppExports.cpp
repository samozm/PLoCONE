// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// estimate_DEbeta
Rcpp::List estimate_DEbeta(const Eigen::MatrixXd& X, const Eigen::VectorXd& y, const Eigen::MatrixXd& Z, int n, int k, int t, int max_itr, std::string covtype, int idx, bool REML, double eigen_threshold);
RcppExport SEXP _PLoCONE_estimate_DEbeta(SEXP XSEXP, SEXP ySEXP, SEXP ZSEXP, SEXP nSEXP, SEXP kSEXP, SEXP tSEXP, SEXP max_itrSEXP, SEXP covtypeSEXP, SEXP idxSEXP, SEXP REMLSEXP, SEXP eigen_thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type max_itr(max_itrSEXP);
    Rcpp::traits::input_parameter< std::string >::type covtype(covtypeSEXP);
    Rcpp::traits::input_parameter< int >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< bool >::type REML(REMLSEXP);
    Rcpp::traits::input_parameter< double >::type eigen_threshold(eigen_thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_DEbeta(X, y, Z, n, k, t, max_itr, covtype, idx, REML, eigen_threshold));
    return rcpp_result_gen;
END_RCPP
}
// rcppeigen_hello_world
Eigen::MatrixXd rcppeigen_hello_world();
RcppExport SEXP _PLoCONE_rcppeigen_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcppeigen_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// rcppeigen_outerproduct
Eigen::MatrixXd rcppeigen_outerproduct(const Eigen::VectorXd& x);
RcppExport SEXP _PLoCONE_rcppeigen_outerproduct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppeigen_outerproduct(x));
    return rcpp_result_gen;
END_RCPP
}
// rcppeigen_innerproduct
double rcppeigen_innerproduct(const Eigen::VectorXd& x);
RcppExport SEXP _PLoCONE_rcppeigen_innerproduct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppeigen_innerproduct(x));
    return rcpp_result_gen;
END_RCPP
}
// rcppeigen_bothproducts
Rcpp::List rcppeigen_bothproducts(const Eigen::VectorXd& x);
RcppExport SEXP _PLoCONE_rcppeigen_bothproducts(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppeigen_bothproducts(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_PLoCONE_estimate_DEbeta", (DL_FUNC) &_PLoCONE_estimate_DEbeta, 11},
    {"_PLoCONE_rcppeigen_hello_world", (DL_FUNC) &_PLoCONE_rcppeigen_hello_world, 0},
    {"_PLoCONE_rcppeigen_outerproduct", (DL_FUNC) &_PLoCONE_rcppeigen_outerproduct, 1},
    {"_PLoCONE_rcppeigen_innerproduct", (DL_FUNC) &_PLoCONE_rcppeigen_innerproduct, 1},
    {"_PLoCONE_rcppeigen_bothproducts", (DL_FUNC) &_PLoCONE_rcppeigen_bothproducts, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_PLoCONE(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
