// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// jmc_main
Rcpp::List jmc_main(SEXP k, SEXP n1, SEXP p1, SEXP p2, SEXP maxl, SEXP p1a, SEXP maxiterations, SEXP point, SEXP xs, SEXP ws, SEXP yfile, SEXP cfile, SEXP mfile, SEXP trace);
RcppExport SEXP _JMcmprsk2_jmc_main(SEXP kSEXP, SEXP n1SEXP, SEXP p1SEXP, SEXP p2SEXP, SEXP maxlSEXP, SEXP p1aSEXP, SEXP maxiterationsSEXP, SEXP pointSEXP, SEXP xsSEXP, SEXP wsSEXP, SEXP yfileSEXP, SEXP cfileSEXP, SEXP mfileSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type k(kSEXP);
    Rcpp::traits::input_parameter< SEXP >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< SEXP >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< SEXP >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< SEXP >::type maxl(maxlSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p1a(p1aSEXP);
    Rcpp::traits::input_parameter< SEXP >::type maxiterations(maxiterationsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type point(pointSEXP);
    Rcpp::traits::input_parameter< SEXP >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yfile(yfileSEXP);
    Rcpp::traits::input_parameter< SEXP >::type cfile(cfileSEXP);
    Rcpp::traits::input_parameter< SEXP >::type mfile(mfileSEXP);
    Rcpp::traits::input_parameter< SEXP >::type trace(traceSEXP);
    rcpp_result_gen = Rcpp::wrap(jmc_main(k, n1, p1, p2, maxl, p1a, maxiterations, point, xs, ws, yfile, cfile, mfile, trace));
    return rcpp_result_gen;
END_RCPP
}
// jmo_main
Rcpp::List jmo_main(SEXP k, SEXP n1, SEXP p1, SEXP p2, SEXP p1a, SEXP bq, SEXP K_num, SEXP j_max, SEXP point, SEXP xs, SEXP ws, SEXP betas, SEXP thetas, SEXP maxiterations, SEXP yfile, SEXP cfile, SEXP mfile, SEXP trace);
RcppExport SEXP _JMcmprsk2_jmo_main(SEXP kSEXP, SEXP n1SEXP, SEXP p1SEXP, SEXP p2SEXP, SEXP p1aSEXP, SEXP bqSEXP, SEXP K_numSEXP, SEXP j_maxSEXP, SEXP pointSEXP, SEXP xsSEXP, SEXP wsSEXP, SEXP betasSEXP, SEXP thetasSEXP, SEXP maxiterationsSEXP, SEXP yfileSEXP, SEXP cfileSEXP, SEXP mfileSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type k(kSEXP);
    Rcpp::traits::input_parameter< SEXP >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< SEXP >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< SEXP >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< SEXP >::type p1a(p1aSEXP);
    Rcpp::traits::input_parameter< SEXP >::type bq(bqSEXP);
    Rcpp::traits::input_parameter< SEXP >::type K_num(K_numSEXP);
    Rcpp::traits::input_parameter< SEXP >::type j_max(j_maxSEXP);
    Rcpp::traits::input_parameter< SEXP >::type point(pointSEXP);
    Rcpp::traits::input_parameter< SEXP >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type betas(betasSEXP);
    Rcpp::traits::input_parameter< SEXP >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< SEXP >::type maxiterations(maxiterationsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type yfile(yfileSEXP);
    Rcpp::traits::input_parameter< SEXP >::type cfile(cfileSEXP);
    Rcpp::traits::input_parameter< SEXP >::type mfile(mfileSEXP);
    Rcpp::traits::input_parameter< SEXP >::type trace(traceSEXP);
    rcpp_result_gen = Rcpp::wrap(jmo_main(k, n1, p1, p2, p1a, bq, K_num, j_max, point, xs, ws, betas, thetas, maxiterations, yfile, cfile, mfile, trace));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_JMcmprsk2_jmc_main", (DL_FUNC) &_JMcmprsk2_jmc_main, 14},
    {"_JMcmprsk2_jmo_main", (DL_FUNC) &_JMcmprsk2_jmo_main, 18},
    {NULL, NULL, 0}
};

RcppExport void R_init_JMcmprsk2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}