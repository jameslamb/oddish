// Register Dynamic Symbols
#ifndef ODDISH_R_H_
#define ODDISH_R_H_

    #include <Rinternals.h>
    
    #ifdef __cplusplus
      #define ODDISH_EXTERN_C extern "C"
        #include <cstdio>
        #include <cstdint>
    #else
      #define ODDISH_EXTERN_C
        #include <stdio.h>
        #include <stdint.h>
    #endif  // __cplusplus

    #if defined(_MSC_VER) || defined(_WIN32)
      #define ODDISH_DLL ODDISH_EXTERN_C __declspec(dllexport)
    #else
      #define ODDISH_DLL ODDISH_EXTERN_C
    #endif  // defined(_MSC_VER) || defined(_WIN32)

#endif // ODDISH_R_H_
