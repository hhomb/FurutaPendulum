/*
 * Furuta_Model.c
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

#include "Furuta_Model_dsrtvdf.h"
#include "Furuta_Model.h"
#include "rtwtypes.h"
#include "Furuta_Model_private.h"
#include <string.h>
#include <math.h>
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"

/* Block signals (default storage) */
B_Furuta_Model_T Furuta_Model_B;

/* Continuous states */
X_Furuta_Model_T Furuta_Model_X;

/* Block states (default storage) */
DW_Furuta_Model_T Furuta_Model_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_Furuta_Model_T Furuta_Model_PrevZCX;

/* Real-time model */
static RT_MODEL_Furuta_Model_T Furuta_Model_M_;
RT_MODEL_Furuta_Model_T *const Furuta_Model_M = &Furuta_Model_M_;
static void rate_scheduler(void);

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Furuta_Model_M->Timing.TaskCounters.TID[2])++;
  if ((Furuta_Model_M->Timing.TaskCounters.TID[2]) > 24) {/* Sample time: [0.0025s, 0.0s] */
    Furuta_Model_M->Timing.TaskCounters.TID[2] = 0;
  }

  Furuta_Model_M->Timing.sampleHits[2] =
    (Furuta_Model_M->Timing.TaskCounters.TID[2] == 0) ? 1 : 0;
}

/*
 * This function updates continuous states using the ODE4 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE4_IntgData *id = (ODE4_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T *f3 = id->f[3];
  real_T temp;
  int_T i;
  int_T nXc = 3;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  Furuta_Model_derivatives();

  /* f1 = f(t + (h/2), y + (h/2)*f0) */
  temp = 0.5 * h;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f0[i]);
  }

  rtsiSetT(si, t + temp);
  rtsiSetdX(si, f1);
  Furuta_Model_output();
  Furuta_Model_derivatives();

  /* f2 = f(t + (h/2), y + (h/2)*f1) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f1[i]);
  }

  rtsiSetdX(si, f2);
  Furuta_Model_output();
  Furuta_Model_derivatives();

  /* f3 = f(t + h, y + h*f2) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (h*f2[i]);
  }

  rtsiSetT(si, tnew);
  rtsiSetdX(si, f3);
  Furuta_Model_output();
  Furuta_Model_derivatives();

  /* tnew = t + h
     ynew = y + (h/6)*(f0 + 2*f1 + 2*f2 + 2*f3) */
  temp = h / 6.0;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + temp*(f0[i] + 2.0*f1[i] + 2.0*f2[i] + f3[i]);
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * System initialize for atomic system:
 *    '<S13>/MATLAB Function'
 *    '<S23>/MATLAB Function'
 */
void Furuta_Mode_MATLABFunction_Init(DW_MATLABFunction_Furuta_Mode_T *localDW)
{
  localDW->zahl_not_empty = false;
}

/*
 * System reset for atomic system:
 *    '<S13>/MATLAB Function'
 *    '<S23>/MATLAB Function'
 */
void Furuta_Mod_MATLABFunction_Reset(DW_MATLABFunction_Furuta_Mode_T *localDW)
{
  localDW->zahl_not_empty = false;
}

/*
 * Output and update for atomic system:
 *    '<S13>/MATLAB Function'
 *    '<S23>/MATLAB Function'
 */
void Furuta_Model_MATLABFunction(B_MATLABFunction_Furuta_Model_T *localB,
  DW_MATLABFunction_Furuta_Mode_T *localDW)
{
  if (!localDW->zahl_not_empty) {
    localDW->zahl = 0.0;
    localDW->zahl_not_empty = true;
  } else {
    localDW->zahl++;
  }

  localB->y = localDW->zahl;
}

/* System initialize for function-call system: '<Root>/Subsystem' */
void Furuta_Model_Subsystem_Init(void)
{
  /* SystemInitialize for MATLAB Function: '<S13>/MATLAB Function' */
  Furuta_Mode_MATLABFunction_Init(&Furuta_Model_DW.sf_MATLABFunction_b);

  /* SystemInitialize for Outport: '<S13>/y' */
  Furuta_Model_B.sf_MATLABFunction_b.y = Furuta_Model_P.y_Y0;
}

/* System reset for function-call system: '<Root>/Subsystem' */
void Furuta_Model_Subsystem_Reset(void)
{
  /* SystemReset for MATLAB Function: '<S13>/MATLAB Function' */
  Furuta_Mod_MATLABFunction_Reset(&Furuta_Model_DW.sf_MATLABFunction_b);
}

/* Output and update for function-call system: '<Root>/Subsystem' */
void Furuta_Model_Subsystem(void)
{
  /* MATLAB Function: '<S13>/MATLAB Function' */
  Furuta_Model_MATLABFunction(&Furuta_Model_B.sf_MATLABFunction_b,
    &Furuta_Model_DW.sf_MATLABFunction_b);
}

/* System initialize for function-call system: '<Root>/Acados' */
void Furuta_Model_Acados_Init(void)
{
  int32_T i;

  /* SystemInitialize for Enabled SubSystem: '<S1>/Solver' */
  /* InitializeConditions for Delay: '<S23>/x_tra' */
  memcpy(&Furuta_Model_DW.x_tra_DSTATE[0], &Furuta_Model_P.x_guess[0], 44U *
         sizeof(real_T));

  /* InitializeConditions for Delay: '<S23>/u_tra' */
  memcpy(&Furuta_Model_DW.u_tra_DSTATE[0], &Furuta_Model_P.u_guess[0], 10U *
         sizeof(real_T));

  /* SystemInitialize for MATLAB Function: '<S23>/MATLAB Function' */
  Furuta_Mode_MATLABFunction_Init(&Furuta_Model_DW.sf_MATLABFunction_a);

  /* SystemInitialize for SignalConversion generated from: '<S23>/u' incorporates:
   *  Outport: '<S23>/u'
   */
  Furuta_Model_B.OutportBufferForu = Furuta_Model_P.u_Y0;

  /* SystemInitialize for Outport: '<S23>/Measure' */
  Furuta_Model_B.control_out = Furuta_Model_P.Measure_Y0;

  /* SystemInitialize for S-Function (acados_solver_sfunction_furuta): '<S23>/S-Function1' incorporates:
   *  Outport: '<S23>/Measure'
   */
  Furuta_Model_B.SFunction1_o4 = Furuta_Model_P.Measure_Y0;

  /* SystemInitialize for S-Function (acados_solver_sfunction_furuta): '<S23>/S-Function1' incorporates:
   *  Outport: '<S23>/Measure'
   */
  Furuta_Model_B.SFunction1_o7 = Furuta_Model_P.Measure_Y0;

  /* SystemInitialize for S-Function (acados_solver_sfunction_furuta): '<S23>/S-Function1' incorporates:
   *  Outport: '<S23>/Measure'
   */
  Furuta_Model_B.SFunction1_o5 = Furuta_Model_P.Measure_Y0;

  /* SystemInitialize for S-Function (acados_solver_sfunction_furuta): '<S23>/S-Function1' incorporates:
   *  Outport: '<S23>/Measure'
   */
  Furuta_Model_B.SFunction1_o8 = Furuta_Model_P.Measure_Y0;
  for (i = 0; i < 10; i++) {
    /* SystemInitialize for S-Function (acados_solver_sfunction_furuta): '<S23>/S-Function1' incorporates:
     *  Outport: '<S23>/Measure'
     */
    Furuta_Model_B.SFunction1_o2[i] = Furuta_Model_P.Measure_Y0;
  }

  for (i = 0; i < 44; i++) {
    /* SystemInitialize for S-Function (acados_solver_sfunction_furuta): '<S23>/S-Function1' incorporates:
     *  Outport: '<S23>/Measure'
     */
    Furuta_Model_B.SFunction1_o3[i] = Furuta_Model_P.Measure_Y0;
  }

  /* SystemInitialize for Outport: '<S23>/Counter' */
  Furuta_Model_B.sf_MATLABFunction_a.y = Furuta_Model_P.Counter_Y0;

  /* End of SystemInitialize for SubSystem: '<S1>/Solver' */

  /* SystemInitialize for Gain: '<S1>/Gain' incorporates:
   *  Outport: '<S1>/I_ref[A]'
   */
  Furuta_Model_B.Gain_h = Furuta_Model_P.I_refA_Y0;

  /* SystemInitialize for SignalConversion generated from: '<S1>/Counter' incorporates:
   *  Outport: '<S1>/Counter'
   */
  Furuta_Model_B.OutportBufferForCounter = Furuta_Model_P.Counter_Y0_k;
  for (i = 0; i < 59; i++) {
    /* SystemInitialize for SignalConversion generated from: '<S1>/Measure' incorporates:
     *  Outport: '<S1>/Measure'
     */
    Furuta_Model_B.OutportBufferForMeasure[i] = Furuta_Model_P.Measure_Y0_n;
  }

  /* SystemInitialize for SignalConversion generated from: '<S1>/acados_on' incorporates:
   *  Outport: '<S1>/acados_on'
   */
  Furuta_Model_B.OutportBufferForacados_on = Furuta_Model_P.acados_on_Y0;
}

/* Disable for function-call system: '<Root>/Acados' */
void Furuta_Model_Acados_Disable(void)
{
  int32_T i;

  /* Disable for Enabled SubSystem: '<S1>/Solver' */
  Furuta_Model_DW.Solver_MODE = false;

  /* End of Disable for SubSystem: '<S1>/Solver' */

  /* Disable for Gain: '<S1>/Gain' incorporates:
   *  Outport: '<S1>/I_ref[A]'
   */
  Furuta_Model_B.Gain_h = Furuta_Model_P.I_refA_Y0;

  /* Disable for SignalConversion generated from: '<S1>/Counter' incorporates:
   *  Outport: '<S1>/Counter'
   */
  Furuta_Model_B.OutportBufferForCounter = Furuta_Model_P.Counter_Y0_k;
  for (i = 0; i < 59; i++) {
    /* Disable for SignalConversion generated from: '<S1>/Measure' incorporates:
     *  Outport: '<S1>/Measure'
     */
    Furuta_Model_B.OutportBufferForMeasure[i] = Furuta_Model_P.Measure_Y0_n;
  }

  /* Disable for SignalConversion generated from: '<S1>/acados_on' incorporates:
   *  Outport: '<S1>/acados_on'
   */
  Furuta_Model_B.OutportBufferForacados_on = Furuta_Model_P.acados_on_Y0;
}

