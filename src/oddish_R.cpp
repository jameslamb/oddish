/*
This file contains implementations for all the C/C++ functions
to be called by .Call() in R.

It's this file's responsibility
to be an intermediary between the underlying C++ code and the
SEXP API defined in R.h.
*/

#include "./oddish_R.h"

ODDISH_DLL SEXP _attack_R(SEXP msg){
    const char * s1 = CHAR(STRING_ELT(msg, 0));
    // attack_absorb(s1);
    Rprintf(s1);
}
