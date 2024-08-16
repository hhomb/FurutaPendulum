/*********************** dSPACE target specific file *************************

   Header file Furuta_Model_dsrtvdf.h:

   Declaration of function that initializes the global TRC pointers

   4.5 (02-May-2021)
   Wed Aug 14 16:13:35 2024

   Copyright 2024, dSPACE GmbH. All rights reserved.

 *****************************************************************************/
#ifndef _DSRT_Furuta_Model_DSRTVDF_HEADER_
#define _DSRT_Furuta_Model_DSRTVDF_HEADER_

/* Include the model header file. */
#include "Furuta_Model.h"
#include "Furuta_Model_private.h"
#ifdef EXTERN_C
#undef EXTERN_C
#endif

#ifdef __cplusplus
#define EXTERN_C                       extern "C"
#else
#define EXTERN_C                       extern
#endif

/*
 *  Declare the global TRC pointers
 */
EXTERN_C volatile real_T *p_0_Furuta_Model_real_T_0;
EXTERN_C volatile real_T *p_0_Furuta_Model_real_T_1;
EXTERN_C volatile real_T *p_0_Furuta_Model_real_T_2;
EXTERN_C volatile real_T *p_0_Furuta_Model_real_T_3;
EXTERN_C volatile real_T *p_0_Furuta_Model_real_T_4;
EXTERN_C volatile real_T *p_0_Furuta_Model_real_T_5;
EXTERN_C volatile real_T *p_1_Furuta_Model_real_T_0;
EXTERN_C volatile real_T *p_2_Furuta_Model_real_T_0;
EXTERN_C volatile int32_T *p_2_Furuta_Model_int32_T_2;
EXTERN_C volatile int8_T *p_2_Furuta_Model_int8_T_3;
EXTERN_C volatile boolean_T *p_2_Furuta_Model_boolean_T_4;
EXTERN_C volatile real_T *p_2_Furuta_Model_real_T_5;
EXTERN_C volatile boolean_T *p_2_Furuta_Model_boolean_T_6;
EXTERN_C volatile real_T *p_2_Furuta_Model_real_T_7;
EXTERN_C volatile boolean_T *p_2_Furuta_Model_boolean_T_8;
EXTERN_C volatile real_T *p_3_Furuta_Model_real_T_0;

/*
 *  Declare the general function for TRC pointer initialization
 */
EXTERN_C void Furuta_Model_rti_init_trc_pointers(void);

#endif                                 /* _DSRT_Furuta_Model_DSRTVDF_HEADER_ */
