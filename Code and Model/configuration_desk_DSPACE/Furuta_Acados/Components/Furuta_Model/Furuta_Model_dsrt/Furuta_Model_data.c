/*
 * Furuta_Model_data.c
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

#include "Furuta_Model.h"

/* Block parameters (default storage) */
P_Furuta_Model_T Furuta_Model_P = {
  /* Variable: U_max
   * Referenced by:
   *   '<S23>/lbu'
   *   '<S23>/ubu'
   */
  0.45,

  /* Variable: u_guess
   * Referenced by: '<S23>/u_tra'
   */
  { 0.45, 0.45, 0.45, 0.45, -0.05160691138, -0.45, -0.45, -0.45, -0.45,
    0.337728643 },

  /* Variable: x_guess
   * Referenced by: '<S23>/x_tra'
   */
  { 0.0, 3.141592654, 0.0, 0.0, 0.0045121643, 3.138191348, 1.799345307,
    -1.355943179, 0.3102922875, 2.908323775, 12.99156628, -9.847209416,
    0.8585041569, 2.465590778, 14.15932351, -12.4591414, 1.359540066,
    1.985225075, 12.13460976, -12.33748102, 1.746442795, 1.558954467,
    8.640803885, -9.79757271, 1.995089299, 1.233054443, 4.514491498, -7.35088239,
    2.094997473, 0.9801224803, 0.6163773305, -6.079710747, 2.029045981,
    0.7478990037, -4.328484802, -6.291067717, 1.732174006, 0.4776182825,
    -11.72976444, -8.101352227, 1.425090673, 0.312266916, -3.593475566,
    -0.3973908122 },

  /* Computed Parameter: out_Y0
   * Referenced by: '<S2>/out'
   */
  0.0,

  /* Computed Parameter: Drehmoment_Y0
   * Referenced by: '<S28>/Drehmoment'
   */
  0.0,

  /* Computed Parameter: LQR_active_Y0
   * Referenced by: '<S28>/LQR_active'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S28>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S28>/Constant'
   */
  0.0,

  /* Expression: 0.4
   * Referenced by: '<S28>/Saturation'
   */
  0.4,

  /* Expression: -0.4
   * Referenced by: '<S28>/Saturation'
   */
  -0.4,

  /* Expression: 0.1
   * Referenced by: '<S30>/k1'
   */
  0.1,

  /* Expression: -1.3582
   * Referenced by: '<S30>/k2'
   */
  -1.3582,

  /* Expression: 0.0544
   * Referenced by: '<S30>/k3'
   */
  0.0544,

  /* Expression: -0.138
   * Referenced by: '<S30>/k4'
   */
  -0.138,

  /* Expression: 0
   * Referenced by: '<S4>/ua[V]'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/Integrator'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<S4>/Integrator'
   */
  10.0,

  /* Expression: -10
   * Referenced by: '<S4>/Integrator'
   */
  -10.0,

  /* Expression: 2
   * Referenced by: '<S4>/Kp[V//A]'
   */
  2.0,

  /* Expression: 10e-3
   * Referenced by: '<S4>/Tn'
   */
  0.01,

  /* Computed Parameter: Theta1rad_Y0
   * Referenced by: '<S7>/Theta-1 rad'
   */
  0.0,

  /* Computed Parameter: Theta1_dotrads_Y0
   * Referenced by: '<S7>/Theta-1_dot[rad//s]'
   */
  0.0,

  /* Expression: pi/180*2
   * Referenced by: '<S7>/CONST1'
   */
  0.034906585039886591,

  /* Expression: [50, -50]
   * Referenced by: '<S7>/DT1 Transfer Fcn'
   */
  { 50.0, -50.0 },

  /* Expression: [1, -0.9512]
   * Referenced by: '<S7>/DT1 Transfer Fcn'
   */
  { 1.0, -0.9512 },

  /* Expression: 0
   * Referenced by: '<S7>/DT1 Transfer Fcn'
   */
  0.0,

  /* Computed Parameter: Theta2rad_Y0
   * Referenced by: '<S8>/Theta-2 rad'
   */
  0.0,

  /* Computed Parameter: Theta2_dotrads_Y0
   * Referenced by: '<S8>/Theta-2_dot[rad//s]'
   */
  0.0,

  /* Expression: pi/180*2
   * Referenced by: '<S8>/CONST1'
   */
  0.034906585039886591,

  /* Expression: [50, -50]
   * Referenced by: '<S8>/DT1 Transfer Fcn'
   */
  { 50.0, -50.0 },

  /* Expression: [1, -0.9512]
   * Referenced by: '<S8>/DT1 Transfer Fcn'
   */
  { 1.0, -0.9512 },

  /* Expression: 0
   * Referenced by: '<S8>/DT1 Transfer Fcn'
   */
  0.0,

  /* Computed Parameter: y_Y0
   * Referenced by: '<S13>/y'
   */
  0.0,

  /* Computed Parameter: u_Y0
   * Referenced by: '<S23>/u'
   */
  0.0,

  /* Computed Parameter: Measure_Y0
   * Referenced by: '<S23>/Measure'
   */
  0.0,

  /* Computed Parameter: Counter_Y0
   * Referenced by: '<S23>/Counter'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S23>/reset_acados'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S23>/Gain1'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S23>/Gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/I_ref[A]'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Counter'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Measure'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/acados_on'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/acados on'
   */
  0.0,

  /* Expression: 0.4
   * Referenced by: '<S1>/0,4Nm'
   */
  0.4,

  /* Expression: -0.4
   * Referenced by: '<S1>/0,4Nm'
   */
  -0.4,

  /* Expression: 1/0.055
   * Referenced by: '<S1>/1//kmot'
   */
  18.181818181818183,

  /* Expression: 1
   * Referenced by: '<S1>/Gain'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S1>/x_out'
   */
  1.0,

  /* Computed Parameter: Drehmoment_Y0_j
   * Referenced by: '<S38>/Drehmoment'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<S41>/Upswing_Strategy'
   */
  3.0,

  /* Expression: 2
   * Referenced by: '<S41>/n'
   */
  2.0,

  /* Expression: 0.01298
   * Referenced by: '<S41>/kv'
   */
  0.01298,

  /* Expression: 0.405
   * Referenced by: '<S41>/KV'
   */
  0.405,

  /* Expression: 0
   * Referenced by: '<S41>/UpswingInit'
   */
  0.0,

  /* Expression: 3
   * Referenced by: '<S40>/Stabilization_Ctrl'
   */
  3.0,

  /* Expression: -[-0.0291, 0.7090, -0.0213, 0.0666]
   * Referenced by: '<S40>/Zustandsregler'
   */
  { 0.0291, -0.709, 0.0213, -0.0666 },

  /* Expression: 0.1
   * Referenced by: '<S40>/k1'
   */
  0.1,

  /* Expression: -1.3582
   * Referenced by: '<S40>/k2'
   */
  -1.3582,

  /* Expression: 0.0544
   * Referenced by: '<S40>/k3'
   */
  0.0544,

  /* Expression: -0.138
   * Referenced by: '<S40>/k4'
   */
  -0.138,

  /* Expression: 0
   * Referenced by: '<S40>/StabilizationInit'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S38>/Constant'
   */
  0.0,

  /* Expression: 0.4
   * Referenced by: '<S38>/Saturation'
   */
  0.4,

  /* Expression: -0.4
   * Referenced by: '<S38>/Saturation'
   */
  -0.4,

  /* Expression: 0
   * Referenced by: '<S35>/I_ref[A]'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S35>/Pulse Generator'
   */
  1.0,

  /* Computed Parameter: PulseGenerator_Period
   * Referenced by: '<S35>/Pulse Generator'
   */
  10.0,

  /* Computed Parameter: PulseGenerator_Duty
   * Referenced by: '<S35>/Pulse Generator'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<S35>/Pulse Generator'
   */
  0.0,

  /* Expression: 1/0.055
   * Referenced by: '<S35>/1//kmot'
   */
  18.181818181818183,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S36>/Out1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S36>/Pulse Generator1'
   */
  1.0,

  /* Computed Parameter: PulseGenerator1_Period
   * Referenced by: '<S36>/Pulse Generator1'
   */
  200000.0,

  /* Computed Parameter: PulseGenerator1_Duty
   * Referenced by: '<S36>/Pulse Generator1'
   */
  160000.0,

  /* Expression: 0
   * Referenced by: '<S36>/Pulse Generator1'
   */
  0.0,

  /* Computed Parameter: Output_Y0
   * Referenced by: '<S46>/Output'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S46>/Integrator1'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S46>/Step1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S46>/Step1'
   */
  0.0,

  /* Expression: 0.15
   * Referenced by: '<S46>/Step1'
   */
  0.15,

  /* Expression: [0]
   * Referenced by: '<S16>/y'
   */
  0.0,

  /* Computed Parameter: upper_limit_Y0
   * Referenced by: '<S16>/upper_limit'
   */
  0.0,

  /* Computed Parameter: lower_limit_Y0
   * Referenced by: '<S16>/lower_limit'
   */
  0.0,

  /* Computed Parameter: Offset_Theta1_Y0
   * Referenced by: '<S16>/Offset_Theta1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S16>/Constant'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Pulse Generator'
   */
  1.0,

  /* Computed Parameter: PulseGenerator_Period_l
   * Referenced by: '<Root>/Pulse Generator'
   */
  10.0,

  /* Computed Parameter: PulseGenerator_Duty_p
   * Referenced by: '<Root>/Pulse Generator'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<Root>/Pulse Generator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Integrator'
   */
  0.0,

  /* Expression: -0.015
   * Referenced by: '<Root>/Nullabgleich_Strommessung'
   */
  -0.015,

  /* Expression: -1
   * Referenced by: '<Root>/Gain'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Calibrate_Ena'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Switch1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/SetZeroTheta1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S3>/Pulse Generator'
   */
  1.0,

  /* Computed Parameter: PulseGenerator_Period_a
   * Referenced by: '<S3>/Pulse Generator'
   */
  10.0,

  /* Computed Parameter: PulseGenerator_Duty_pj
   * Referenced by: '<S3>/Pulse Generator'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<S3>/Pulse Generator'
   */
  0.0,

  /* Expression: 1/0.055
   * Referenced by: '<S3>/1//kmot'
   */
  18.181818181818183,

  /* Expression: 0
   * Referenced by: '<Root>/Enable_LQR'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/I_ref Acados'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/CurrentCtrl1_Ena'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<Root>/Gain1'
   */
  -1.0,

  /* Expression: 1/3
   * Referenced by: '<Root>/Normierung'
   */
  0.33333333333333331,

  /* Expression: 1
   * Referenced by: '<Root>/Constant2'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/DAC_Enable'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/acados_on'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Counter'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Measure'
   */
  0.0,

  /* Expression: 2.5
   * Referenced by: '<Root>/Normal->Strom'
   */
  2.5,

  /* Expression: 0
   * Referenced by: '<Root>/Rate Transition5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Rate Transition6'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Rate Transition7'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Rate Transition8'
   */
  0.0,

  /* Expression: 0.2
   * Referenced by: '<Root>/Sicherheitsbereich'
   */
  0.2,

  /* Expression: 1
   * Referenced by: '<S15>/tau[ms}'
   */
  1.0,

  /* Expression: 0.001
   * Referenced by: '<S15>/ms->s'
   */
  0.001,

  /* Expression: 0
   * Referenced by: '<Root>/Acados_trigger_out'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S14>/Constant3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S14>/Pendel_Ctrl_Ena'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S14>/Switch2'
   */
  0.0
};

/* Constant parameters (default storage) */
const ConstP_Furuta_Model_T Furuta_Model_ConstP = {
  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S23>/lbu'
   *   '<S23>/ubu'
   */
  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 }
};
