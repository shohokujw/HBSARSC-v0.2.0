// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// get_mcmc_hbsarv10
Rcpp::List get_mcmc_hbsarv10(Rcpp::List& data_all, double xdelta, arma::colvec& xgrid, double xrange, arma::uvec& xinx, arma::vec& xover, arma::vec& nobs1, Rcpp::List& iptHB1, double xmin, arma::mat& ztz, arma::cube& vtv, arma::cube& wtw, arma::cube& phi2, arma::vec& cpara, Rcpp::List& probit_para, Rcpp::List& gamma_para, Rcpp::List& tau_para, Rcpp::List& eta_para, Rcpp::List& met_para, Rcpp::List& theta0_para, arma::vec& squish_para1, Rcpp::List& squish_para2, arma::vec& sigma_para, Rcpp::List& v_para, Rcpp::List& z_para, Rcpp::List& phi_para, Rcpp::List& fx_para, Rcpp::List& basis_para, arma::colvec& alpha, arma::mat& betall, arma::mat& phi, arma::mat& lambda, arma::mat& lambdai, arma::mat& thetall, arma::colvec& theta0, arma::colvec& xiparall, double xipar0, arma::colvec& gammall, arma::colvec& tau2all, arma::colvec& tauall, arma::colvec& sigma2, arma::colvec& sigma, bool bFlagHBsigma, bool bFlagpsi, bool bFlagCenter, bool bFlaglm, int iflagpn, int iflagsc, bool bFlagZ, bool disp);
RcppExport SEXP _HBSARSC_get_mcmc_hbsarv10(SEXP data_allSEXP, SEXP xdeltaSEXP, SEXP xgridSEXP, SEXP xrangeSEXP, SEXP xinxSEXP, SEXP xoverSEXP, SEXP nobs1SEXP, SEXP iptHB1SEXP, SEXP xminSEXP, SEXP ztzSEXP, SEXP vtvSEXP, SEXP wtwSEXP, SEXP phi2SEXP, SEXP cparaSEXP, SEXP probit_paraSEXP, SEXP gamma_paraSEXP, SEXP tau_paraSEXP, SEXP eta_paraSEXP, SEXP met_paraSEXP, SEXP theta0_paraSEXP, SEXP squish_para1SEXP, SEXP squish_para2SEXP, SEXP sigma_paraSEXP, SEXP v_paraSEXP, SEXP z_paraSEXP, SEXP phi_paraSEXP, SEXP fx_paraSEXP, SEXP basis_paraSEXP, SEXP alphaSEXP, SEXP betallSEXP, SEXP phiSEXP, SEXP lambdaSEXP, SEXP lambdaiSEXP, SEXP thetallSEXP, SEXP theta0SEXP, SEXP xiparallSEXP, SEXP xipar0SEXP, SEXP gammallSEXP, SEXP tau2allSEXP, SEXP tauallSEXP, SEXP sigma2SEXP, SEXP sigmaSEXP, SEXP bFlagHBsigmaSEXP, SEXP bFlagpsiSEXP, SEXP bFlagCenterSEXP, SEXP bFlaglmSEXP, SEXP iflagpnSEXP, SEXP iflagscSEXP, SEXP bFlagZSEXP, SEXP dispSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type data_all(data_allSEXP);
    Rcpp::traits::input_parameter< double >::type xdelta(xdeltaSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type xgrid(xgridSEXP);
    Rcpp::traits::input_parameter< double >::type xrange(xrangeSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type xinx(xinxSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type xover(xoverSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type nobs1(nobs1SEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type iptHB1(iptHB1SEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type ztz(ztzSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type vtv(vtvSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type wtw(wtwSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type phi2(phi2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type cpara(cparaSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type probit_para(probit_paraSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type gamma_para(gamma_paraSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type tau_para(tau_paraSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type eta_para(eta_paraSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type met_para(met_paraSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type theta0_para(theta0_paraSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type squish_para1(squish_para1SEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type squish_para2(squish_para2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type sigma_para(sigma_paraSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type v_para(v_paraSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type z_para(z_paraSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type phi_para(phi_paraSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type fx_para(fx_paraSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type basis_para(basis_paraSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type betall(betallSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type lambdai(lambdaiSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type thetall(thetallSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type xiparall(xiparallSEXP);
    Rcpp::traits::input_parameter< double >::type xipar0(xipar0SEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type gammall(gammallSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type tau2all(tau2allSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type tauall(tauallSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type bFlagHBsigma(bFlagHBsigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type bFlagpsi(bFlagpsiSEXP);
    Rcpp::traits::input_parameter< bool >::type bFlagCenter(bFlagCenterSEXP);
    Rcpp::traits::input_parameter< bool >::type bFlaglm(bFlaglmSEXP);
    Rcpp::traits::input_parameter< int >::type iflagpn(iflagpnSEXP);
    Rcpp::traits::input_parameter< int >::type iflagsc(iflagscSEXP);
    Rcpp::traits::input_parameter< bool >::type bFlagZ(bFlagZSEXP);
    Rcpp::traits::input_parameter< bool >::type disp(dispSEXP);
    rcpp_result_gen = Rcpp::wrap(get_mcmc_hbsarv10(data_all, xdelta, xgrid, xrange, xinx, xover, nobs1, iptHB1, xmin, ztz, vtv, wtw, phi2, cpara, probit_para, gamma_para, tau_para, eta_para, met_para, theta0_para, squish_para1, squish_para2, sigma_para, v_para, z_para, phi_para, fx_para, basis_para, alpha, betall, phi, lambda, lambdai, thetall, theta0, xiparall, xipar0, gammall, tau2all, tauall, sigma2, sigma, bFlagHBsigma, bFlagpsi, bFlagCenter, bFlaglm, iflagpn, iflagsc, bFlagZ, disp));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_CumTrap
arma::colvec rcpp_CumTrap(arma::colvec f, double delta);
RcppExport SEXP _HBSARSC_rcpp_CumTrap(SEXP fSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type f(fSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_CumTrap(f, delta));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_trapint
double rcpp_trapint(arma::colvec f, double xdelta);
RcppExport SEXP _HBSARSC_rcpp_trapint(SEXP fSEXP, SEXP xdeltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type f(fSEXP);
    Rcpp::traits::input_parameter< double >::type xdelta(xdeltaSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_trapint(f, xdelta));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetSquish
arma::colvec rcpp_GetSquish(double omega, double psi, arma::colvec xgrid);
RcppExport SEXP _HBSARSC_rcpp_GetSquish(SEXP omegaSEXP, SEXP psiSEXP, SEXP xgridSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type omega(omegaSEXP);
    Rcpp::traits::input_parameter< double >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type xgrid(xgridSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetSquish(omega, psi, xgrid));
    return rcpp_result_gen;
END_RCPP
}
// get_ex_idx
arma::uvec get_ex_idx(unsigned int len, arma::uvec idx);
RcppExport SEXP _HBSARSC_get_ex_idx(SEXP lenSEXP, SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type len(lenSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type idx(idxSEXP);
    rcpp_result_gen = Rcpp::wrap(get_ex_idx(len, idx));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_rndtna
double rcpp_rndtna(double mu, double sigma, double xtop);
RcppExport SEXP _HBSARSC_rcpp_rndtna(SEXP muSEXP, SEXP sigmaSEXP, SEXP xtopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type xtop(xtopSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_rndtna(mu, sigma, xtop));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_rndtnb
double rcpp_rndtnb(double mu, double sigma, double xbot);
RcppExport SEXP _HBSARSC_rcpp_rndtnb(SEXP muSEXP, SEXP sigmaSEXP, SEXP xbotSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type xbot(xbotSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_rndtnb(mu, sigma, xbot));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_rndtnb2
arma::colvec rcpp_rndtnb2(arma::colvec mu, double sigma, double xbot);
RcppExport SEXP _HBSARSC_rcpp_rndtnb2(SEXP muSEXP, SEXP sigmaSEXP, SEXP xbotSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type xbot(xbotSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_rndtnb2(mu, sigma, xbot));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_rndtnab
double rcpp_rndtnab(double mu, double sigma, double xbot, double xtop);
RcppExport SEXP _HBSARSC_rcpp_rndtnab(SEXP muSEXP, SEXP sigmaSEXP, SEXP xbotSEXP, SEXP xtopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type xbot(xbotSEXP);
    Rcpp::traits::input_parameter< double >::type xtop(xtopSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_rndtnab(mu, sigma, xbot, xtop));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_Getf0x
arma::colvec rcpp_Getf0x(Rcpp::List f0pars);
RcppExport SEXP _HBSARSC_rcpp_Getf0x(SEXP f0parsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type f0pars(f0parsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_Getf0x(f0pars));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_Getfx
arma::colvec rcpp_Getfx(Rcpp::List fpars);
RcppExport SEXP _HBSARSC_rcpp_Getfx(SEXP fparsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type fpars(fparsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_Getfx(fpars));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetMonofxgrid
arma::colvec rcpp_GetMonofxgrid(Rcpp::List fpars);
RcppExport SEXP _HBSARSC_rcpp_GetMonofxgrid(SEXP fparsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type fpars(fparsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetMonofxgrid(fpars));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetMonoSamefxgrid
arma::colvec rcpp_GetMonoSamefxgrid(Rcpp::List fpars);
RcppExport SEXP _HBSARSC_rcpp_GetMonoSamefxgrid(SEXP fparsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type fpars(fparsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetMonoSamefxgrid(fpars));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetMonoDiffxgrid
arma::colvec rcpp_GetMonoDiffxgrid(Rcpp::List fpars);
RcppExport SEXP _HBSARSC_rcpp_GetMonoDiffxgrid(SEXP fparsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type fpars(fparsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetMonoDiffxgrid(fpars));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetUfxgrid
arma::colvec rcpp_GetUfxgrid(Rcpp::List fpars);
RcppExport SEXP _HBSARSC_rcpp_GetUfxgrid(SEXP fparsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type fpars(fparsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetUfxgrid(fpars));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetSfxgrid
arma::colvec rcpp_GetSfxgrid(Rcpp::List fpars, int d3);
RcppExport SEXP _HBSARSC_rcpp_GetSfxgrid(SEXP fparsSEXP, SEXP d3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type fpars(fparsSEXP);
    Rcpp::traits::input_parameter< int >::type d3(d3SEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetSfxgrid(fpars, d3));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetMonof0xgrid
arma::colvec rcpp_GetMonof0xgrid(Rcpp::List f0pars);
RcppExport SEXP _HBSARSC_rcpp_GetMonof0xgrid(SEXP f0parsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type f0pars(f0parsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetMonof0xgrid(f0pars));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetMonoSamef0xgrid
arma::colvec rcpp_GetMonoSamef0xgrid(Rcpp::List f0pars);
RcppExport SEXP _HBSARSC_rcpp_GetMonoSamef0xgrid(SEXP f0parsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type f0pars(f0parsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetMonoSamef0xgrid(f0pars));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetMonoDiff0xgrid
arma::colvec rcpp_GetMonoDiff0xgrid(Rcpp::List f0pars);
RcppExport SEXP _HBSARSC_rcpp_GetMonoDiff0xgrid(SEXP f0parsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type f0pars(f0parsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetMonoDiff0xgrid(f0pars));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetUf0xgrid
arma::colvec rcpp_GetUf0xgrid(Rcpp::List f0pars);
RcppExport SEXP _HBSARSC_rcpp_GetUf0xgrid(SEXP f0parsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type f0pars(f0parsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetUf0xgrid(f0pars));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetSf0xgrid
arma::colvec rcpp_GetSf0xgrid(Rcpp::List f0pars, int d3);
RcppExport SEXP _HBSARSC_rcpp_GetSf0xgrid(SEXP f0parsSEXP, SEXP d3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type f0pars(f0parsSEXP);
    Rcpp::traits::input_parameter< int >::type d3(d3SEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetSf0xgrid(f0pars, d3));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetUpfxgrid
Rcpp::List rcpp_GetUpfxgrid(arma::colvec& fpara, arma::mat& phix, double xdelta, double xrange, bool centering);
RcppExport SEXP _HBSARSC_rcpp_GetUpfxgrid(SEXP fparaSEXP, SEXP phixSEXP, SEXP xdeltaSEXP, SEXP xrangeSEXP, SEXP centeringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type fpara(fparaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type phix(phixSEXP);
    Rcpp::traits::input_parameter< double >::type xdelta(xdeltaSEXP);
    Rcpp::traits::input_parameter< double >::type xrange(xrangeSEXP);
    Rcpp::traits::input_parameter< bool >::type centering(centeringSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetUpfxgrid(fpara, phix, xdelta, xrange, centering));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetSCfxobs
arma::colvec rcpp_GetSCfxobs(arma::colvec& xgrid, arma::uvec& xinx, arma::vec& xover, arma::colvec& fxgrid, int iflagpn);
RcppExport SEXP _HBSARSC_rcpp_GetSCfxobs(SEXP xgridSEXP, SEXP xinxSEXP, SEXP xoverSEXP, SEXP fxgridSEXP, SEXP iflagpnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type xgrid(xgridSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type xinx(xinxSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type xover(xoverSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type fxgrid(fxgridSEXP);
    Rcpp::traits::input_parameter< int >::type iflagpn(iflagpnSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetSCfxobs(xgrid, xinx, xover, fxgrid, iflagpn));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetUpf0xgrid
arma::colvec rcpp_GetUpf0xgrid(arma::colvec& fpara, arma::colvec& vpara, arma::mat& phix, arma::mat& phix2, double xdelta, double xrange, bool centering);
RcppExport SEXP _HBSARSC_rcpp_GetUpf0xgrid(SEXP fparaSEXP, SEXP vparaSEXP, SEXP phixSEXP, SEXP phix2SEXP, SEXP xdeltaSEXP, SEXP xrangeSEXP, SEXP centeringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type fpara(fparaSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type vpara(vparaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type phix(phixSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type phix2(phix2SEXP);
    Rcpp::traits::input_parameter< double >::type xdelta(xdeltaSEXP);
    Rcpp::traits::input_parameter< double >::type xrange(xrangeSEXP);
    Rcpp::traits::input_parameter< bool >::type centering(centeringSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetUpf0xgrid(fpara, vpara, phix, phix2, xdelta, xrange, centering));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetUpf0Biasxgrid
arma::colvec rcpp_GetUpf0Biasxgrid(arma::colvec& fpara, arma::mat& phix, double xdelta, double xrange, bool centering);
RcppExport SEXP _HBSARSC_rcpp_GetUpf0Biasxgrid(SEXP fparaSEXP, SEXP phixSEXP, SEXP xdeltaSEXP, SEXP xrangeSEXP, SEXP centeringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type fpara(fparaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type phix(phixSEXP);
    Rcpp::traits::input_parameter< double >::type xdelta(xdeltaSEXP);
    Rcpp::traits::input_parameter< double >::type xrange(xrangeSEXP);
    Rcpp::traits::input_parameter< bool >::type centering(centeringSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetUpf0Biasxgrid(fpara, phix, xdelta, xrange, centering));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_GetMonof
arma::colvec rcpp_GetMonof(arma::colvec& theta, arma::mat& phixobs, arma::umat& uquadfacts, arma::mat& quadfacts, int fpm);
RcppExport SEXP _HBSARSC_rcpp_GetMonof(SEXP thetaSEXP, SEXP phixobsSEXP, SEXP uquadfactsSEXP, SEXP quadfactsSEXP, SEXP fpmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type phixobs(phixobsSEXP);
    Rcpp::traits::input_parameter< arma::umat& >::type uquadfacts(uquadfactsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type quadfacts(quadfactsSEXP);
    Rcpp::traits::input_parameter< int >::type fpm(fpmSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_GetMonof(theta, phixobs, uquadfacts, quadfacts, fpm));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_QuadMult
arma::colvec rcpp_QuadMult(arma::colvec& x, arma::mat& qvech, arma::umat& uquadfacts, arma::mat& quadfacts);
RcppExport SEXP _HBSARSC_rcpp_QuadMult(SEXP xSEXP, SEXP qvechSEXP, SEXP uquadfactsSEXP, SEXP quadfactsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type qvech(qvechSEXP);
    Rcpp::traits::input_parameter< arma::umat& >::type uquadfacts(uquadfactsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type quadfacts(quadfactsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_QuadMult(x, qvech, uquadfacts, quadfacts));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_cholSol
arma::colvec rcpp_cholSol(arma::colvec& b, arma::mat& U);
RcppExport SEXP _HBSARSC_rcpp_cholSol(SEXP bSEXP, SEXP USEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type U(USEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_cholSol(b, U));
    return rcpp_result_gen;
END_RCPP
}
// IntCos2
arma::colvec IntCos2(double x, arma::colvec kall, double xmin, double xrange, int nbasis);
RcppExport SEXP _HBSARSC_IntCos2(SEXP xSEXP, SEXP kallSEXP, SEXP xminSEXP, SEXP xrangeSEXP, SEXP nbasisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type kall(kallSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xrange(xrangeSEXP);
    Rcpp::traits::input_parameter< int >::type nbasis(nbasisSEXP);
    rcpp_result_gen = Rcpp::wrap(IntCos2(x, kall, xmin, xrange, nbasis));
    return rcpp_result_gen;
END_RCPP
}
// IntCosCrossProd
double IntCosCrossProd(double x, int j, int k, double xmin, double xrange);
RcppExport SEXP _HBSARSC_IntCosCrossProd(SEXP xSEXP, SEXP jSEXP, SEXP kSEXP, SEXP xminSEXP, SEXP xrangeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xrange(xrangeSEXP);
    rcpp_result_gen = Rcpp::wrap(IntCosCrossProd(x, j, k, xmin, xrange));
    return rcpp_result_gen;
END_RCPP
}
// IntConst2
double IntConst2(double x, double xmin, double xrange);
RcppExport SEXP _HBSARSC_IntConst2(SEXP xSEXP, SEXP xminSEXP, SEXP xrangeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xrange(xrangeSEXP);
    rcpp_result_gen = Rcpp::wrap(IntConst2(x, xmin, xrange));
    return rcpp_result_gen;
END_RCPP
}
// IntCos
arma::colvec IntCos(double x, arma::colvec kall, double xmin, double xrange, int nbasis);
RcppExport SEXP _HBSARSC_IntCos(SEXP xSEXP, SEXP kallSEXP, SEXP xminSEXP, SEXP xrangeSEXP, SEXP nbasisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type kall(kallSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xrange(xrangeSEXP);
    Rcpp::traits::input_parameter< int >::type nbasis(nbasisSEXP);
    rcpp_result_gen = Rcpp::wrap(IntCos(x, kall, xmin, xrange, nbasis));
    return rcpp_result_gen;
END_RCPP
}
// vech
arma::colvec vech(arma::mat A);
RcppExport SEXP _HBSARSC_vech(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(vech(A));
    return rcpp_result_gen;
END_RCPP
}
// computeBasis
arma::mat computeBasis(arma::colvec xobs, double xmin, double xrange, unsigned int nobs, unsigned int nbasis, unsigned int nr);
RcppExport SEXP _HBSARSC_computeBasis(SEXP xobsSEXP, SEXP xminSEXP, SEXP xrangeSEXP, SEXP nobsSEXP, SEXP nbasisSEXP, SEXP nrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type xobs(xobsSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xrange(xrangeSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nobs(nobsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nbasis(nbasisSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nr(nrSEXP);
    rcpp_result_gen = Rcpp::wrap(computeBasis(xobs, xmin, xrange, nobs, nbasis, nr));
    return rcpp_result_gen;
END_RCPP
}
// update_lambda
void update_lambda(arma::mat& lambda, arma::mat& lambdai, arma::mat resid_mat, arma::mat lambda_g0i, double lambda_fn, unsigned int nparw);
RcppExport SEXP _HBSARSC_update_lambda(SEXP lambdaSEXP, SEXP lambdaiSEXP, SEXP resid_matSEXP, SEXP lambda_g0iSEXP, SEXP lambda_fnSEXP, SEXP nparwSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type lambdai(lambdaiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type resid_mat(resid_matSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lambda_g0i(lambda_g0iSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_fn(lambda_fnSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nparw(nparwSEXP);
    update_lambda(lambda, lambdai, resid_mat, lambda_g0i, lambda_fn, nparw);
    return R_NilValue;
END_RCPP
}
// update_phi
arma::mat update_phi(arma::mat lambdai, arma::mat ztz, arma::mat phi_v0i, arma::mat zdata, arma::mat betall, unsigned int nparw, unsigned int nparz, unsigned int phidim);
RcppExport SEXP _HBSARSC_update_phi(SEXP lambdaiSEXP, SEXP ztzSEXP, SEXP phi_v0iSEXP, SEXP zdataSEXP, SEXP betallSEXP, SEXP nparwSEXP, SEXP nparzSEXP, SEXP phidimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type lambdai(lambdaiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ztz(ztzSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type phi_v0i(phi_v0iSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type zdata(zdataSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type betall(betallSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nparw(nparwSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nparz(nparzSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type phidim(phidimSEXP);
    rcpp_result_gen = Rcpp::wrap(update_phi(lambdai, ztz, phi_v0i, zdata, betall, nparw, nparz, phidim));
    return rcpp_result_gen;
END_RCPP
}
// GetMetVec
arma::colvec GetMetVec(double w, double m0, double alpha, unsigned int ndim);
RcppExport SEXP _HBSARSC_GetMetVec(SEXP wSEXP, SEXP m0SEXP, SEXP alphaSEXP, SEXP ndimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type m0(m0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ndim(ndimSEXP);
    rcpp_result_gen = Rcpp::wrap(GetMetVec(w, m0, alpha, ndim));
    return rcpp_result_gen;
END_RCPP
}
// SetMetVec
void SetMetVec(arma::colvec& Met, double w, double m0, double alpha, unsigned int ndim);
RcppExport SEXP _HBSARSC_SetMetVec(SEXP MetSEXP, SEXP wSEXP, SEXP m0SEXP, SEXP alphaSEXP, SEXP ndimSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type Met(MetSEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type m0(m0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ndim(ndimSEXP);
    SetMetVec(Met, w, m0, alpha, ndim);
    return R_NilValue;
END_RCPP
}
// AdaptMetVar
arma::colvec AdaptMetVar(arma::colvec x);
RcppExport SEXP _HBSARSC_AdaptMetVar(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(AdaptMetVar(x));
    return rcpp_result_gen;
END_RCPP
}
// AdaptMetUpdate
void AdaptMetUpdate(arma::colvec& x);
RcppExport SEXP _HBSARSC_AdaptMetUpdate(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type x(xSEXP);
    AdaptMetUpdate(x);
    return R_NilValue;
END_RCPP
}
// AdaptMetUpdate2
arma::colvec AdaptMetUpdate2(arma::colvec x);
RcppExport SEXP _HBSARSC_AdaptMetUpdate2(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(AdaptMetUpdate2(x));
    return rcpp_result_gen;
END_RCPP
}
// UpdateMet
void UpdateMet(arma::colvec& x, unsigned int nb, double fct);
RcppExport SEXP _HBSARSC_UpdateMet(SEXP xSEXP, SEXP nbSEXP, SEXP fctSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nb(nbSEXP);
    Rcpp::traits::input_parameter< double >::type fct(fctSEXP);
    UpdateMet(x, nb, fct);
    return R_NilValue;
END_RCPP
}
// UpdateMet2
arma::colvec UpdateMet2(arma::colvec x, unsigned int nb, double fct);
RcppExport SEXP _HBSARSC_UpdateMet2(SEXP xSEXP, SEXP nbSEXP, SEXP fctSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nb(nbSEXP);
    Rcpp::traits::input_parameter< double >::type fct(fctSEXP);
    rcpp_result_gen = Rcpp::wrap(UpdateMet2(x, nb, fct));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_HBSARSC_get_mcmc_hbsarv10", (DL_FUNC) &_HBSARSC_get_mcmc_hbsarv10, 50},
    {"_HBSARSC_rcpp_CumTrap", (DL_FUNC) &_HBSARSC_rcpp_CumTrap, 2},
    {"_HBSARSC_rcpp_trapint", (DL_FUNC) &_HBSARSC_rcpp_trapint, 2},
    {"_HBSARSC_rcpp_GetSquish", (DL_FUNC) &_HBSARSC_rcpp_GetSquish, 3},
    {"_HBSARSC_get_ex_idx", (DL_FUNC) &_HBSARSC_get_ex_idx, 2},
    {"_HBSARSC_rcpp_rndtna", (DL_FUNC) &_HBSARSC_rcpp_rndtna, 3},
    {"_HBSARSC_rcpp_rndtnb", (DL_FUNC) &_HBSARSC_rcpp_rndtnb, 3},
    {"_HBSARSC_rcpp_rndtnb2", (DL_FUNC) &_HBSARSC_rcpp_rndtnb2, 3},
    {"_HBSARSC_rcpp_rndtnab", (DL_FUNC) &_HBSARSC_rcpp_rndtnab, 4},
    {"_HBSARSC_rcpp_Getf0x", (DL_FUNC) &_HBSARSC_rcpp_Getf0x, 1},
    {"_HBSARSC_rcpp_Getfx", (DL_FUNC) &_HBSARSC_rcpp_Getfx, 1},
    {"_HBSARSC_rcpp_GetMonofxgrid", (DL_FUNC) &_HBSARSC_rcpp_GetMonofxgrid, 1},
    {"_HBSARSC_rcpp_GetMonoSamefxgrid", (DL_FUNC) &_HBSARSC_rcpp_GetMonoSamefxgrid, 1},
    {"_HBSARSC_rcpp_GetMonoDiffxgrid", (DL_FUNC) &_HBSARSC_rcpp_GetMonoDiffxgrid, 1},
    {"_HBSARSC_rcpp_GetUfxgrid", (DL_FUNC) &_HBSARSC_rcpp_GetUfxgrid, 1},
    {"_HBSARSC_rcpp_GetSfxgrid", (DL_FUNC) &_HBSARSC_rcpp_GetSfxgrid, 2},
    {"_HBSARSC_rcpp_GetMonof0xgrid", (DL_FUNC) &_HBSARSC_rcpp_GetMonof0xgrid, 1},
    {"_HBSARSC_rcpp_GetMonoSamef0xgrid", (DL_FUNC) &_HBSARSC_rcpp_GetMonoSamef0xgrid, 1},
    {"_HBSARSC_rcpp_GetMonoDiff0xgrid", (DL_FUNC) &_HBSARSC_rcpp_GetMonoDiff0xgrid, 1},
    {"_HBSARSC_rcpp_GetUf0xgrid", (DL_FUNC) &_HBSARSC_rcpp_GetUf0xgrid, 1},
    {"_HBSARSC_rcpp_GetSf0xgrid", (DL_FUNC) &_HBSARSC_rcpp_GetSf0xgrid, 2},
    {"_HBSARSC_rcpp_GetUpfxgrid", (DL_FUNC) &_HBSARSC_rcpp_GetUpfxgrid, 5},
    {"_HBSARSC_rcpp_GetSCfxobs", (DL_FUNC) &_HBSARSC_rcpp_GetSCfxobs, 5},
    {"_HBSARSC_rcpp_GetUpf0xgrid", (DL_FUNC) &_HBSARSC_rcpp_GetUpf0xgrid, 7},
    {"_HBSARSC_rcpp_GetUpf0Biasxgrid", (DL_FUNC) &_HBSARSC_rcpp_GetUpf0Biasxgrid, 5},
    {"_HBSARSC_rcpp_GetMonof", (DL_FUNC) &_HBSARSC_rcpp_GetMonof, 5},
    {"_HBSARSC_rcpp_QuadMult", (DL_FUNC) &_HBSARSC_rcpp_QuadMult, 4},
    {"_HBSARSC_rcpp_cholSol", (DL_FUNC) &_HBSARSC_rcpp_cholSol, 2},
    {"_HBSARSC_IntCos2", (DL_FUNC) &_HBSARSC_IntCos2, 5},
    {"_HBSARSC_IntCosCrossProd", (DL_FUNC) &_HBSARSC_IntCosCrossProd, 5},
    {"_HBSARSC_IntConst2", (DL_FUNC) &_HBSARSC_IntConst2, 3},
    {"_HBSARSC_IntCos", (DL_FUNC) &_HBSARSC_IntCos, 5},
    {"_HBSARSC_vech", (DL_FUNC) &_HBSARSC_vech, 1},
    {"_HBSARSC_computeBasis", (DL_FUNC) &_HBSARSC_computeBasis, 6},
    {"_HBSARSC_update_lambda", (DL_FUNC) &_HBSARSC_update_lambda, 6},
    {"_HBSARSC_update_phi", (DL_FUNC) &_HBSARSC_update_phi, 8},
    {"_HBSARSC_GetMetVec", (DL_FUNC) &_HBSARSC_GetMetVec, 4},
    {"_HBSARSC_SetMetVec", (DL_FUNC) &_HBSARSC_SetMetVec, 5},
    {"_HBSARSC_AdaptMetVar", (DL_FUNC) &_HBSARSC_AdaptMetVar, 1},
    {"_HBSARSC_AdaptMetUpdate", (DL_FUNC) &_HBSARSC_AdaptMetUpdate, 1},
    {"_HBSARSC_AdaptMetUpdate2", (DL_FUNC) &_HBSARSC_AdaptMetUpdate2, 1},
    {"_HBSARSC_UpdateMet", (DL_FUNC) &_HBSARSC_UpdateMet, 3},
    {"_HBSARSC_UpdateMet2", (DL_FUNC) &_HBSARSC_UpdateMet2, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_HBSARSC(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
