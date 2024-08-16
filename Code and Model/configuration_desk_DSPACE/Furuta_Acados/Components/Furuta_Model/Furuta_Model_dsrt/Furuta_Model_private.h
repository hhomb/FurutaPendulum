/*
 * Furuta_Model_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Furuta_Model".
 *
 * Model version              : 1.160
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Wed Aug 14 16:13:35 2024
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Furuta_Model_private_h_
#define RTW_HEADER_Furuta_Model_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "Furuta_Model.h"
#include "Furuta_Model_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern real_T rt_powd_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern void acados_solver_sfunction_furuta(SimStruct *rts);
extern void Furuta_Mode_MATLABFunction_Init(DW_MATLABFunction_Furuta_Mode_T
  *localDW);
extern void Furuta_Mod_MATLABFunction_Reset(DW_MATLABFunction_Furuta_Mode_T
  *localDW);
extern void Furuta_Model_MATLABFunction(B_MATLABFunction_Furuta_Model_T *localB,
  DW_MATLABFunction_Furuta_Mode_T *localDW);
extern void Furuta_Model_omega_1_ctrl(real_T rtu_u,
  B_omega_1_ctrl_Furuta_Model_T *localB);
extern void Furuta_Model_Subsystem_Init(void);
extern void Furuta_Model_Subsystem_Reset(void);
extern void Furuta_Model_Subsystem(void);
extern void Furuta_Model_Acados_Init(void);
extern void Furuta_Model_Acados_Start(void);
extern void Furuta_Model_Acados_Disable(void);
extern void Furuta_Model_Acados(void);
extern void Furuta_Model_Acados_Term(void);

/* private model entry point functions */
extern void Furuta_Model_derivatives(void);

#endif                                 /* RTW_HEADER_Furuta_Model_private_h_ */
