/***************************************************************************

   Source file Furuta_Model_dsrtvdf.c:

   Definition of function that initializes the global TRC pointers

   4.5 (02-May-2021)
   Wed Aug 14 16:13:35 2024

   Copyright 2024, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "Furuta_Model_dsrtvdf.h"
#include "Furuta_Model.h"
#include "Furuta_Model_private.h"

/* Compiler options to turn off optimization. */
#if !defined(DS_OPTIMIZE_INIT_TRC_POINTERS)
#ifdef _MCCPPC

#pragma options -nOt -nOr -nOi -nOx

#endif

#ifdef __GNUC__

#pragma GCC optimize ("O0")

#endif

#ifdef _MSC_VER

#pragma optimize ("", off)

#endif
#endif

/* Definition of Global pointers to data type transitions (for TRC-file access) */
volatile real_T *p_0_Furuta_Model_real_T_0 = NULL;
volatile real_T *p_0_Furuta_Model_real_T_1 = NULL;
volatile real_T *p_0_Furuta_Model_real_T_2 = NULL;
volatile real_T *p_0_Furuta_Model_real_T_3 = NULL;
volatile real_T *p_0_Furuta_Model_real_T_4 = NULL;
volatile real_T *p_0_Furuta_Model_real_T_5 = NULL;
volatile real_T *p_1_Furuta_Model_real_T_0 = NULL;
volatile real_T *p_2_Furuta_Model_real_T_0 = NULL;
volatile int32_T *p_2_Furuta_Model_int32_T_2 = NULL;
volatile int8_T *p_2_Furuta_Model_int8_T_3 = NULL;
volatile boolean_T *p_2_Furuta_Model_boolean_T_4 = NULL;
volatile real_T *p_2_Furuta_Model_real_T_5 = NULL;
volatile boolean_T *p_2_Furuta_Model_boolean_T_6 = NULL;
volatile real_T *p_2_Furuta_Model_real_T_7 = NULL;
volatile boolean_T *p_2_Furuta_Model_boolean_T_8 = NULL;
volatile real_T *p_3_Furuta_Model_real_T_0 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_Furuta_Model_real_T_0 = &Furuta_Model_B.Clock;
  p_0_Furuta_Model_real_T_1 = &Furuta_Model_B.sf_theta_1_ctrl.y;
  p_0_Furuta_Model_real_T_2 = &Furuta_Model_B.sf_omega_2_ctrl.y;
  p_0_Furuta_Model_real_T_3 = &Furuta_Model_B.sf_omega_1_ctrl.y;
  p_0_Furuta_Model_real_T_4 = &Furuta_Model_B.sf_MATLABFunction_a.y;
  p_0_Furuta_Model_real_T_5 = &Furuta_Model_B.sf_MATLABFunction_b.y;
  p_1_Furuta_Model_real_T_0 = &Furuta_Model_P.U_max;
  p_2_Furuta_Model_real_T_0 = &Furuta_Model_DW.x_tra_DSTATE[0];
  p_2_Furuta_Model_int32_T_2 = &Furuta_Model_DW.clockTickCounter;
  p_2_Furuta_Model_int8_T_3 = &Furuta_Model_DW.I_refAcados_ActiveBufIdx;
  p_2_Furuta_Model_boolean_T_4 = &Furuta_Model_DW.offset_not_empty;
  p_2_Furuta_Model_real_T_5 = &Furuta_Model_DW.sf_MATLABFunction_a.zahl;
  p_2_Furuta_Model_boolean_T_6 =
    &Furuta_Model_DW.sf_MATLABFunction_a.zahl_not_empty;
  p_2_Furuta_Model_real_T_7 = &Furuta_Model_DW.sf_MATLABFunction_b.zahl;
  p_2_Furuta_Model_boolean_T_8 =
    &Furuta_Model_DW.sf_MATLABFunction_b.zahl_not_empty;
  p_3_Furuta_Model_real_T_0 = &Furuta_Model_X.Integrator_CSTATE;
}

void Furuta_Model_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