/* Start for function-call system: '<Root>/Acados' */
void Furuta_Model_Acados_Start(void)
{
  real_T b[10];
  real_T a;
  real_T b_0;
  int32_T i;

  /* Start for Enabled SubSystem: '<S1>/Solver' */
  Furuta_Model_DW.Solver_MODE = false;

  /* Start for Constant: '<S23>/lbu' */
  a = -Furuta_Model_P.U_max;
  for (i = 0; i < 10; i++) {
    b_0 = Furuta_Model_ConstP.pooled1[i];
    b_0 *= a;
    b[i] = b_0;
  }

  /* Start for Constant: '<S23>/lbu' */
  memcpy(&Furuta_Model_B.lbu[0], &b[0], 10U * sizeof(real_T));

  /* Start for Constant: '<S23>/ubu' */
  a = Furuta_Model_P.U_max;
  for (i = 0; i < 10; i++) {
    b_0 = Furuta_Model_ConstP.pooled1[i];
    b_0 *= a;
    b[i] = b_0;
  }

  /* Start for Constant: '<S23>/ubu' */
  memcpy(&Furuta_Model_B.ubu[0], &b[0], 10U * sizeof(real_T));

  /* Start for Constant: '<S23>/reset_acados' */
  Furuta_Model_B.reset_acados = Furuta_Model_P.reset_acados_Value;

  /* Start for S-Function (acados_solver_sfunction_furuta): '<S23>/S-Function1' */
  /* Level2 S-Function Block: '<S23>/S-Function1' (acados_solver_sfunction_furuta) */
  {
    SimStruct *rts = Furuta_Model_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S1>/Solver' */
}

/* Output and update for function-call system: '<Root>/Acados' */
void Furuta_Model_Acados(void)
{
  real_T b[10];
  real_T a;
  real_T b_0;
  real_T u2;
  int32_T i;

  /* Outputs for Enabled SubSystem: '<S1>/Solver' incorporates:
   *  EnablePort: '<S23>/Enable'
   */
  /* Constant: '<S1>/acados on' */
  if (Furuta_Model_P.acadoson_Value > 0.0) {
    Furuta_Model_DW.Solver_MODE = true;

    /* Constant: '<S23>/lbu' */
    a = -Furuta_Model_P.U_max;
    for (i = 0; i < 10; i++) {
      b_0 = Furuta_Model_ConstP.pooled1[i];
      b_0 *= a;
      b[i] = b_0;
    }

    /* Constant: '<S23>/lbu' */
    memcpy(&Furuta_Model_B.lbu[0], &b[0], 10U * sizeof(real_T));

    /* Constant: '<S23>/ubu' */
    a = Furuta_Model_P.U_max;
    for (i = 0; i < 10; i++) {
      b_0 = Furuta_Model_ConstP.pooled1[i];
      b_0 *= a;
      b[i] = b_0;
    }

    /* Constant: '<S23>/ubu' */
    memcpy(&Furuta_Model_B.ubu[0], &b[0], 10U * sizeof(real_T));

    /* Constant: '<S23>/reset_acados' */
    Furuta_Model_B.reset_acados = Furuta_Model_P.reset_acados_Value;

    /* Delay: '<S23>/x_tra' */
    memcpy(&Furuta_Model_B.x_tra[0], &Furuta_Model_DW.x_tra_DSTATE[0], 44U *
           sizeof(real_T));
    for (i = 0; i < 44; i++) {
      /* Gain: '<S23>/Gain1' */
      Furuta_Model_B.Gain1_l[i] = Furuta_Model_P.Gain1_Gain *
        Furuta_Model_B.x_tra[i];
    }

    /* Delay: '<S23>/u_tra' */
    memcpy(&Furuta_Model_B.u_tra[0], &Furuta_Model_DW.u_tra_DSTATE[0], 10U *
           sizeof(real_T));
    for (i = 0; i < 10; i++) {
      /* Gain: '<S23>/Gain' */
      Furuta_Model_B.Gain_m[i] = Furuta_Model_P.Gain_Gain *
        Furuta_Model_B.u_tra[i];
    }

    /* MATLAB Function: '<S23>/MATLAB Function' */
    Furuta_Model_MATLABFunction(&Furuta_Model_B.sf_MATLABFunction_a,
      &Furuta_Model_DW.sf_MATLABFunction_a);

    /* MATLAB Function: '<S23>/Modulo' */
    Furuta_Model_B.y_h = 0.0;

    /* S-Function (acados_solver_sfunction_furuta): '<S23>/S-Function1' */

    /* Level2 S-Function Block: '<S23>/S-Function1' (acados_solver_sfunction_furuta) */
    {
      SimStruct *rts = Furuta_Model_M->childSfunctions[0];
      sfcnOutputs(rts,3);
    }

    /* MATLAB Function: '<S23>/security' */
    Furuta_Model_B.control_out = 0.0;
    if (Furuta_Model_B.SFunction1_o4 != 4.0) {
      Furuta_Model_B.control_out = Furuta_Model_B.u;
    }

    /* End of MATLAB Function: '<S23>/security' */

    /* SignalConversion generated from: '<S23>/u' */
    Furuta_Model_B.OutportBufferForu = Furuta_Model_B.control_out;
  } else {
    Furuta_Model_DW.Solver_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S1>/Solver' */

  /* Product: '<S1>/Product' incorporates:
   *  Constant: '<S1>/acados on'
   */
  Furuta_Model_B.Product_c = Furuta_Model_P.acadoson_Value *
    Furuta_Model_B.OutportBufferForu;

  /* Saturate: '<S1>/0,4Nm' */
  a = Furuta_Model_B.Product_c;
  b_0 = Furuta_Model_P.u4Nm_LowerSat;
  u2 = Furuta_Model_P.u4Nm_UpperSat;
  if (a > u2) {
    /* Saturate: '<S1>/0,4Nm' */
    Furuta_Model_B.u4Nm = u2;
  } else if (a < b_0) {
    /* Saturate: '<S1>/0,4Nm' */
    Furuta_Model_B.u4Nm = b_0;
  } else {
    /* Saturate: '<S1>/0,4Nm' */
    Furuta_Model_B.u4Nm = a;
  }

  /* End of Saturate: '<S1>/0,4Nm' */

  /* Gain: '<S1>/1//kmot' */
  Furuta_Model_B.ukmot_b = Furuta_Model_P.ukmot_Gain * Furuta_Model_B.u4Nm;

  /* Gain: '<S1>/Gain' */
  Furuta_Model_B.Gain_h = Furuta_Model_P.Gain_Gain_j * Furuta_Model_B.ukmot_b;

  /* Gain: '<S1>/x_out' */
  Furuta_Model_B.x_out[0] = Furuta_Model_P.x_out_Gain *
    Furuta_Model_B.RateTransition5;
  Furuta_Model_B.x_out[1] = Furuta_Model_P.x_out_Gain *
    Furuta_Model_B.RateTransition6;
  Furuta_Model_B.x_out[2] = Furuta_Model_P.x_out_Gain *
    Furuta_Model_B.RateTransition7;
  Furuta_Model_B.x_out[3] = Furuta_Model_P.x_out_Gain *
    Furuta_Model_B.RateTransition8;

  /* SignalConversion generated from: '<S1>/Counter' */
  Furuta_Model_B.OutportBufferForCounter = Furuta_Model_B.sf_MATLABFunction_a.y;

  /* SignalConversion generated from: '<S1>/Measure' */
  Furuta_Model_B.OutportBufferForMeasure[0] = Furuta_Model_B.control_out;
  Furuta_Model_B.OutportBufferForMeasure[1] = Furuta_Model_B.SFunction1_o4;
  Furuta_Model_B.OutportBufferForMeasure[2] = Furuta_Model_B.SFunction1_o7;
  Furuta_Model_B.OutportBufferForMeasure[3] = Furuta_Model_B.SFunction1_o5;
  Furuta_Model_B.OutportBufferForMeasure[4] = Furuta_Model_B.SFunction1_o8;
  memcpy(&Furuta_Model_B.OutportBufferForMeasure[5],
         &Furuta_Model_B.SFunction1_o2[0], 10U * sizeof(real_T));
  memcpy(&Furuta_Model_B.OutportBufferForMeasure[15],
         &Furuta_Model_B.SFunction1_o3[0], 44U * sizeof(real_T));

  /* SignalConversion generated from: '<S1>/acados_on' incorporates:
   *  Constant: '<S1>/acados on'
   */
  Furuta_Model_B.OutportBufferForacados_on = Furuta_Model_P.acadoson_Value;

  /* Update for Enabled SubSystem: '<S1>/Solver' incorporates:
   *  EnablePort: '<S23>/Enable'
   */
  if (Furuta_Model_DW.Solver_MODE) {
    /* Update for Delay: '<S23>/x_tra' */
    memcpy(&Furuta_Model_DW.x_tra_DSTATE[0], &Furuta_Model_B.SFunction1_o3[0],
           44U * sizeof(real_T));

    /* Update for Delay: '<S23>/u_tra' */
    memcpy(&Furuta_Model_DW.u_tra_DSTATE[0], &Furuta_Model_B.SFunction1_o2[0],
           10U * sizeof(real_T));
  }

  /* End of Update for SubSystem: '<S1>/Solver' */
}

/* Termination for function-call system: '<Root>/Acados' */
void Furuta_Model_Acados_Term(void)
{
  /* Terminate for Enabled SubSystem: '<S1>/Solver' */

  /* Terminate for S-Function (acados_solver_sfunction_furuta): '<S23>/S-Function1' */
  /* Level2 S-Function Block: '<S23>/S-Function1' (acados_solver_sfunction_furuta) */
  {
    SimStruct *rts = Furuta_Model_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S1>/Solver' */
}

/*
 * Output and update for atomic system:
 *    '<Root>/omega_1_ctrl'
 *    '<Root>/omega_2_ctrl'
 *    '<Root>/theta_1_ctrl'
 */
void Furuta_Model_omega_1_ctrl(real_T rtu_u, B_omega_1_ctrl_Furuta_Model_T
  *localB)
{
  localB->y = rtu_u;
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    real_T tmp;
    real_T tmp_0;
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model output function */
void Furuta_Model_output(void)
{
  real_T b_idx_0;
  real_T rest;
  real_T s;
  real_T t;
  int32_T i;
  int32_T i_0;
  int8_T tmp;
  boolean_T tmp_0;
  ZCEventType zcEvent;
  if (rtmIsMajorTimeStep(Furuta_Model_M)) {
    /* set solver stop time */
    if (!(Furuta_Model_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&Furuta_Model_M->solverInfo,
                            ((Furuta_Model_M->Timing.clockTickH0 + 1) *
        Furuta_Model_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&Furuta_Model_M->solverInfo,
                            ((Furuta_Model_M->Timing.clockTick0 + 1) *
        Furuta_Model_M->Timing.stepSize0 + Furuta_Model_M->Timing.clockTickH0 *
        Furuta_Model_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Furuta_Model_M)) {
    Furuta_Model_M->Timing.t[0] = rtsiGetT(&Furuta_Model_M->solverInfo);
  }

  /* user code (Output function Body for TID0) */
  if (rtmIsMajorTimeStep(Furuta_Model_M)) {
    /* Function module access point of system <Root>    */
    ap_entry_Furuta_Model_SIDRoot_TID1();
  }

  /* Clock: '<Root>/Clock' */
  Furuta_Model_B.Clock = Furuta_Model_M->Timing.t[0];

  /* Outputs for Enabled SubSystem: '<Root>/getRange' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  if (rtmIsMajorTimeStep(Furuta_Model_M) &&
      Furuta_Model_M->Timing.TaskCounters.TID[1] == 0) {
    /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
    Furuta_Model_B.PulseGenerator = (Furuta_Model_DW.clockTickCounter <
      Furuta_Model_P.PulseGenerator_Duty_p) && (Furuta_Model_DW.clockTickCounter
      >= 0) ? Furuta_Model_P.PulseGenerator_Amp_g : 0.0;

    /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
    if (Furuta_Model_DW.clockTickCounter >=
        Furuta_Model_P.PulseGenerator_Period_l - 1.0) {
      Furuta_Model_DW.clockTickCounter = 0;
    } else {
      Furuta_Model_DW.clockTickCounter++;
    }

    /* Outputs for Triggered SubSystem: '<Root>/Encoder_Chan1_SubSys' incorporates:
     *  TriggerPort: '<S7>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&Furuta_Model_M->solverInfo)) {
      zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &Furuta_Model_PrevZCX.Encoder_Chan1_SubSys_Trig_ZCE,
                         (Furuta_Model_B.PulseGenerator));
      if (zcEvent != NO_ZCEVENT) {
        /* user code (Output function Body) */
        {
          /* Function module access point of system <Root>/Encoder_Chan1_SubSys    */
          ap_entry_Furuta_Model_SIDS7_TIDtriggered();
        }

        /* S-Function (dsmpb_datainport): '<S32>/Data Inport S-Fcn' */

        /* Read access point of block Furuta_Model/Encoder_Chan1_SubSys/Enc_1 non-bus port 1 */
        ap_read_Furuta_Model_DataInport1_P1_S1(&Furuta_Model_B.SpeedRotary_b);

        /* Read access point of block Furuta_Model/Encoder_Chan1_SubSys/Enc_1 non-bus port 2 */
        ap_read_Furuta_Model_DataInport1_P2_S1(&Furuta_Model_B.PositionRotary_e);

        /* Read access point of block Furuta_Model/Encoder_Chan1_SubSys/Enc_1 non-bus port 3 */
        ap_read_Furuta_Model_DataInport1_P3_S1(&Furuta_Model_B.PositionValid_o);

        /* Product: '<S7>/Product3' incorporates:
         *  Constant: '<S7>/CONST1'
         */
        Furuta_Model_B.Product3_h = Furuta_Model_B.PositionRotary_e *
          Furuta_Model_P.CONST1_Value;

        /* DiscreteTransferFcn: '<S7>/DT1 Transfer Fcn' */
        t = Furuta_Model_B.Product3_h;
        t -= Furuta_Model_P.DT1TransferFcn_DenCoef[1] *
          Furuta_Model_DW.DT1TransferFcn_states_d;
        t /= Furuta_Model_P.DT1TransferFcn_DenCoef[0];
        Furuta_Model_DW.DT1TransferFcn_tmp_k = t;
        t = Furuta_Model_P.DT1TransferFcn_NumCoef[0] *
          Furuta_Model_DW.DT1TransferFcn_tmp_k;
        t += Furuta_Model_P.DT1TransferFcn_NumCoef[1] *
          Furuta_Model_DW.DT1TransferFcn_states_d;

        /* DiscreteTransferFcn: '<S7>/DT1 Transfer Fcn' */
        Furuta_Model_B.DT1TransferFcn_k = t;

        /* user code (Output function Trailer) */
        {
          /* Function module access point of system <Root>/Encoder_Chan1_SubSys    */
          ap_exit_Furuta_Model_SIDS7_TIDtriggered();
        }

        /* Update for DiscreteTransferFcn: '<S7>/DT1 Transfer Fcn' */
        Furuta_Model_DW.DT1TransferFcn_states_d =
          Furuta_Model_DW.DT1TransferFcn_tmp_k;
      }
    }

    /* End of Outputs for SubSystem: '<Root>/Encoder_Chan1_SubSys' */
    if (rtsiIsModeUpdateTimeStep(&Furuta_Model_M->solverInfo)) {
      /* Constant: '<Root>/Calibrate_Ena' */
      if (Furuta_Model_P.Calibrate_Ena_Value > 0.0) {
        Furuta_Model_DW.getRange_MODE = true;
      } else if (Furuta_Model_DW.getRange_MODE) {
        /* Disable for Enabled SubSystem: '<S16>/Rampenfunktion' */
        Furuta_Model_DW.Rampenfunktion_MODE = false;

        /* End of Disable for SubSystem: '<S16>/Rampenfunktion' */

        /* Disable for Switch: '<S16>/Switch1' incorporates:
         *  Outport: '<S16>/y'
         */
        Furuta_Model_B.Switch1_f = Furuta_Model_P.y_Y0_b;
        Furuta_Model_DW.getRange_MODE = false;
      }
    }
  }

  /* End of Outputs for SubSystem: '<Root>/getRange' */

  /* Integrator: '<S15>/Integrator' */
  Furuta_Model_B.Integrator = Furuta_Model_X.Integrator_CSTATE;

  /* Sum: '<Root>/Sum1' incorporates:
   *  Constant: '<Root>/Nullabgleich_Strommessung'
   */
  Furuta_Model_B.Sum1 = Furuta_Model_B.Integrator -
    Furuta_Model_P.Nullabgleich_Strommessung_Value;

  /* Gain: '<Root>/Gain' */
  Furuta_Model_B.Gain = Furuta_Model_P.Gain_Gain_d * Furuta_Model_B.Sum1;

  /* Outputs for Enabled SubSystem: '<Root>/getRange' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  if (Furuta_Model_DW.getRange_MODE) {
    if (rtmIsMajorTimeStep(Furuta_Model_M) &&
        Furuta_Model_M->Timing.TaskCounters.TID[1] == 0) {
      /* MATLAB Function: '<S16>/MATLAB Function' */
      if (Furuta_Model_DW.status == 1.0) {
        Furuta_Model_B.reset = 1.0;
        Furuta_Model_B.mitte = 0.0;
        if (Furuta_Model_B.Gain > 2.0) {
          Furuta_Model_DW.upper = Furuta_Model_B.Product3_h;
          Furuta_Model_DW.lower = Furuta_Model_DW.upper - 5.249;
          Furuta_Model_B.reset = 0.0;
          Furuta_Model_DW.status = 2.0;
        }
      } else {
        Furuta_Model_B.reset = 0.0;
        Furuta_Model_B.mitte = (Furuta_Model_DW.lower + Furuta_Model_DW.upper) /
          2.0;
      }

      Furuta_Model_B.upper_limit = Furuta_Model_DW.upper;
      Furuta_Model_B.lower_limit = Furuta_Model_DW.lower;

      /* End of MATLAB Function: '<S16>/MATLAB Function' */

      /* Outputs for Enabled SubSystem: '<S16>/Rampenfunktion' incorporates:
       *  EnablePort: '<S46>/Enable'
       */
      if (rtsiIsModeUpdateTimeStep(&Furuta_Model_M->solverInfo)) {
        if (Furuta_Model_B.reset > 0.0) {
          if (!Furuta_Model_DW.Rampenfunktion_MODE) {
            /* InitializeConditions for Integrator: '<S46>/Integrator1' */
            Furuta_Model_X.Integrator1_CSTATE = Furuta_Model_P.Integrator1_IC;
            Furuta_Model_DW.Rampenfunktion_MODE = true;
          }
        } else {
          Furuta_Model_DW.Rampenfunktion_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S16>/Rampenfunktion' */
    }

    /* Outputs for Enabled SubSystem: '<S16>/Rampenfunktion' incorporates:
     *  EnablePort: '<S46>/Enable'
     */
    if (Furuta_Model_DW.Rampenfunktion_MODE) {
      /* Integrator: '<S46>/Integrator1' */
      Furuta_Model_B.Integrator1 = Furuta_Model_X.Integrator1_CSTATE;

      /* Step: '<S46>/Step1' */
      t = Furuta_Model_M->Timing.t[0];
      if (t < Furuta_Model_P.Step1_Time) {
        /* Step: '<S46>/Step1' */
        Furuta_Model_B.Step1 = Furuta_Model_P.Step1_Y0;
      } else {
        /* Step: '<S46>/Step1' */
        Furuta_Model_B.Step1 = Furuta_Model_P.Step1_YFinal;
      }

      /* End of Step: '<S46>/Step1' */
    }

    /* End of Outputs for SubSystem: '<S16>/Rampenfunktion' */

    /* Switch: '<S16>/Switch1' */
    if (Furuta_Model_B.reset != 0.0) {
      /* Switch: '<S16>/Switch1' */
      Furuta_Model_B.Switch1_f = Furuta_Model_B.Integrator1;
    } else {
      /* Switch: '<S16>/Switch1' incorporates:
       *  Constant: '<S16>/Constant'
       */
      Furuta_Model_B.Switch1_f = Furuta_Model_P.Constant_Value_ej;
    }

    /* End of Switch: '<S16>/Switch1' */
  }

  /* End of Outputs for SubSystem: '<Root>/getRange' */

  /* Switch: '<Root>/Switch1' incorporates:
   *  Constant: '<Root>/Calibrate_Ena'
   */
  if (Furuta_Model_P.Calibrate_Ena_Value > Furuta_Model_P.Switch1_Threshold) {
    /* Switch: '<Root>/Switch1' */
    Furuta_Model_B.Switch1 = Furuta_Model_B.Switch1_f;
  } else {
    /* Switch: '<Root>/Switch1' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    Furuta_Model_B.Switch1 = Furuta_Model_P.Constant1_Value_f;
  }

  /* End of Switch: '<Root>/Switch1' */
  if (rtmIsMajorTimeStep(Furuta_Model_M) &&
      Furuta_Model_M->Timing.TaskCounters.TID[1] == 0) {
    /* Sum: '<Root>/Add' */
    Furuta_Model_B.Add = Furuta_Model_B.Product3_h - Furuta_Model_B.mitte;

    /* MATLAB Function: '<Root>/setZero' incorporates:
     *  Constant: '<Root>/SetZeroTheta1'
     */
    Furuta_Model_B.theta_1_out = Furuta_Model_B.Add;
    if ((Furuta_Model_P.SetZeroTheta1_Value == 1.0) &&
        (!Furuta_Model_DW.offset_not_empty)) {
      Furuta_Model_DW.offset = Furuta_Model_B.Add;
      Furuta_Model_DW.offset_not_empty = true;
    }

    if (Furuta_Model_DW.offset_not_empty) {
      Furuta_Model_B.theta_1_out = Furuta_Model_B.Add - Furuta_Model_DW.offset;
    }

    /* End of MATLAB Function: '<Root>/setZero' */

    /* MATLAB Function: '<Root>/theta_1_ctrl' */
    Furuta_Model_omega_1_ctrl(Furuta_Model_B.theta_1_out,
      &Furuta_Model_B.sf_theta_1_ctrl);

    /* Outputs for Triggered SubSystem: '<Root>/Encoder_Chan2_SubSys' incorporates:
     *  TriggerPort: '<S8>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&Furuta_Model_M->solverInfo)) {
      zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &Furuta_Model_PrevZCX.Encoder_Chan2_SubSys_Trig_ZCE,
                         (Furuta_Model_B.PulseGenerator));
      if (zcEvent != NO_ZCEVENT) {
        /* user code (Output function Body) */
        {
          /* Function module access point of system <Root>/Encoder_Chan2_SubSys    */
          ap_entry_Furuta_Model_SIDS8_TIDtriggered();
        }

        /* S-Function (dsmpb_datainport): '<S33>/Data Inport S-Fcn' */

        /* Read access point of block Furuta_Model/Encoder_Chan2_SubSys/Enc_2 non-bus port 1 */
        ap_read_Furuta_Model_DataInport2_P1_S1(&Furuta_Model_B.SpeedRotary);

        /* Read access point of block Furuta_Model/Encoder_Chan2_SubSys/Enc_2 non-bus port 2 */
        ap_read_Furuta_Model_DataInport2_P2_S1(&Furuta_Model_B.PositionRotary);

        /* Read access point of block Furuta_Model/Encoder_Chan2_SubSys/Enc_2 non-bus port 3 */
        ap_read_Furuta_Model_DataInport2_P3_S1(&Furuta_Model_B.PositionValid);

        /* Product: '<S8>/Product3' incorporates:
         *  Constant: '<S8>/CONST1'
         */
        Furuta_Model_B.Product3 = Furuta_Model_B.PositionRotary *
          Furuta_Model_P.CONST1_Value_b;

        /* DiscreteTransferFcn: '<S8>/DT1 Transfer Fcn' */
        t = Furuta_Model_B.Product3;
        t -= Furuta_Model_P.DT1TransferFcn_DenCoef_i[1] *
          Furuta_Model_DW.DT1TransferFcn_states;
        t /= Furuta_Model_P.DT1TransferFcn_DenCoef_i[0];
        Furuta_Model_DW.DT1TransferFcn_tmp = t;
        t = Furuta_Model_P.DT1TransferFcn_NumCoef_k[0] *
          Furuta_Model_DW.DT1TransferFcn_tmp;
        t += Furuta_Model_P.DT1TransferFcn_NumCoef_k[1] *
          Furuta_Model_DW.DT1TransferFcn_states;

        /* DiscreteTransferFcn: '<S8>/DT1 Transfer Fcn' */
        Furuta_Model_B.DT1TransferFcn = t;

        /* user code (Output function Trailer) */
        {
          /* Function module access point of system <Root>/Encoder_Chan2_SubSys    */
          ap_exit_Furuta_Model_SIDS8_TIDtriggered();
        }

        /* Update for DiscreteTransferFcn: '<S8>/DT1 Transfer Fcn' */
        Furuta_Model_DW.DT1TransferFcn_states =
          Furuta_Model_DW.DT1TransferFcn_tmp;
      }
    }

    /* End of Outputs for SubSystem: '<Root>/Encoder_Chan2_SubSys' */

    /* MATLAB Function: '<Root>/theta_2_ctrl' */
    Furuta_Model_B.y = Furuta_Model_B.Product3 - 3.1415926535897931;

    /* MATLAB Function: '<Root>/omega_1_ctrl' */
    Furuta_Model_omega_1_ctrl(Furuta_Model_B.DT1TransferFcn_k,
      &Furuta_Model_B.sf_omega_1_ctrl);

    /* MATLAB Function: '<Root>/omega_2_ctrl' */
    Furuta_Model_omega_1_ctrl(Furuta_Model_B.DT1TransferFcn,
      &Furuta_Model_B.sf_omega_2_ctrl);

    /* DiscretePulseGenerator: '<S3>/Pulse Generator' */
    Furuta_Model_B.PulseGenerator_g = (Furuta_Model_DW.clockTickCounter_d <
      Furuta_Model_P.PulseGenerator_Duty_pj) &&
      (Furuta_Model_DW.clockTickCounter_d >= 0) ?
      Furuta_Model_P.PulseGenerator_Amp_n : 0.0;

    /* DiscretePulseGenerator: '<S3>/Pulse Generator' */
    if (Furuta_Model_DW.clockTickCounter_d >=
        Furuta_Model_P.PulseGenerator_Period_a - 1.0) {
      Furuta_Model_DW.clockTickCounter_d = 0;
    } else {
      Furuta_Model_DW.clockTickCounter_d++;
    }

    /* Outputs for Triggered SubSystem: '<S3>/DiscreteStateSpaceMethods' incorporates:
     *  TriggerPort: '<S28>/Trigger'
     */
    if (rtsiIsModeUpdateTimeStep(&Furuta_Model_M->solverInfo)) {
      zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &Furuta_Model_PrevZCX.DiscreteStateSpaceMethods_Tri_g,
                         (Furuta_Model_B.PulseGenerator_g));
      if (zcEvent != NO_ZCEVENT) {
        /* SignalConversion generated from: '<S29>/ SFunction ' incorporates:
         *  MATLAB Function: '<S28>/LQR_aktiv'
         */
        Furuta_Model_B.TmpSignalConversionAtSFunctio_m[0] =
          Furuta_Model_B.sf_theta_1_ctrl.y;
        Furuta_Model_B.TmpSignalConversionAtSFunctio_m[1] = Furuta_Model_B.y;
        Furuta_Model_B.TmpSignalConversionAtSFunctio_m[2] =
          Furuta_Model_B.sf_omega_1_ctrl.y;
        Furuta_Model_B.TmpSignalConversionAtSFunctio_m[3] =
          Furuta_Model_B.sf_omega_2_ctrl.y;

        /* MATLAB Function: '<S28>/LQR_aktiv' */
        if (Furuta_Model_B.TmpSignalConversionAtSFunctio_m[1] *
            Furuta_Model_B.TmpSignalConversionAtSFunctio_m[1] /
            0.075625000000000012 +
            Furuta_Model_B.TmpSignalConversionAtSFunctio_m[3] *
            Furuta_Model_B.TmpSignalConversionAtSFunctio_m[3] / 25.0 <= 1.0) {
          Furuta_Model_DW.einzugsbereich = 1.0;
        }

        if ((Furuta_Model_B.TmpSignalConversionAtSFunctio_m[1] <
             -0.78539816339744828) ||
            (Furuta_Model_B.TmpSignalConversionAtSFunctio_m[1] >
             0.78539816339744828)) {
          Furuta_Model_DW.einzugsbereich = 0.0;
        }

        Furuta_Model_B.aktiv = Furuta_Model_DW.einzugsbereich;

        /* SignalConversion generated from: '<S31>/ SFunction ' incorporates:
         *  MATLAB Function: '<S30>/LQR_Controller'
         */
        Furuta_Model_B.TmpSignalConversionAtSFunctio_d[0] =
          Furuta_Model_B.sf_theta_1_ctrl.y;
        Furuta_Model_B.TmpSignalConversionAtSFunctio_d[1] = Furuta_Model_B.y;
        Furuta_Model_B.TmpSignalConversionAtSFunctio_d[2] =
          Furuta_Model_B.sf_omega_1_ctrl.y;
        Furuta_Model_B.TmpSignalConversionAtSFunctio_d[3] =
          Furuta_Model_B.sf_omega_2_ctrl.y;

        /* MATLAB Function: '<S30>/LQR_Controller' */
        b_idx_0 = Furuta_Model_B.TmpSignalConversionAtSFunctio_d[0];
        t = Furuta_Model_B.TmpSignalConversionAtSFunctio_d[1];
        s = Furuta_Model_B.TmpSignalConversionAtSFunctio_d[2];
        rest = Furuta_Model_B.TmpSignalConversionAtSFunctio_d[3];
        b_idx_0 *= 0.1291;
        b_idx_0 += -1.5139 * t;
        b_idx_0 += 0.0655 * s;
        b_idx_0 += -0.1538 * rest;
        Furuta_Model_B.drehmoment_soll = b_idx_0;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' */
        switch ((int32_T)Furuta_Model_B.aktiv) {
         case 1:
          /* MultiPortSwitch: '<S28>/Multiport Switch1' */
          Furuta_Model_B.MultiportSwitch1_k = Furuta_Model_B.drehmoment_soll;
          break;

         case 2:
          /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
           *  Constant: '<S28>/Constant1'
           */
          Furuta_Model_B.MultiportSwitch1_k = Furuta_Model_P.Constant1_Value;
          break;

         default:
          /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
           *  Constant: '<S28>/Constant'
           */
          Furuta_Model_B.MultiportSwitch1_k = Furuta_Model_P.Constant_Value;
          break;
        }

        /* End of MultiPortSwitch: '<S28>/Multiport Switch1' */

        /* Saturate: '<S28>/Saturation' */
        t = Furuta_Model_B.MultiportSwitch1_k;
        s = Furuta_Model_P.Saturation_LowerSat;
        rest = Furuta_Model_P.Saturation_UpperSat;
        if (t > rest) {
          /* Saturate: '<S28>/Saturation' */
          Furuta_Model_B.Saturation_h = rest;
        } else if (t < s) {
          /* Saturate: '<S28>/Saturation' */
          Furuta_Model_B.Saturation_h = s;
        } else {
          /* Saturate: '<S28>/Saturation' */
          Furuta_Model_B.Saturation_h = t;
        }

        /* End of Saturate: '<S28>/Saturation' */

        /* Gain: '<S30>/k1' */
        Furuta_Model_B.k1_j = Furuta_Model_P.k1_Gain * 0.0;

        /* Gain: '<S30>/k2' */
        Furuta_Model_B.k2_i = Furuta_Model_P.k2_Gain * 0.0;

        /* Gain: '<S30>/k3' */
        Furuta_Model_B.k3_h = Furuta_Model_P.k3_Gain * 0.0;

        /* Gain: '<S30>/k4' */
        Furuta_Model_B.k4_a = Furuta_Model_P.k4_Gain * 0.0;

        /* Sum: '<S30>/Add' */
        Furuta_Model_B.Add_pc = ((Furuta_Model_B.k1_j + Furuta_Model_B.k2_i) +
          Furuta_Model_B.k3_h) + Furuta_Model_B.k4_a;
      }
    }

    /* End of Outputs for SubSystem: '<S3>/DiscreteStateSpaceMethods' */

    /* Gain: '<S3>/1//kmot' */
    Furuta_Model_B.ukmot = Furuta_Model_P.ukmot_Gain_l *
      Furuta_Model_B.Saturation_h;

    /* Gain: '<Root>/Enable_LQR' */
    Furuta_Model_B.Enable_LQR = Furuta_Model_P.Enable_LQR_Gain *
      Furuta_Model_B.ukmot;

    /* MultiPortSwitch: '<Root>/Multiport Switch1' */
    switch ((int32_T)Furuta_Model_B.aktiv) {
     case 1:
      /* MultiPortSwitch: '<Root>/Multiport Switch1' */
      Furuta_Model_B.MultiportSwitch1 = Furuta_Model_B.Enable_LQR;
      break;

     case 2:
      /* MultiPortSwitch: '<Root>/Multiport Switch1' incorporates:
       *  Constant: '<Root>/Constant'
       */
      Furuta_Model_B.MultiportSwitch1 = Furuta_Model_P.Constant_Value_b;
      break;

     default:
      /* MultiPortSwitch: '<Root>/Multiport Switch1' incorporates:
       *  Constant: '<Root>/Constant'
       */
      Furuta_Model_B.MultiportSwitch1 = Furuta_Model_P.Constant_Value_b;
      break;
    }

    /* End of MultiPortSwitch: '<Root>/Multiport Switch1' */
  }

  if (rtmIsMajorTimeStep(Furuta_Model_M) &&
      Furuta_Model_M->Timing.TaskCounters.TID[2] == 0) {
    /* S-Function (dsmpb_triggereventport): '<S12>/Trigger Event Port S-Fcn' */

    /* Runnable function block */

    // Trigger task: Task [638]
    dsmpb_TriggerFunction_Furuta_Model_TriggerEventPortSFcn_TID3_BT1();

    /* End of Outputs for S-Function (dsmpb_triggereventport): '<S12>/Trigger Event Port S-Fcn' */
  }

  /* Outputs for Enabled SubSystem: '<Root>/CurrentCtrl1' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  /* RateTransition: '<Root>/I_ref Acados' incorporates:
   *  Constant: '<Root>/CurrentCtrl1_Ena'
   */
  if (rtmIsMajorTimeStep(Furuta_Model_M) &&
      Furuta_Model_M->Timing.TaskCounters.TID[1] == 0) {
    /* RateTransition: '<Root>/I_ref Acados' */
    Furuta_Model_B.I_refAcados =
      Furuta_Model_DW.I_refAcados_Buffer[Furuta_Model_DW.I_refAcados_ActiveBufIdx];
    if (rtsiIsModeUpdateTimeStep(&Furuta_Model_M->solverInfo)) {
      if (Furuta_Model_P.CurrentCtrl1_Ena_Value > 0.0) {
        if (!Furuta_Model_DW.CurrentCtrl1_MODE) {
          /* InitializeConditions for Integrator: '<S4>/Integrator' */
          Furuta_Model_X.Integrator_CSTATE_e = Furuta_Model_P.Integrator_IC;
          Furuta_Model_DW.CurrentCtrl1_MODE = true;
        }
      } else if (Furuta_Model_DW.CurrentCtrl1_MODE) {
        /* Disable for Sum: '<S4>/Sum' incorporates:
         *  Outport: '<S4>/ua[V]'
         */
        Furuta_Model_B.Sum_i = Furuta_Model_P.uaV_Y0;
        Furuta_Model_DW.CurrentCtrl1_MODE = false;
      }
    }
  }

  /* End of RateTransition: '<Root>/I_ref Acados' */
  /* End of Outputs for SubSystem: '<Root>/CurrentCtrl1' */

  /* Sum: '<Root>/Sum' */
  Furuta_Model_B.Sum = (Furuta_Model_B.Switch1 + Furuta_Model_B.MultiportSwitch1)
    + Furuta_Model_B.I_refAcados;

  /* Outputs for Enabled SubSystem: '<Root>/CurrentCtrl1' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  if (Furuta_Model_DW.CurrentCtrl1_MODE) {
    /* Integrator: '<S4>/Integrator' */
    /* Limited  Integrator  */
    if (Furuta_Model_X.Integrator_CSTATE_e >= Furuta_Model_P.Integrator_UpperSat)
    {
      Furuta_Model_X.Integrator_CSTATE_e = Furuta_Model_P.Integrator_UpperSat;
    } else if (Furuta_Model_X.Integrator_CSTATE_e <=
               Furuta_Model_P.Integrator_LowerSat) {
      Furuta_Model_X.Integrator_CSTATE_e = Furuta_Model_P.Integrator_LowerSat;
    }

    /* Integrator: '<S4>/Integrator' */
    Furuta_Model_B.Integrator_m = Furuta_Model_X.Integrator_CSTATE_e;

    /* Sum: '<S4>/Sum1' */
    Furuta_Model_B.Sum1_b = Furuta_Model_B.Sum - Furuta_Model_B.Gain;

    /* Product: '<S4>/Product' incorporates:
     *  Constant: '<S4>/Kp[V//A]'
     */
    Furuta_Model_B.Product_e = Furuta_Model_B.Sum1_b * Furuta_Model_P.KpVA_Value;

    /* Product: '<S4>/Product1' incorporates:
     *  Constant: '<S4>/Tn'
     */
    Furuta_Model_B.Product1 = Furuta_Model_B.Product_e / Furuta_Model_P.Tn_Value;

    /* Sum: '<S4>/Sum' */
    Furuta_Model_B.Sum_i = Furuta_Model_B.Product_e +
      Furuta_Model_B.Integrator_m;
  }

  /* End of Outputs for SubSystem: '<Root>/CurrentCtrl1' */

  /* Gain: '<Root>/Gain1' */
  Furuta_Model_B.Gain1 = Furuta_Model_P.Gain1_Gain_o * Furuta_Model_B.Sum_i;

  /* Gain: '<Root>/Normierung' */
  Furuta_Model_B.Normierung = Furuta_Model_P.Normierung_Gain *
    Furuta_Model_B.Gain1;

  /* RateTransition: '<Root>/acados_on' */
  if (rtmIsMajorTimeStep(Furuta_Model_M) &&
      Furuta_Model_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<Root>/DAC_Enable' incorporates:
     *  Constant: '<Root>/Constant2'
     */
    Furuta_Model_B.DAC_Enable = Furuta_Model_P.DAC_Enable_Gain *
      Furuta_Model_P.Constant2_Value;

    /* RateTransition: '<Root>/acados_on' */
    Furuta_Model_B.acados_on =
      Furuta_Model_DW.acados_on_Buffer[Furuta_Model_DW.acados_on_ActiveBufIdx];

    /* Outputs for Enabled SubSystem: '<Root>/Breaker' incorporates:
     *  EnablePort: '<S2>/Enable'
     */
    if (rtsiIsModeUpdateTimeStep(&Furuta_Model_M->solverInfo)) {
      Furuta_Model_DW.Breaker_MODE = (Furuta_Model_B.acados_on > 0.0);
    }

    /* End of Outputs for SubSystem: '<Root>/Breaker' */
  }

  /* End of RateTransition: '<Root>/acados_on' */

  /* Product: '<Root>/Product' */
  Furuta_Model_B.Product = Furuta_Model_B.Normierung * Furuta_Model_B.DAC_Enable;

  /* Outputs for Enabled SubSystem: '<Root>/Breaker' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  if (Furuta_Model_DW.Breaker_MODE) {
    /* MATLAB Function: '<S2>/MATLAB Function' */
    if (!Furuta_Model_DW.t_start_not_empty) {
      Furuta_Model_DW.t_start = Furuta_Model_B.Clock;
      Furuta_Model_DW.t_start_not_empty = true;
    }

    t = Furuta_Model_B.Clock - Furuta_Model_DW.t_start;
    if (((t < 0.3) && (t > 0.2)) || ((t < 0.8) && (t > 0.6))) {
      Furuta_Model_B.out = 0.0;
    } else {
      Furuta_Model_B.out = Furuta_Model_B.Product;
    }

    /* End of MATLAB Function: '<S2>/MATLAB Function' */
  }

  /* End of Outputs for SubSystem: '<Root>/Breaker' */
  if (rtmIsMajorTimeStep(Furuta_Model_M) &&
      Furuta_Model_M->Timing.TaskCounters.TID[1] == 0) {
    /* S-Function (dsmpb_dataoutport): '<S6>/Data Outport S-Fcn' */

    /* Write access point of block Furuta_Model/DAC Voltage Out (1) non-bus port 1 */
    ap_write_Furuta_Model_DataOutport1_P1_S1(&Furuta_Model_B.out);

    /* RateTransition: '<Root>/Counter' */
    Furuta_Model_B.Counter =
      Furuta_Model_DW.Counter_Buffer[Furuta_Model_DW.Counter_ActiveBufIdx];

    /* RateTransition: '<Root>/Measure' */
    i = Furuta_Model_DW.Measure_ActiveBufIdx * 59;
    for (i_0 = 0; i_0 < 59; i_0++) {
      /* RateTransition: '<Root>/Measure' */
      Furuta_Model_B.Measure[i_0] = Furuta_Model_DW.Measure_Buffer[i_0 + i];
    }

    /* SignalConversion generated from: '<S11>/ SFunction ' incorporates:
     *  MATLAB Function: '<Root>/Measurement_out'
     */
    Furuta_Model_B.TmpSignalConversionAtSFunctio_j[0] =
      Furuta_Model_B.sf_theta_1_ctrl.y;
    Furuta_Model_B.TmpSignalConversionAtSFunctio_j[1] = Furuta_Model_B.y;
    Furuta_Model_B.TmpSignalConversionAtSFunctio_j[2] =
      Furuta_Model_B.sf_omega_1_ctrl.y;
    Furuta_Model_B.TmpSignalConversionAtSFunctio_j[3] =
      Furuta_Model_B.sf_omega_2_ctrl.y;
    memcpy(&Furuta_Model_B.TmpSignalConversionAtSFunctio_j[4],
           &Furuta_Model_B.Measure[0], 59U * sizeof(real_T));

    /* MATLAB Function: '<Root>/Measurement_out' */
    memcpy(&Furuta_Model_B.y_hc[0],
           &Furuta_Model_B.TmpSignalConversionAtSFunctio_j[0], 63U * sizeof
           (real_T));

    /* S-Function (dsmpb_datainport): '<S5>/Data Inport S-Fcn' */

    /* Read access point of block Furuta_Model/Current_Sensor non-bus port 1 */
    ap_read_Furuta_Model_DataInport3_P1_S1(&Furuta_Model_B.Voltage);

    /* Gain: '<Root>/Normal->Strom' */
    Furuta_Model_B.NormalStrom = Furuta_Model_P.NormalStrom_Gain *
      Furuta_Model_B.Voltage;

    /* RateTransition: '<Root>/Rate Transition5' */
    Furuta_Model_DW.RateTransition5_Buffer[Furuta_Model_DW.RateTransition5_semaphoreTaken
      == 0] = Furuta_Model_B.sf_theta_1_ctrl.y;
    Furuta_Model_DW.RateTransition5_ActiveBufIdx = (int8_T)
      (Furuta_Model_DW.RateTransition5_semaphoreTaken == 0);

    /* RateTransition: '<Root>/Rate Transition6' */
    Furuta_Model_DW.RateTransition6_Buffer[Furuta_Model_DW.RateTransition6_semaphoreTaken
      == 0] = Furuta_Model_B.y;
    Furuta_Model_DW.RateTransition6_ActiveBufIdx = (int8_T)
      (Furuta_Model_DW.RateTransition6_semaphoreTaken == 0);

    /* RateTransition: '<Root>/Rate Transition7' */
    Furuta_Model_DW.RateTransition7_Buffer[Furuta_Model_DW.RateTransition7_semaphoreTaken
      == 0] = Furuta_Model_B.sf_omega_1_ctrl.y;
    Furuta_Model_DW.RateTransition7_ActiveBufIdx = (int8_T)
      (Furuta_Model_DW.RateTransition7_semaphoreTaken == 0);

    /* RateTransition: '<Root>/Rate Transition8' */
    Furuta_Model_DW.RateTransition8_Buffer[Furuta_Model_DW.RateTransition8_semaphoreTaken
      == 0] = Furuta_Model_B.sf_omega_2_ctrl.y;
    Furuta_Model_DW.RateTransition8_ActiveBufIdx = (int8_T)
      (Furuta_Model_DW.RateTransition8_semaphoreTaken == 0);

    /* Gain: '<S15>/ms->s' incorporates:
     *  Constant: '<S15>/tau[ms}'
     */
    Furuta_Model_B.mss = Furuta_Model_P.mss_Gain * Furuta_Model_P.taums_Value;
  }

  /* Sum: '<S15>/Sum1' */
  Furuta_Model_B.Sum1_i = Furuta_Model_B.NormalStrom - Furuta_Model_B.Integrator;

  /* Product: '<S15>/Product' */
  Furuta_Model_B.Product_k = Furuta_Model_B.Sum1_i / Furuta_Model_B.mss;
  if (rtmIsMajorTimeStep(Furuta_Model_M) &&
      Furuta_Model_M->Timing.TaskCounters.TID[1] == 0) {
    /* MATLAB Function: '<Root>/safety_Function' incorporates:
     *  Constant: '<Root>/Sicherheitsbereich'
     */
    if (Furuta_Model_B.Product3_h > Furuta_Model_B.upper_limit -
        Furuta_Model_P.Sicherheitsbereich_Value) {
      Furuta_Model_B.OutOfRange = 1.0;
    } else if (Furuta_Model_B.Product3_h < Furuta_Model_B.lower_limit +
               Furuta_Model_P.Sicherheitsbereich_Value) {
      Furuta_Model_B.OutOfRange = 1.0;
    } else {
      Furuta_Model_B.OutOfRange = ((Furuta_Model_B.y > 4.0840704496667311) ||
        (Furuta_Model_B.y < -4.0840704496667311));
    }

    /* End of MATLAB Function: '<Root>/safety_Function' */

    /* S-Function (dsmpb_triggereventport): '<S9>/Trigger Event Port S-Fcn' */

    /* Runnable function block */

    /* End of Outputs for S-Function (dsmpb_triggereventport): '<S9>/Trigger Event Port S-Fcn' */

    /* RateTransition: '<Root>/Acados_trigger_out' */
    Furuta_Model_B.Acados_trigger_out =
      Furuta_Model_DW.Acados_trigger_out_Buffer[Furuta_Model_DW.Acados_trigger_out_ActiveBufIdx];

    /* S-Function (dsmpb_triggereventport): '<S10>/Trigger Event Port S-Fcn' */

    /* Runnable function block */

    /* MATLAB Function: '<S14>/Interval Correction +-pi' */
    Furuta_Model_B.y_j = 0.0;
    while (fabs(Furuta_Model_B.y_j) > 3.1415926535897931) {
      t = Furuta_Model_B.y_j;
      if (rtIsNaN(t)) {
        s = (rtNaN);
      } else if (t < 0.0) {
        s = -1.0;
      } else {
        s = (t > 0.0);
      }

      if (s > 0.0) {
        Furuta_Model_B.y_j -= 6.2831853071795862;
      } else {
        Furuta_Model_B.y_j += 6.2831853071795862;
      }
    }

    /* End of MATLAB Function: '<S14>/Interval Correction +-pi' */

    /* Outputs for Enabled SubSystem: '<S14>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S36>/Enable'
     */
    if (rtsiIsModeUpdateTimeStep(&Furuta_Model_M->solverInfo)) {
      /* Constant: '<S14>/Pendel_Ctrl_Ena' */
      Furuta_Model_DW.EnabledSubsystem_MODE =
        (Furuta_Model_P.Pendel_Ctrl_Ena_Value > 0.0);
    }

    if (Furuta_Model_DW.EnabledSubsystem_MODE) {
      /* DiscretePulseGenerator: '<S36>/Pulse Generator1' */
      Furuta_Model_B.PulseGenerator1 = (Furuta_Model_DW.clockTickCounter_e <
        Furuta_Model_P.PulseGenerator1_Duty) &&
        (Furuta_Model_DW.clockTickCounter_e >= 0) ?
        Furuta_Model_P.PulseGenerator1_Amp : 0.0;

      /* DiscretePulseGenerator: '<S36>/Pulse Generator1' */
      if (Furuta_Model_DW.clockTickCounter_e >=
          Furuta_Model_P.PulseGenerator1_Period - 1.0) {
        Furuta_Model_DW.clockTickCounter_e = 0;
      } else {
        Furuta_Model_DW.clockTickCounter_e++;
      }
    }

    /* End of Outputs for SubSystem: '<S14>/Enabled Subsystem' */

    /* Outputs for Enabled SubSystem: '<S14>/Control' incorporates:
     *  EnablePort: '<S35>/Enable'
     */
    if (rtsiIsModeUpdateTimeStep(&Furuta_Model_M->solverInfo)) {
      if (Furuta_Model_B.PulseGenerator1 > 0.0) {
        if (!Furuta_Model_DW.Control_MODE) {
          /* SystemReset for Triggered SubSystem: '<S35>/DiscreteStateSpaceMethods' */
          /* SystemReset for MATLAB Function: '<S38>/LQR_enable' */
          Furuta_Model_DW.st = 1.0;

          /* SystemReset for MATLAB Function: '<S41>/MATLAB Function' */
          Furuta_Model_DW.st_not_empty_c = false;

          /* SystemReset for MATLAB Function: '<S41>/MATLAB Function2' */
          Furuta_Model_DW.st_not_empty = false;

          /* End of SystemReset for SubSystem: '<S35>/DiscreteStateSpaceMethods' */
          Furuta_Model_DW.Control_MODE = true;
        }
      } else if (Furuta_Model_DW.Control_MODE) {
        /* Disable for Gain: '<S35>/1//kmot' incorporates:
         *  Outport: '<S35>/I_ref[A]'
         */
        Furuta_Model_B.ukmot_e = Furuta_Model_P.I_refA_Y0_k;
        Furuta_Model_DW.Control_MODE = false;
      }
    }

    if (Furuta_Model_DW.Control_MODE) {
      /* DiscretePulseGenerator: '<S35>/Pulse Generator' */
      Furuta_Model_B.PulseGenerator_b = (Furuta_Model_DW.clockTickCounter_es <
        Furuta_Model_P.PulseGenerator_Duty) &&
        (Furuta_Model_DW.clockTickCounter_es >= 0) ?
        Furuta_Model_P.PulseGenerator_Amp : 0.0;

      /* DiscretePulseGenerator: '<S35>/Pulse Generator' */
      if (Furuta_Model_DW.clockTickCounter_es >=
          Furuta_Model_P.PulseGenerator_Period - 1.0) {
        Furuta_Model_DW.clockTickCounter_es = 0;
      } else {
        Furuta_Model_DW.clockTickCounter_es++;
      }

      /* Outputs for Triggered SubSystem: '<S35>/DiscreteStateSpaceMethods' incorporates:
       *  TriggerPort: '<S38>/Trigger'
       */
      zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                         &Furuta_Model_PrevZCX.DiscreteStateSpaceMethods_Trig_,
                         (Furuta_Model_B.PulseGenerator_b));
      if (zcEvent != NO_ZCEVENT) {
        /* SignalConversion generated from: '<S39>/ SFunction ' incorporates:
         *  MATLAB Function: '<S38>/LQR_enable'
         */
        Furuta_Model_B.TmpSignalConversionAtSFunctio_o[0] = 0.0;
        Furuta_Model_B.TmpSignalConversionAtSFunctio_o[1] = Furuta_Model_B.y_j;
        Furuta_Model_B.TmpSignalConversionAtSFunctio_o[2] = 0.0;
        Furuta_Model_B.TmpSignalConversionAtSFunctio_o[3] = 0.0;

        /* MATLAB Function: '<S38>/LQR_enable' */
        if (((Furuta_Model_B.TmpSignalConversionAtSFunctio_o[1] > 2.9) ||
             (Furuta_Model_B.TmpSignalConversionAtSFunctio_o[1] < -2.9)) &&
            (Furuta_Model_B.TmpSignalConversionAtSFunctio_o[3] < 5.0) &&
            (Furuta_Model_B.TmpSignalConversionAtSFunctio_o[3] > -5.0)) {
          Furuta_Model_DW.st = 2.0;
        }

        if ((Furuta_Model_DW.st == 2.0) &&
            (Furuta_Model_B.TmpSignalConversionAtSFunctio_o[1] < 2.4) &&
            (Furuta_Model_B.TmpSignalConversionAtSFunctio_o[1] > -2.4)) {
          Furuta_Model_DW.st = 3.0;
        }

        Furuta_Model_B.a = Furuta_Model_DW.st;

        /* SignalConversion generated from: '<S43>/ SFunction ' incorporates:
         *  MATLAB Function: '<S41>/MATLAB Function'
         */
        Furuta_Model_B.TmpSignalConversionAtSFunctio_p[0] = 0.0;
        Furuta_Model_B.TmpSignalConversionAtSFunctio_p[1] = Furuta_Model_B.y_j;
        Furuta_Model_B.TmpSignalConversionAtSFunctio_p[2] = 0.0;
        Furuta_Model_B.TmpSignalConversionAtSFunctio_p[3] = 0.0;

        /* MATLAB Function: '<S41>/MATLAB Function' incorporates:
         *  Constant: '<S41>/kv'
         *  Constant: '<S41>/n'
         */
        t = Furuta_Model_B.TmpSignalConversionAtSFunctio_p[3] * cos
          (Furuta_Model_B.TmpSignalConversionAtSFunctio_p[1]);
        if (rtIsNaN(t)) {
          t = (rtNaN);
        } else if (t < 0.0) {
          t = -1.0;
        } else {
          t = (t > 0.0);
        }

        s = -t;
        if (-t == 0.0) {
          s = 1.0;
        }

        if (!Furuta_Model_DW.st_not_empty_c) {
          Furuta_Model_DW.st_not_empty_c = true;
          s = -1.0;
        }

        Furuta_Model_B.tau_g = fabs(rt_powd_snf(fabs
          (Furuta_Model_B.TmpSignalConversionAtSFunctio_p[1]) -
          3.1415926535897931, Furuta_Model_P.n_Value)) * Furuta_Model_P.kv_Value
          * s;

        /* SignalConversion generated from: '<S44>/ SFunction ' incorporates:
         *  MATLAB Function: '<S41>/MATLAB Function2'
         */
        Furuta_Model_B.TmpSignalConversionAtSFunctionI[0] = 0.0;
        Furuta_Model_B.TmpSignalConversionAtSFunctionI[1] = Furuta_Model_B.y_j;
        Furuta_Model_B.TmpSignalConversionAtSFunctionI[2] = 0.0;
        Furuta_Model_B.TmpSignalConversionAtSFunctionI[3] = 0.0;

        /* MATLAB Function: '<S41>/MATLAB Function2' incorporates:
         *  Constant: '<S41>/KV'
         */
        t = Furuta_Model_B.TmpSignalConversionAtSFunctionI[3] * cos
          (Furuta_Model_B.TmpSignalConversionAtSFunctionI[1]);
        if (rtIsNaN(t)) {
          s = (rtNaN);
        } else if (t < 0.0) {
          s = -1.0;
        } else {
          s = (t > 0.0);
        }

        if (s == 0.0) {
          s = 1.0;
        }

        if (!Furuta_Model_DW.st_not_empty) {
          Furuta_Model_DW.st_not_empty = true;
          s = 1.0;
        }

        Furuta_Model_B.tau = fmin(5.0, fmax(-5.0,
          ((Furuta_Model_B.TmpSignalConversionAtSFunctionI[3] *
            Furuta_Model_B.TmpSignalConversionAtSFunctionI[3] * 0.00038265 +
            (1.0 - cos(Furuta_Model_B.TmpSignalConversionAtSFunctionI[1])) *
            0.17987616) - 0.35975232) * Furuta_Model_P.KV_Value)) * s;

        /* MultiPortSwitch: '<S41>/Multiport Switch1' incorporates:
         *  Constant: '<S41>/Upswing_Strategy'
         */
        switch ((int32_T)Furuta_Model_P.Upswing_Strategy_Value) {
         case 1:
          /* MultiPortSwitch: '<S41>/Multiport Switch1' */
          Furuta_Model_B.MultiportSwitch1_o = Furuta_Model_B.tau_g;
          break;

         case 2:
          /* MultiPortSwitch: '<S41>/Multiport Switch1' */
          Furuta_Model_B.MultiportSwitch1_o = Furuta_Model_B.tau;
          break;

         default:
          /* MultiPortSwitch: '<S41>/Multiport Switch1' incorporates:
           *  Constant: '<S41>/UpswingInit'
           */
          Furuta_Model_B.MultiportSwitch1_o = Furuta_Model_P.UpswingInit_Value;
          break;
        }

        /* End of MultiPortSwitch: '<S41>/Multiport Switch1' */

        /* SignalConversion generated from: '<S42>/ SFunction ' incorporates:
         *  MATLAB Function: '<S40>/MATLAB Function1'
         */
        Furuta_Model_B.TmpSignalConversionAtSFunctio_h[0] = 0.0;
        Furuta_Model_B.TmpSignalConversionAtSFunctio_h[1] = Furuta_Model_B.y_j;
        Furuta_Model_B.TmpSignalConversionAtSFunctio_h[2] = 0.0;
        Furuta_Model_B.TmpSignalConversionAtSFunctio_h[3] = 0.0;

        /* MATLAB Function: '<S40>/MATLAB Function1' */
        Furuta_Model_B.y_l[0] = 0.0;
        Furuta_Model_B.y_l[1] = 0.0;
        Furuta_Model_B.y_l[2] = 0.0;
        Furuta_Model_B.y_l[3] = 0.0;
        t = Furuta_Model_B.TmpSignalConversionAtSFunctio_h[0] /
          3.1415926535897931;
        tmp_0 = rtIsNaN(t);
        if (tmp_0) {
          s = (rtNaN);
        } else if (t < 0.0) {
          s = -1.0;
        } else {
          s = (t > 0.0);
        }

        s = rt_roundd_snf(t - s * 0.5);
        if (s < 128.0) {
          if (s >= -128.0) {
            tmp = (int8_T)s;
          } else {
            tmp = MIN_int8_T;
          }
        } else {
          tmp = MAX_int8_T;
        }

        i = tmp;
        if (i == 0) {
          s = 0.0;
        } else {
          s = fmod(i, 2.0);
          if (s == 0.0) {
            s = 0.0;
          } else if (i < 0) {
            s += 2.0;
          }
        }

        rest = t;
        if (i == 0) {
          if (t == 0.0) {
            rest = 0.0;
          }
        } else if (tmp_0 || rtIsInf(t)) {
          rest = (rtNaN);
        } else if (t == 0.0) {
          rest = 0.0 / (real_T)i;
        } else {
          rest = fmod(t, i);
          if (rest == 0.0) {
            rest = (real_T)i * 0.0;
          } else if ((t < 0.0) != (i < 0)) {
            rest += (real_T)i;
          }
        }

        if (s == 0.0) {
          Furuta_Model_B.y_l[0] = rest * 3.1415926535897931;
        } else if (i > 0) {
          Furuta_Model_B.y_l[0] = -(3.1415926535897931 - rest *
            3.1415926535897931);
        } else if (i < 0) {
          Furuta_Model_B.y_l[0] = 3.1415926535897931 - fabs(rest *
            3.1415926535897931);
        } else {
          Furuta_Model_B.y_l[0] = 0.0;
        }

        t = Furuta_Model_B.TmpSignalConversionAtSFunctio_h[1] /
          3.1415926535897931;
        tmp_0 = rtIsNaN(t);
        if (tmp_0) {
          s = (rtNaN);
        } else if (t < 0.0) {
          s = -1.0;
        } else {
          s = (t > 0.0);
        }

        s = rt_roundd_snf(t - s * 0.5);
        if (s < 128.0) {
          if (s >= -128.0) {
            tmp = (int8_T)s;
          } else {
            tmp = MIN_int8_T;
          }
        } else {
          tmp = MAX_int8_T;
        }

        i = tmp;
        if (i == 0) {
          s = 0.0;
        } else {
          s = fmod(i, 2.0);
          if (s == 0.0) {
            s = 0.0;
          } else if (i < 0) {
            s += 2.0;
          }
        }

        rest = t;
        if (i == 0) {
          if (t == 0.0) {
            rest = 0.0;
          }
        } else if (tmp_0 || rtIsInf(t)) {
          rest = (rtNaN);
        } else if (t == 0.0) {
          rest = 0.0 / (real_T)i;
        } else {
          rest = fmod(t, i);
          if (rest == 0.0) {
            rest = (real_T)i * 0.0;
          } else if ((t < 0.0) != (i < 0)) {
            rest += (real_T)i;
          }
        }

        if (s == 0.0) {
          Furuta_Model_B.y_l[1] = rest * 3.1415926535897931;
        } else if (i > 0) {
          Furuta_Model_B.y_l[1] = -(3.1415926535897931 - rest *
            3.1415926535897931);
        } else if (i < 0) {
          Furuta_Model_B.y_l[1] = 3.1415926535897931 - fabs(rest *
            3.1415926535897931);
        } else {
          Furuta_Model_B.y_l[1] = 0.0;
        }

        Furuta_Model_B.y_l[2] = Furuta_Model_B.TmpSignalConversionAtSFunctio_h[2];
        Furuta_Model_B.y_l[3] = Furuta_Model_B.TmpSignalConversionAtSFunctio_h[3];
        if (Furuta_Model_B.y_l[1] < 0.0) {
          Furuta_Model_B.y_l[1] += 3.1415926535897931;
        } else {
          Furuta_Model_B.y_l[1] -= 3.1415926535897931;
        }

        /* Gain: '<S40>/Zustandsregler' */
        s = Furuta_Model_P.Zustandsregler_Gain[0] * Furuta_Model_B.y_l[0];
        s += Furuta_Model_P.Zustandsregler_Gain[1] * Furuta_Model_B.y_l[1];
        s += Furuta_Model_P.Zustandsregler_Gain[2] * Furuta_Model_B.y_l[2];
        s += Furuta_Model_P.Zustandsregler_Gain[3] * Furuta_Model_B.y_l[3];

        /* Gain: '<S40>/Zustandsregler' */
        Furuta_Model_B.Zustandsregler = s;

        /* Gain: '<S40>/k1' */
        Furuta_Model_B.k1 = Furuta_Model_P.k1_Gain_o * Furuta_Model_B.y_l[0];

        /* Gain: '<S40>/k2' */
        Furuta_Model_B.k2 = Furuta_Model_P.k2_Gain_b * Furuta_Model_B.y_l[1];

        /* Gain: '<S40>/k3' */
        Furuta_Model_B.k3 = Furuta_Model_P.k3_Gain_l * Furuta_Model_B.y_l[2];

        /* Gain: '<S40>/k4' */
        Furuta_Model_B.k4 = Furuta_Model_P.k4_Gain_f * Furuta_Model_B.y_l[3];

        /* Sum: '<S40>/Add' */
        Furuta_Model_B.Add_p = ((Furuta_Model_B.k1 + Furuta_Model_B.k2) +
          Furuta_Model_B.k3) + Furuta_Model_B.k4;

        /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
         *  Constant: '<S40>/Stabilization_Ctrl'
         */
        switch ((int32_T)Furuta_Model_P.Stabilization_Ctrl_Value) {
         case 1:
          /* MultiPortSwitch: '<S40>/Multiport Switch1' */
          Furuta_Model_B.MultiportSwitch1_a = Furuta_Model_B.Zustandsregler;
          break;

         case 2:
          /* MultiPortSwitch: '<S40>/Multiport Switch1' */
          Furuta_Model_B.MultiportSwitch1_a = Furuta_Model_B.Add_p;
          break;

         default:
          /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
           *  Constant: '<S40>/StabilizationInit'
           */
          Furuta_Model_B.MultiportSwitch1_a =
            Furuta_Model_P.StabilizationInit_Value;
          break;
        }

        /* End of MultiPortSwitch: '<S40>/Multiport Switch1' */

        /* MultiPortSwitch: '<S38>/Multiport Switch1' */
        switch ((int32_T)Furuta_Model_B.a) {
         case 1:
          /* MultiPortSwitch: '<S38>/Multiport Switch1' */
          Furuta_Model_B.MultiportSwitch1_m = Furuta_Model_B.MultiportSwitch1_o;
          break;

         case 2:
          /* MultiPortSwitch: '<S38>/Multiport Switch1' */
          Furuta_Model_B.MultiportSwitch1_m = Furuta_Model_B.MultiportSwitch1_a;
          break;

         default:
          /* MultiPortSwitch: '<S38>/Multiport Switch1' incorporates:
           *  Constant: '<S38>/Constant'
           */
          Furuta_Model_B.MultiportSwitch1_m = Furuta_Model_P.Constant_Value_e;
          break;
        }

        /* End of MultiPortSwitch: '<S38>/Multiport Switch1' */

        /* Saturate: '<S38>/Saturation' */
        t = Furuta_Model_B.MultiportSwitch1_m;
        s = Furuta_Model_P.Saturation_LowerSat_d;
        rest = Furuta_Model_P.Saturation_UpperSat_e;
        if (t > rest) {
          /* Saturate: '<S38>/Saturation' */
          Furuta_Model_B.Saturation = rest;
        } else if (t < s) {
          /* Saturate: '<S38>/Saturation' */
          Furuta_Model_B.Saturation = s;
        } else {
          /* Saturate: '<S38>/Saturation' */
          Furuta_Model_B.Saturation = t;
        }

        /* End of Saturate: '<S38>/Saturation' */
      }

      /* End of Outputs for SubSystem: '<S35>/DiscreteStateSpaceMethods' */

      /* Gain: '<S35>/1//kmot' */
      Furuta_Model_B.ukmot_e = Furuta_Model_P.ukmot_Gain_h *
        Furuta_Model_B.Saturation;
    }

    /* End of Outputs for SubSystem: '<S14>/Control' */

    /* Switch: '<S14>/Switch2' */
    if (Furuta_Model_B.PulseGenerator1 > Furuta_Model_P.Switch2_Threshold) {
      /* Switch: '<S14>/Switch2' */
      Furuta_Model_B.Switch2 = Furuta_Model_B.ukmot_e;
    } else {
      /* Switch: '<S14>/Switch2' incorporates:
       *  Constant: '<S14>/Constant3'
       */
      Furuta_Model_B.Switch2 = Furuta_Model_P.Constant3_Value;
    }

    /* End of Switch: '<S14>/Switch2' */
  }

  /* user code (Output function Trailer for TID0) */
  if (rtmIsMajorTimeStep(Furuta_Model_M)) {
    /* Function module access point of system <Root>    */
    ap_exit_Furuta_Model_SIDRoot_TID1();
  }
}

