#include <R.h>
#include <Rdefines.h>

void attack_absorb(const char *msg){
    Rprintf("%s\n", msg);
}

#include "./oddish_R.h"

ODDISH_DLL SEXP attack_R(SEXP msg){
    const char * s1 = CHAR(STRING_ELT(msg, 0));
    attack_absorb(s1);
    return R_NilValue;
}
