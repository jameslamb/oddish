
// Register Dynamic Symbols

#include <R.h>
#include <Rinternals.h>
#include <stdlib.h>
#include <R_ext/Rdynload.h>
#include "R_init.h"

/* All the things called with .Call()*/
/* These are all defined in src/lightgbm_R.cpp */
extern SEXP attack_R(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"attack_R", (DL_FUNC) &attack_R, 1},
    {NULL, NULL, 0}
};

void R_init_oddish(DllInfo* info) {
    R_registerRoutines(info, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(info, TRUE);
};
