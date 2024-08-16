/****************************************************************************\ 
 *** 
 *** File                  : fm_exit_ap.cpp
 *** 
 *** Generated by dSPACE Tools.
 *** (c) Copyright 2013, dSPACE GmbH. All rights reserved.
\****************************************************************************/

#if !defined(FM_EXIT_AP_CPP_)
#  define    FM_EXIT_AP_CPP_


/* -- Include directives. -- */
#  include "IOCode_Data.h"
#  include <DsApplicationInterface.h>
#  include "fm_exit_ap.h"

#  if defined(EXTERN_C_DECL)
#    undef EXTERN_C_DECL
#  endif
#  if defined(__cplusplus)
#    define EXTERN_C_DECL extern "C"
#  else
#    define EXTERN_C_DECL extern
#  endif


/* -- Variable declarations in module scope. -- */

/* Pragma to suppress GCC stack reuse which leads to problems with signal chain code */
#ifdef __GNUC__
#pragma GCC optimize "-fstack-reuse=none"
#endif

/* -- Definitions of exported functions. -- */

  void
ap_exit_Furuta_Model_SIDRoot_TID1(
    void) 
{
    furuta_model_fcnModule_SIDRoot_TID1->updateOutputs();

}

  void
ap_exit_Furuta_Model_SIDS7_TIDtriggered(
    void) 
{
    furuta_model_fcnModule_SIDS7_TIDtriggered->updateOutputs();

}

  void
ap_exit_Furuta_Model_SIDS8_TIDtriggered(
    void) 
{
    furuta_model_fcnModule_SIDS8_TIDtriggered->updateOutputs();

}

#endif                                 /* FM_EXIT_AP_CPP_ */
/* [EOF] */
