/****************************************************************************\ 
 *** 
 *** File                  : data_out_ap.h
 *** 
 *** Generated by dSPACE Tools.
 *** (c) Copyright 2013, dSPACE GmbH. All rights reserved.
\****************************************************************************/

#if !defined(DATA_OUT_AP_H_)
#  define    DATA_OUT_AP_H_


/* -- Include directives. -- */
#  include "DS_BusDef.h"

#  if defined(EXTERN_C_DECL)
#    undef EXTERN_C_DECL
#  endif
#  if defined(__cplusplus)
#    define EXTERN_C_DECL extern "C"
#  else
#    define EXTERN_C_DECL extern
#  endif


/* -- Declarations of exported functions. -- */

 EXTERN_C_DECL void ap_write_Furuta_Model_DataOutport1_P1_S1(
    Float64* x);

#endif                                 /* DATA_OUT_AP_H_ */
/* [EOF] */