/* Model update function */
void Furuta_Model_update(void)
{
  if (rtmIsMajorTimeStep(Furuta_Model_M)) {
    rt_ertODEUpdateContinuousStates(&Furuta_Model_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Furuta_Model_M->Timing.clockTick0)) {
    ++Furuta_Model_M->Timing.clockTickH0;
  }

  Furuta_Model_M->Timing.t[0] = rtsiGetSolverStopTime
    (&Furuta_Model_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.0001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.0001, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    Furuta_Model_M->Timing.clockTick1++;
    if (!Furuta_Model_M->Timing.clockTick1) {
      Furuta_Model_M->Timing.clockTickH1++;
    }
  }

  rate_scheduler();
}

/* Derivatives for root system: '<Root>' */
void Furuta_Model_derivatives(void)
{
  XDot_Furuta_Model_T *_rtXdot;
  boolean_T lsat;
  boolean_T usat;
  _rtXdot = ((XDot_Furuta_Model_T *) Furuta_Model_M->derivs);

  /* Derivatives for Integrator: '<S15>/Integrator' */
  _rtXdot->Integrator_CSTATE = Furuta_Model_B.Product_k;

  /* Derivatives for Enabled SubSystem: '<Root>/getRange' */
  if (Furuta_Model_DW.getRange_MODE) {
    /* Derivatives for Enabled SubSystem: '<S16>/Rampenfunktion' */
    if (Furuta_Model_DW.Rampenfunktion_MODE) {
      /* Derivatives for Integrator: '<S46>/Integrator1' */
      _rtXdot->Integrator1_CSTATE = Furuta_Model_B.Step1;
    } else {
      ((XDot_Furuta_Model_T *) Furuta_Model_M->derivs)->Integrator1_CSTATE = 0.0;
    }

    /* End of Derivatives for SubSystem: '<S16>/Rampenfunktion' */
  } else {
    ((XDot_Furuta_Model_T *) Furuta_Model_M->derivs)->Integrator1_CSTATE = 0.0;
  }

  /* End of Derivatives for SubSystem: '<Root>/getRange' */

  /* Derivatives for Enabled SubSystem: '<Root>/CurrentCtrl1' */
  if (Furuta_Model_DW.CurrentCtrl1_MODE) {
    /* Derivatives for Integrator: '<S4>/Integrator' */
    lsat = (Furuta_Model_X.Integrator_CSTATE_e <=
            Furuta_Model_P.Integrator_LowerSat);
    usat = (Furuta_Model_X.Integrator_CSTATE_e >=
            Furuta_Model_P.Integrator_UpperSat);
    if (((!lsat) && (!usat)) || (lsat && (Furuta_Model_B.Product1 > 0.0)) ||
        (usat && (Furuta_Model_B.Product1 < 0.0))) {
      _rtXdot->Integrator_CSTATE_e = Furuta_Model_B.Product1;
    } else {
      /* in saturation */
      _rtXdot->Integrator_CSTATE_e = 0.0;
    }

    /* End of Derivatives for Integrator: '<S4>/Integrator' */
  } else {
    ((XDot_Furuta_Model_T *) Furuta_Model_M->derivs)->Integrator_CSTATE_e = 0.0;
  }

  /* End of Derivatives for SubSystem: '<Root>/CurrentCtrl1' */
}

/* Model initialize function */
void Furuta_Model_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Furuta_Model_M, 0,
                sizeof(RT_MODEL_Furuta_Model_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Furuta_Model_M->solverInfo,
                          &Furuta_Model_M->Timing.simTimeStep);
    rtsiSetTPtr(&Furuta_Model_M->solverInfo, &rtmGetTPtr(Furuta_Model_M));
    rtsiSetStepSizePtr(&Furuta_Model_M->solverInfo,
                       &Furuta_Model_M->Timing.stepSize0);
    rtsiSetdXPtr(&Furuta_Model_M->solverInfo, &Furuta_Model_M->derivs);
    rtsiSetContStatesPtr(&Furuta_Model_M->solverInfo, (real_T **)
                         &Furuta_Model_M->contStates);
    rtsiSetNumContStatesPtr(&Furuta_Model_M->solverInfo,
      &Furuta_Model_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&Furuta_Model_M->solverInfo,
      &Furuta_Model_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&Furuta_Model_M->solverInfo,
      &Furuta_Model_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&Furuta_Model_M->solverInfo,
      &Furuta_Model_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&Furuta_Model_M->solverInfo, (&rtmGetErrorStatus
      (Furuta_Model_M)));
    rtsiSetRTModelPtr(&Furuta_Model_M->solverInfo, Furuta_Model_M);
  }

  rtsiSetSimTimeStep(&Furuta_Model_M->solverInfo, MAJOR_TIME_STEP);
  Furuta_Model_M->intgData.y = Furuta_Model_M->odeY;
  Furuta_Model_M->intgData.f[0] = Furuta_Model_M->odeF[0];
  Furuta_Model_M->intgData.f[1] = Furuta_Model_M->odeF[1];
  Furuta_Model_M->intgData.f[2] = Furuta_Model_M->odeF[2];
  Furuta_Model_M->intgData.f[3] = Furuta_Model_M->odeF[3];
  Furuta_Model_M->contStates = ((X_Furuta_Model_T *) &Furuta_Model_X);
  rtsiSetSolverData(&Furuta_Model_M->solverInfo, (void *)
                    &Furuta_Model_M->intgData);
  rtsiSetIsMinorTimeStepWithModeChange(&Furuta_Model_M->solverInfo, false);
  rtsiSetSolverName(&Furuta_Model_M->solverInfo,"ode4");
  Furuta_Model_M->solverInfoPtr = (&Furuta_Model_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Furuta_Model_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "Furuta_Model_M points to
       static memory which is guaranteed to be non-NULL" */
    Furuta_Model_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Furuta_Model_M->Timing.sampleTimes =
      (&Furuta_Model_M->Timing.sampleTimesArray[0]);
    Furuta_Model_M->Timing.offsetTimes =
      (&Furuta_Model_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Furuta_Model_M->Timing.sampleTimes[0] = (0.0);
    Furuta_Model_M->Timing.sampleTimes[1] = (0.0001);
    Furuta_Model_M->Timing.sampleTimes[2] = (0.0025);

    /* task offsets */
    Furuta_Model_M->Timing.offsetTimes[0] = (0.0);
    Furuta_Model_M->Timing.offsetTimes[1] = (0.0);
    Furuta_Model_M->Timing.offsetTimes[2] = (0.0);
  }

  rtmSetTPtr(Furuta_Model_M, &Furuta_Model_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Furuta_Model_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    mdlSampleHits[2] = 1;
    Furuta_Model_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Furuta_Model_M, -1);
  Furuta_Model_M->Timing.stepSize0 = 0.0001;
  Furuta_Model_M->Timing.stepSize3 = 2.3283064365386963E-10;
  Furuta_Model_M->solverInfoPtr = (&Furuta_Model_M->solverInfo);
  Furuta_Model_M->Timing.stepSize = (0.0001);
  rtsiSetFixedStepSize(&Furuta_Model_M->solverInfo, 0.0001);
  rtsiSetSolverMode(&Furuta_Model_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) memset(((void *) &Furuta_Model_B), 0,
                sizeof(B_Furuta_Model_T));

  /* states (continuous) */
  {
    (void) memset((void *)&Furuta_Model_X, 0,
                  sizeof(X_Furuta_Model_T));
  }

  /* states (dwork) */
  (void) memset((void *)&Furuta_Model_DW, 0,
                sizeof(DW_Furuta_Model_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &Furuta_Model_M->NonInlinedSFcns.sfcnInfo;
    Furuta_Model_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(Furuta_Model_M)));
    Furuta_Model_M->Sizes.numSampTimes = (6);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &Furuta_Model_M->Sizes.numSampTimes);
    Furuta_Model_M->NonInlinedSFcns.taskTimePtrs[0] = (&rtmGetTPtr
      (Furuta_Model_M)[0]);
    Furuta_Model_M->NonInlinedSFcns.taskTimePtrs[1] = (&rtmGetTPtr
      (Furuta_Model_M)[1]);
    Furuta_Model_M->NonInlinedSFcns.taskTimePtrs[2] = (&rtmGetTPtr
      (Furuta_Model_M)[2]);
    Furuta_Model_M->NonInlinedSFcns.taskTimePtrs[3] = (&rtmGetTPtr
      (Furuta_Model_M)[3]);
    Furuta_Model_M->NonInlinedSFcns.taskTimePtrs[4] = (&rtmGetTPtr
      (Furuta_Model_M)[4]);
    Furuta_Model_M->NonInlinedSFcns.taskTimePtrs[5] = (&rtmGetTPtr
      (Furuta_Model_M)[5]);
    rtssSetTPtrPtr(sfcnInfo,Furuta_Model_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Furuta_Model_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Furuta_Model_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(Furuta_Model_M));
    rtssSetStepSizePtr(sfcnInfo, &Furuta_Model_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(Furuta_Model_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Furuta_Model_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &Furuta_Model_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &Furuta_Model_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &Furuta_Model_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &Furuta_Model_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Furuta_Model_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Furuta_Model_M->solverInfoPtr);
  }

  Furuta_Model_M->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&Furuta_Model_M->NonInlinedSFcns.childSFunctions[0], 0,
                  1*sizeof(SimStruct));
    Furuta_Model_M->childSfunctions =
      (&Furuta_Model_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    Furuta_Model_M->childSfunctions[0] =
      (&Furuta_Model_M->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: Furuta_Model/<S23>/S-Function1 (acados_solver_sfunction_furuta) */
    {
      SimStruct *rts = Furuta_Model_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = Furuta_Model_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = Furuta_Model_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = Furuta_Model_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Furuta_Model_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Furuta_Model_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Furuta_Model_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Furuta_Model_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Furuta_Model_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Furuta_Model_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Furuta_Model_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &Furuta_Model_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 8);
        ssSetPortInfoForInputs(rts,
          &Furuta_Model_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &Furuta_Model_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Furuta_Model_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        ssSetInputPortUnit(rts, 6, 0);
        ssSetInputPortUnit(rts, 7, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Furuta_Model_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);
        ssSetInputPortIsContinuousQuantity(rts, 6, 0);
        ssSetInputPortIsContinuousQuantity(rts, 7, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Furuta_Model_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &Furuta_Model_B.RateTransition5;
          sfcnUPtrs[1] = &Furuta_Model_B.RateTransition6;
          sfcnUPtrs[2] = &Furuta_Model_B.RateTransition7;
          sfcnUPtrs[3] = &Furuta_Model_B.RateTransition8;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 4);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Furuta_Model_M->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = &Furuta_Model_B.RateTransition5;
          sfcnUPtrs[1] = &Furuta_Model_B.RateTransition6;
          sfcnUPtrs[2] = &Furuta_Model_B.RateTransition7;
          sfcnUPtrs[3] = &Furuta_Model_B.RateTransition8;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 4);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Furuta_Model_M->NonInlinedSFcns.Sfcn0.UPtrs2;

          {
            int_T i1;
            const real_T *u2 = Furuta_Model_B.lbu;
            for (i1=0; i1 < 10; i1++) {
              sfcnUPtrs[i1] = &u2[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 10);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Furuta_Model_M->NonInlinedSFcns.Sfcn0.UPtrs3;

          {
            int_T i1;
            const real_T *u3 = Furuta_Model_B.ubu;
            for (i1=0; i1 < 10; i1++) {
              sfcnUPtrs[i1] = &u3[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 10);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Furuta_Model_M->NonInlinedSFcns.Sfcn0.UPtrs4;
          sfcnUPtrs[0] = &Furuta_Model_B.reset_acados;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidthAsInt(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Furuta_Model_M->NonInlinedSFcns.Sfcn0.UPtrs5;

          {
            int_T i1;
            const real_T *u5 = Furuta_Model_B.Gain1_l;
            for (i1=0; i1 < 44; i1++) {
              sfcnUPtrs[i1] = &u5[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidthAsInt(rts, 5, 44);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Furuta_Model_M->NonInlinedSFcns.Sfcn0.UPtrs6;

          {
            int_T i1;
            const real_T *u6 = Furuta_Model_B.Gain_m;
            for (i1=0; i1 < 10; i1++) {
              sfcnUPtrs[i1] = &u6[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidthAsInt(rts, 6, 10);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Furuta_Model_M->NonInlinedSFcns.Sfcn0.UPtrs7;
          sfcnUPtrs[0] = &Furuta_Model_B.y_h;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidthAsInt(rts, 7, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Furuta_Model_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &Furuta_Model_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 8);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Furuta_Model_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        ssSetOutputPortUnit(rts, 6, 0);
        ssSetOutputPortUnit(rts, 7, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Furuta_Model_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 3, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 4, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 5, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 6, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 7, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &Furuta_Model_B.u));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidthAsInt(rts, 1, 10);
          ssSetOutputPortSignal(rts, 1, ((real_T *) Furuta_Model_B.SFunction1_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidthAsInt(rts, 2, 44);
          ssSetOutputPortSignal(rts, 2, ((real_T *) Furuta_Model_B.SFunction1_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidthAsInt(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &Furuta_Model_B.SFunction1_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidthAsInt(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &Furuta_Model_B.SFunction1_o5));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidthAsInt(rts, 5, 4);
          ssSetOutputPortSignal(rts, 5, ((real_T *) Furuta_Model_B.SFunction1_o6));
        }

        /* port 6 */
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidthAsInt(rts, 6, 1);
          ssSetOutputPortSignal(rts, 6, ((real_T *)
            &Furuta_Model_B.SFunction1_o7));
        }

        /* port 7 */
        {
          _ssSetOutputPortNumDimensions(rts, 7, 1);
          ssSetOutputPortWidthAsInt(rts, 7, 1);
          ssSetOutputPortSignal(rts, 7, ((real_T *)
            &Furuta_Model_B.SFunction1_o8));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function1");
      ssSetPath(rts, "Furuta_Model/Acados/Solver/S-Function1");
      ssSetRTModel(rts,Furuta_Model_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* registration */
      acados_solver_sfunction_furuta(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 3;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 1);
      _ssSetInputPortConnected(rts, 6, 1);
      _ssSetInputPortConnected(rts, 7, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortConnected(rts, 6, 1);
      _ssSetOutputPortConnected(rts, 7, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);
      _ssSetOutputPortBeingMerged(rts, 6, 0);
      _ssSetOutputPortBeingMerged(rts, 7, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
    }
  }

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    Furuta_Model_rti_init_trc_pointers();
  }

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  Furuta_Model_DW.clockTickCounter = 0;

  /* Start for Triggered SubSystem: '<Root>/Encoder_Chan1_SubSys' */
  /* Start for S-Function (dsmpb_datainport): '<S32>/Data Inport S-Fcn' */
  Furuta_Model_B.SpeedRotary_b = 0;
  Furuta_Model_B.PositionRotary_e = 0;
  Furuta_Model_B.PositionValid_o = 0;

  /* End of Start for SubSystem: '<Root>/Encoder_Chan1_SubSys' */

  /* Start for Enabled SubSystem: '<Root>/getRange' */
  Furuta_Model_DW.getRange_MODE = false;

  /* Start for Enabled SubSystem: '<S16>/Rampenfunktion' */
  Furuta_Model_DW.Rampenfunktion_MODE = false;

  /* End of Start for SubSystem: '<S16>/Rampenfunktion' */
  /* End of Start for SubSystem: '<Root>/getRange' */

  /* Start for Triggered SubSystem: '<Root>/Encoder_Chan2_SubSys' */
  /* Start for S-Function (dsmpb_datainport): '<S33>/Data Inport S-Fcn' */
  Furuta_Model_B.SpeedRotary = 0;
  Furuta_Model_B.PositionRotary = 0;
  Furuta_Model_B.PositionValid = 0;

  /* End of Start for SubSystem: '<Root>/Encoder_Chan2_SubSys' */

  /* Start for DiscretePulseGenerator: '<S3>/Pulse Generator' */
  Furuta_Model_DW.clockTickCounter_d = 0;

  /* Start for S-Function (dsmpb_triggereventport): '<S12>/Trigger Event Port S-Fcn' incorporates:
   *  SubSystem: '<Root>/Acados'
   */
  Furuta_Model_Acados_Start();

  /* End of Start for S-Function (dsmpb_triggereventport): '<S12>/Trigger Event Port S-Fcn' */

  /* Start for RateTransition: '<Root>/I_ref Acados' */
  Furuta_Model_B.I_refAcados = Furuta_Model_P.I_refAcados_InitialCondition;

  /* Start for Enabled SubSystem: '<Root>/CurrentCtrl1' */
  Furuta_Model_DW.CurrentCtrl1_MODE = false;

  /* End of Start for SubSystem: '<Root>/CurrentCtrl1' */

  /* Start for RateTransition: '<Root>/acados_on' */
  Furuta_Model_B.acados_on = Furuta_Model_P.acados_on_InitialCondition;

  /* Start for Enabled SubSystem: '<Root>/Breaker' */
  Furuta_Model_DW.Breaker_MODE = false;

  /* End of Start for SubSystem: '<Root>/Breaker' */

  /* Start for S-Function (dsmpb_datainport): '<S5>/Data Inport S-Fcn' */
  Furuta_Model_B.Voltage = 0;

  /* Start for Enabled SubSystem: '<S14>/Enabled Subsystem' */
  Furuta_Model_DW.EnabledSubsystem_MODE = false;

  /* Start for DiscretePulseGenerator: '<S36>/Pulse Generator1' */
  Furuta_Model_DW.clockTickCounter_e = 0;

  /* End of Start for SubSystem: '<S14>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S14>/Control' */
  Furuta_Model_DW.Control_MODE = false;

  /* Start for DiscretePulseGenerator: '<S35>/Pulse Generator' */
  Furuta_Model_DW.clockTickCounter_es = 0;

  /* End of Start for SubSystem: '<S14>/Control' */
  Furuta_Model_PrevZCX.DiscreteStateSpaceMethods_Tri_g = UNINITIALIZED_ZCSIG;
  Furuta_Model_PrevZCX.Encoder_Chan1_SubSys_Trig_ZCE = UNINITIALIZED_ZCSIG;
  Furuta_Model_PrevZCX.Encoder_Chan2_SubSys_Trig_ZCE = UNINITIALIZED_ZCSIG;
  Furuta_Model_PrevZCX.DiscreteStateSpaceMethods_Trig_ = UNINITIALIZED_ZCSIG;

  {
    int32_T i;

    /* InitializeConditions for Integrator: '<S15>/Integrator' */
    Furuta_Model_X.Integrator_CSTATE = Furuta_Model_P.Integrator_IC_b;

    /* InitializeConditions for RateTransition: '<Root>/I_ref Acados' */
    Furuta_Model_DW.I_refAcados_Buffer[0] =
      Furuta_Model_P.I_refAcados_InitialCondition;

    /* InitializeConditions for RateTransition: '<Root>/acados_on' */
    Furuta_Model_DW.acados_on_Buffer[0] =
      Furuta_Model_P.acados_on_InitialCondition;

    /* InitializeConditions for RateTransition: '<Root>/Counter' */
    Furuta_Model_DW.Counter_Buffer[0] = Furuta_Model_P.Counter_InitialCondition;

    /* InitializeConditions for RateTransition: '<Root>/Measure' */
    for (i = 0; i < 59; i++) {
      Furuta_Model_DW.Measure_Buffer[i] =
        Furuta_Model_P.Measure_InitialCondition;
    }

    /* End of InitializeConditions for RateTransition: '<Root>/Measure' */

    /* InitializeConditions for RateTransition: '<Root>/Rate Transition5' */
    Furuta_Model_DW.RateTransition5_Buffer[0] =
      Furuta_Model_P.RateTransition5_InitialConditio;

    /* InitializeConditions for RateTransition: '<Root>/Rate Transition6' */
    Furuta_Model_DW.RateTransition6_Buffer[0] =
      Furuta_Model_P.RateTransition6_InitialConditio;

    /* InitializeConditions for RateTransition: '<Root>/Rate Transition7' */
    Furuta_Model_DW.RateTransition7_Buffer[0] =
      Furuta_Model_P.RateTransition7_InitialConditio;

    /* InitializeConditions for RateTransition: '<Root>/Rate Transition8' */
    Furuta_Model_DW.RateTransition8_Buffer[0] =
      Furuta_Model_P.RateTransition8_InitialConditio;

    /* InitializeConditions for RateTransition: '<Root>/Acados_trigger_out' */
    Furuta_Model_DW.Acados_trigger_out_Buffer[0] =
      Furuta_Model_P.Acados_trigger_out_InitialCondi;

    /* SystemInitialize for Triggered SubSystem: '<Root>/Encoder_Chan1_SubSys' */
    /* InitializeConditions for DiscreteTransferFcn: '<S7>/DT1 Transfer Fcn' */
    Furuta_Model_DW.DT1TransferFcn_states_d =
      Furuta_Model_P.DT1TransferFcn_InitialStates;

    /* SystemInitialize for Product: '<S7>/Product3' incorporates:
     *  Outport: '<S7>/Theta-1 rad'
     */
    Furuta_Model_B.Product3_h = Furuta_Model_P.Theta1rad_Y0;

    /* SystemInitialize for DiscreteTransferFcn: '<S7>/DT1 Transfer Fcn' incorporates:
     *  Outport: '<S7>/Theta-1_dot[rad//s]'
     */
    Furuta_Model_B.DT1TransferFcn_k = Furuta_Model_P.Theta1_dotrads_Y0;

    /* End of SystemInitialize for SubSystem: '<Root>/Encoder_Chan1_SubSys' */

    /* SystemInitialize for Triggered SubSystem: '<S3>/DiscreteStateSpaceMethods' */
    /* SystemInitialize for MATLAB Function: '<S28>/LQR_aktiv' */
    Furuta_Model_DW.einzugsbereich = 0.0;

    /* SystemInitialize for Saturate: '<S28>/Saturation' incorporates:
     *  Outport: '<S28>/Drehmoment'
     */
    Furuta_Model_B.Saturation_h = Furuta_Model_P.Drehmoment_Y0;

    /* SystemInitialize for Outport: '<S28>/LQR_active' */
    Furuta_Model_B.aktiv = Furuta_Model_P.LQR_active_Y0;

    /* End of SystemInitialize for SubSystem: '<S3>/DiscreteStateSpaceMethods' */

    /* SystemInitialize for S-Function (dsmpb_triggereventport): '<S12>/Trigger Event Port S-Fcn' incorporates:
     *  SubSystem: '<Root>/Acados'
     */
    Furuta_Model_Acados_Init();

    /* End of SystemInitialize for S-Function (dsmpb_triggereventport): '<S12>/Trigger Event Port S-Fcn' */

    /* SystemInitialize for Enabled SubSystem: '<Root>/getRange' */
    /* SystemInitialize for MATLAB Function: '<S16>/MATLAB Function' */
    Furuta_Model_DW.status = 1.0;
    Furuta_Model_DW.lower = -6.2831853071795862;
    Furuta_Model_DW.upper = 6.2831853071795862;

    /* SystemInitialize for Enabled SubSystem: '<S16>/Rampenfunktion' */
    /* InitializeConditions for Integrator: '<S46>/Integrator1' */
    Furuta_Model_X.Integrator1_CSTATE = Furuta_Model_P.Integrator1_IC;

    /* SystemInitialize for Integrator: '<S46>/Integrator1' incorporates:
     *  Outport: '<S46>/Output'
     */
    Furuta_Model_B.Integrator1 = Furuta_Model_P.Output_Y0;

    /* End of SystemInitialize for SubSystem: '<S16>/Rampenfunktion' */

    /* SystemInitialize for Switch: '<S16>/Switch1' incorporates:
     *  Outport: '<S16>/y'
     */
    Furuta_Model_B.Switch1_f = Furuta_Model_P.y_Y0_b;

    /* SystemInitialize for Outport: '<S16>/upper_limit' */
    Furuta_Model_B.upper_limit = Furuta_Model_P.upper_limit_Y0;

    /* SystemInitialize for Outport: '<S16>/lower_limit' */
    Furuta_Model_B.lower_limit = Furuta_Model_P.lower_limit_Y0;

    /* SystemInitialize for Outport: '<S16>/Offset_Theta1' */
    Furuta_Model_B.mitte = Furuta_Model_P.Offset_Theta1_Y0;

    /* End of SystemInitialize for SubSystem: '<Root>/getRange' */

    /* SystemInitialize for MATLAB Function: '<Root>/setZero' */
    Furuta_Model_DW.offset_not_empty = false;

    /* SystemInitialize for Triggered SubSystem: '<Root>/Encoder_Chan2_SubSys' */
    /* InitializeConditions for DiscreteTransferFcn: '<S8>/DT1 Transfer Fcn' */
    Furuta_Model_DW.DT1TransferFcn_states =
      Furuta_Model_P.DT1TransferFcn_InitialStates_l;

    /* SystemInitialize for Product: '<S8>/Product3' incorporates:
     *  Outport: '<S8>/Theta-2 rad'
     */
    Furuta_Model_B.Product3 = Furuta_Model_P.Theta2rad_Y0;

    /* SystemInitialize for DiscreteTransferFcn: '<S8>/DT1 Transfer Fcn' incorporates:
     *  Outport: '<S8>/Theta-2_dot[rad//s]'
     */
    Furuta_Model_B.DT1TransferFcn = Furuta_Model_P.Theta2_dotrads_Y0;

    /* End of SystemInitialize for SubSystem: '<Root>/Encoder_Chan2_SubSys' */

    /* SystemInitialize for Enabled SubSystem: '<Root>/CurrentCtrl1' */
    /* InitializeConditions for Integrator: '<S4>/Integrator' */
    Furuta_Model_X.Integrator_CSTATE_e = Furuta_Model_P.Integrator_IC;

    /* SystemInitialize for Sum: '<S4>/Sum' incorporates:
     *  Outport: '<S4>/ua[V]'
     */
    Furuta_Model_B.Sum_i = Furuta_Model_P.uaV_Y0;

    /* End of SystemInitialize for SubSystem: '<Root>/CurrentCtrl1' */

    /* SystemInitialize for Enabled SubSystem: '<Root>/Breaker' */
    /* SystemInitialize for MATLAB Function: '<S2>/MATLAB Function' */
    Furuta_Model_DW.t_start_not_empty = false;

    /* SystemInitialize for Outport: '<S2>/out' */
    Furuta_Model_B.out = Furuta_Model_P.out_Y0;

    /* End of SystemInitialize for SubSystem: '<Root>/Breaker' */

    /* SystemInitialize for S-Function (dsmpb_triggereventport): '<S9>/Trigger Event Port S-Fcn' incorporates:
     *  SubSystem: '<Root>/Subsystem'
     */
    Furuta_Model_Subsystem_Init();

    /* End of SystemInitialize for S-Function (dsmpb_triggereventport): '<S9>/Trigger Event Port S-Fcn' */

    /* SystemInitialize for Enabled SubSystem: '<S14>/Enabled Subsystem' */
    /* SystemInitialize for DiscretePulseGenerator: '<S36>/Pulse Generator1' incorporates:
     *  Outport: '<S36>/Out1'
     */
    Furuta_Model_B.PulseGenerator1 = Furuta_Model_P.Out1_Y0;

    /* End of SystemInitialize for SubSystem: '<S14>/Enabled Subsystem' */

    /* SystemInitialize for Enabled SubSystem: '<S14>/Control' */
    /* SystemInitialize for Triggered SubSystem: '<S35>/DiscreteStateSpaceMethods' */
    /* SystemInitialize for MATLAB Function: '<S38>/LQR_enable' */
    Furuta_Model_DW.st = 1.0;

    /* SystemInitialize for MATLAB Function: '<S41>/MATLAB Function' */
    Furuta_Model_DW.st_not_empty_c = false;

    /* SystemInitialize for MATLAB Function: '<S41>/MATLAB Function2' */
    Furuta_Model_DW.st_not_empty = false;

    /* SystemInitialize for Saturate: '<S38>/Saturation' incorporates:
     *  Outport: '<S38>/Drehmoment'
     */
    Furuta_Model_B.Saturation = Furuta_Model_P.Drehmoment_Y0_j;

    /* End of SystemInitialize for SubSystem: '<S35>/DiscreteStateSpaceMethods' */

    /* SystemInitialize for Gain: '<S35>/1//kmot' incorporates:
     *  Outport: '<S35>/I_ref[A]'
     */
    Furuta_Model_B.ukmot_e = Furuta_Model_P.I_refA_Y0_k;

    /* End of SystemInitialize for SubSystem: '<S14>/Control' */
  }
}

/* Model terminate function */
void Furuta_Model_terminate(void)
{
  /* Terminate for S-Function (dsmpb_triggereventport): '<S12>/Trigger Event Port S-Fcn' incorporates:
   *  SubSystem: '<Root>/Acados'
   */
  Furuta_Model_Acados_Term();

  /* End of Terminate for S-Function (dsmpb_triggereventport): '<S12>/Trigger Event Port S-Fcn' */
}
