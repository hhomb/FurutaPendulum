/*
 * Furuta_Model.h
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

#ifndef RTW_HEADER_Furuta_Model_h_
#define RTW_HEADER_Furuta_Model_h_
#ifndef Furuta_Model_COMMON_INCLUDES_
#define Furuta_Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "Furuta_Model_types.h"
#include "Furuta_Model_dsmpbap.h"
#endif                                 /* Furuta_Model_COMMON_INCLUDES_ */

#include <stddef.h>
#include "rt_zcfcn.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include <string.h>
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals for system '<S13>/MATLAB Function' */
typedef struct {
  real_T y;                            /* '<S13>/MATLAB Function' */
} B_MATLABFunction_Furuta_Model_T;

/* Block states (default storage) for system '<S13>/MATLAB Function' */
typedef struct {
  real_T zahl;                         /* '<S13>/MATLAB Function' */
  boolean_T zahl_not_empty;            /* '<S13>/MATLAB Function' */
} DW_MATLABFunction_Furuta_Mode_T;

/* Block signals for system '<Root>/omega_1_ctrl' */
typedef struct {
  real_T y;                            /* '<Root>/omega_1_ctrl' */
} B_omega_1_ctrl_Furuta_Model_T;

/* Block signals (default storage) */
typedef struct {
  real_T Clock;                        /* '<Root>/Clock' */
  real_T PulseGenerator;               /* '<Root>/Pulse Generator' */
  real_T Integrator;                   /* '<S15>/Integrator' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T Switch1;                      /* '<Root>/Switch1' */
  real_T Add;                          /* '<Root>/Add' */
  real_T PulseGenerator_g;             /* '<S3>/Pulse Generator' */
  real_T ukmot;                        /* '<S3>/1//kmot' */
  real_T Enable_LQR;                   /* '<Root>/Enable_LQR' */
  real_T MultiportSwitch1;             /* '<Root>/Multiport Switch1' */
  real_T I_refAcados;                  /* '<Root>/I_ref Acados' */
  real_T Sum;                          /* '<Root>/Sum' */
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T Normierung;                   /* '<Root>/Normierung' */
  real_T DAC_Enable;                   /* '<Root>/DAC_Enable' */
  real_T Product;                      /* '<Root>/Product' */
  real_T acados_on;                    /* '<Root>/acados_on' */
  real_T Counter;                      /* '<Root>/Counter' */
  real_T Measure[59];                  /* '<Root>/Measure' */
  real_T Voltage;                      /* '<S5>/Data Inport S-Fcn' */
  real_T NormalStrom;                  /* '<Root>/Normal->Strom' */
  real_T Sum1_i;                       /* '<S15>/Sum1' */
  real_T mss;                          /* '<S15>/ms->s' */
  real_T Product_k;                    /* '<S15>/Product' */
  real_T Acados_trigger_out;           /* '<Root>/Acados_trigger_out' */
  real_T Switch2;                      /* '<S14>/Switch2' */
  real_T RateTransition5;              /* '<Root>/Rate Transition5' */
  real_T RateTransition6;              /* '<Root>/Rate Transition6' */
  real_T RateTransition7;              /* '<Root>/Rate Transition7' */
  real_T RateTransition8;              /* '<Root>/Rate Transition8' */
  real_T y;                            /* '<Root>/theta_2_ctrl' */
  real_T theta_1_out;                  /* '<Root>/setZero' */
  real_T OutOfRange;                   /* '<Root>/safety_Function' */
  real_T Switch1_f;                    /* '<S16>/Switch1' */
  real_T Integrator1;                  /* '<S46>/Integrator1' */
  real_T Step1;                        /* '<S46>/Step1' */
  real_T reset;                        /* '<S16>/MATLAB Function' */
  real_T upper_limit;                  /* '<S16>/MATLAB Function' */
  real_T lower_limit;                  /* '<S16>/MATLAB Function' */
  real_T mitte;                        /* '<S16>/MATLAB Function' */
  real_T y_j;                          /* '<S14>/Interval Correction +-pi' */
  real_T PulseGenerator1;              /* '<S36>/Pulse Generator1' */
  real_T PulseGenerator_b;             /* '<S35>/Pulse Generator' */
  real_T ukmot_e;                      /* '<S35>/1//kmot' */
  real_T MultiportSwitch1_o;           /* '<S41>/Multiport Switch1' */
  real_T Zustandsregler;               /* '<S40>/Zustandsregler' */
  real_T k1;                           /* '<S40>/k1' */
  real_T k2;                           /* '<S40>/k2' */
  real_T k3;                           /* '<S40>/k3' */
  real_T k4;                           /* '<S40>/k4' */
  real_T Add_p;                        /* '<S40>/Add' */
  real_T MultiportSwitch1_a;           /* '<S40>/Multiport Switch1' */
  real_T MultiportSwitch1_m;           /* '<S38>/Multiport Switch1' */
  real_T Saturation;                   /* '<S38>/Saturation' */
  real_T TmpSignalConversionAtSFunctionI[4];/* '<S41>/MATLAB Function2' */
  real_T tau;                          /* '<S41>/MATLAB Function2' */
  real_T TmpSignalConversionAtSFunctio_p[4];/* '<S41>/MATLAB Function' */
  real_T tau_g;                        /* '<S41>/MATLAB Function' */
  real_T TmpSignalConversionAtSFunctio_h[4];/* '<S40>/MATLAB Function1' */
  real_T y_l[4];                       /* '<S40>/MATLAB Function1' */
  real_T TmpSignalConversionAtSFunctio_o[4];/* '<S38>/LQR_enable' */
  real_T a;                            /* '<S38>/LQR_enable' */
  real_T Product_c;                    /* '<S1>/Product' */
  real_T u4Nm;                         /* '<S1>/0,4Nm' */
  real_T ukmot_b;                      /* '<S1>/1//kmot' */
  real_T Gain_h;                       /* '<S1>/Gain' */
  real_T x_out[4];                     /* '<S1>/x_out' */
  real_T OutportBufferForCounter;      /* '<S1>/Solver' */
  real_T OutportBufferForMeasure[59];  /* '<S1>/Solver' */
  real_T OutportBufferForacados_on;    /* '<S1>/acados on' */
  real_T lbu[10];                      /* '<S23>/lbu' */
  real_T ubu[10];                      /* '<S23>/ubu' */
  real_T reset_acados;                 /* '<S23>/reset_acados' */
  real_T x_tra[44];                    /* '<S23>/x_tra' */
  real_T Gain1_l[44];                  /* '<S23>/Gain1' */
  real_T u_tra[10];                    /* '<S23>/u_tra' */
  real_T Gain_m[10];                   /* '<S23>/Gain' */
  real_T u;                            /* '<S23>/S-Function1' */
  real_T SFunction1_o2[10];            /* '<S23>/S-Function1' */
  real_T SFunction1_o3[44];            /* '<S23>/S-Function1' */
  real_T SFunction1_o4;                /* '<S23>/S-Function1' */
  real_T SFunction1_o5;                /* '<S23>/S-Function1' */
  real_T SFunction1_o6[4];             /* '<S23>/S-Function1' */
  real_T SFunction1_o7;                /* '<S23>/S-Function1' */
  real_T SFunction1_o8;                /* '<S23>/S-Function1' */
  real_T OutportBufferForu;            /* '<S23>/security' */
  real_T control_out;                  /* '<S23>/security' */
  real_T y_h;                          /* '<S23>/Modulo' */
  real_T TmpSignalConversionAtSFunctio_j[63];/* '<Root>/Measurement_out' */
  real_T y_hc[63];                     /* '<Root>/Measurement_out' */
  real_T SpeedRotary;                  /* '<S33>/Data Inport S-Fcn' */
  real_T PositionRotary;               /* '<S33>/Data Inport S-Fcn' */
  real_T PositionValid;                /* '<S33>/Data Inport S-Fcn' */
  real_T Product3;                     /* '<S8>/Product3' */
  real_T DT1TransferFcn;               /* '<S8>/DT1 Transfer Fcn' */
  real_T SpeedRotary_b;                /* '<S32>/Data Inport S-Fcn' */
  real_T PositionRotary_e;             /* '<S32>/Data Inport S-Fcn' */
  real_T PositionValid_o;              /* '<S32>/Data Inport S-Fcn' */
  real_T Product3_h;                   /* '<S7>/Product3' */
  real_T DT1TransferFcn_k;             /* '<S7>/DT1 Transfer Fcn' */
  real_T Integrator_m;                 /* '<S4>/Integrator' */
  real_T Sum1_b;                       /* '<S4>/Sum1' */
  real_T Product_e;                    /* '<S4>/Product' */
  real_T Product1;                     /* '<S4>/Product1' */
  real_T Sum_i;                        /* '<S4>/Sum' */
  real_T MultiportSwitch1_k;           /* '<S28>/Multiport Switch1' */
  real_T Saturation_h;                 /* '<S28>/Saturation' */
  real_T k1_j;                         /* '<S30>/k1' */
  real_T k2_i;                         /* '<S30>/k2' */
  real_T k3_h;                         /* '<S30>/k3' */
  real_T k4_a;                         /* '<S30>/k4' */
  real_T Add_pc;                       /* '<S30>/Add' */
  real_T TmpSignalConversionAtSFunctio_d[4];/* '<S30>/LQR_Controller' */
  real_T drehmoment_soll;              /* '<S30>/LQR_Controller' */
  real_T TmpSignalConversionAtSFunctio_m[4];/* '<S28>/LQR_aktiv' */
  real_T aktiv;                        /* '<S28>/LQR_aktiv' */
  real_T out;                          /* '<S2>/MATLAB Function' */
  B_omega_1_ctrl_Furuta_Model_T sf_theta_1_ctrl;/* '<Root>/theta_1_ctrl' */
  B_omega_1_ctrl_Furuta_Model_T sf_omega_2_ctrl;/* '<Root>/omega_2_ctrl' */
  B_omega_1_ctrl_Furuta_Model_T sf_omega_1_ctrl;/* '<Root>/omega_1_ctrl' */
  B_MATLABFunction_Furuta_Model_T sf_MATLABFunction_a;/* '<S23>/MATLAB Function' */
  B_MATLABFunction_Furuta_Model_T sf_MATLABFunction_b;/* '<S13>/MATLAB Function' */
} B_Furuta_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T x_tra_DSTATE[44];             /* '<S23>/x_tra' */
  real_T u_tra_DSTATE[10];             /* '<S23>/u_tra' */
  real_T DT1TransferFcn_states;        /* '<S8>/DT1 Transfer Fcn' */
  real_T DT1TransferFcn_states_d;      /* '<S7>/DT1 Transfer Fcn' */
  volatile real_T I_refAcados_Buffer[2];/* '<Root>/I_ref Acados' */
  volatile real_T acados_on_Buffer[2]; /* '<Root>/acados_on' */
  volatile real_T Counter_Buffer[2];   /* '<Root>/Counter' */
  volatile real_T Measure_Buffer[118]; /* '<Root>/Measure' */
  volatile real_T RateTransition5_Buffer[2];/* '<Root>/Rate Transition5' */
  volatile real_T RateTransition6_Buffer[2];/* '<Root>/Rate Transition6' */
  volatile real_T RateTransition7_Buffer[2];/* '<Root>/Rate Transition7' */
  volatile real_T RateTransition8_Buffer[2];/* '<Root>/Rate Transition8' */
  volatile real_T Acados_trigger_out_Buffer[2];/* '<Root>/Acados_trigger_out' */
  real_T offset;                       /* '<Root>/setZero' */
  real_T status;                       /* '<S16>/MATLAB Function' */
  real_T lower;                        /* '<S16>/MATLAB Function' */
  real_T upper;                        /* '<S16>/MATLAB Function' */
  real_T st;                           /* '<S38>/LQR_enable' */
  real_T DT1TransferFcn_tmp;           /* '<S8>/DT1 Transfer Fcn' */
  real_T DT1TransferFcn_tmp_k;         /* '<S7>/DT1 Transfer Fcn' */
  real_T einzugsbereich;               /* '<S28>/LQR_aktiv' */
  real_T t_start;                      /* '<S2>/MATLAB Function' */
  void *DataInportSFcn_PWORK;          /* '<S5>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_f[3];     /* '<S33>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_b[3];     /* '<S32>/Data Inport S-Fcn' */
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
  int32_T clockTickCounter_d;          /* '<S3>/Pulse Generator' */
  int32_T clockTickCounter_e;          /* '<S36>/Pulse Generator1' */
  int32_T clockTickCounter_es;         /* '<S35>/Pulse Generator' */
  volatile int8_T I_refAcados_ActiveBufIdx;/* '<Root>/I_ref Acados' */
  volatile int8_T acados_on_ActiveBufIdx;/* '<Root>/acados_on' */
  volatile int8_T Counter_ActiveBufIdx;/* '<Root>/Counter' */
  volatile int8_T Measure_ActiveBufIdx;/* '<Root>/Measure' */
  volatile int8_T RateTransition5_ActiveBufIdx;/* '<Root>/Rate Transition5' */
  volatile int8_T RateTransition5_semaphoreTaken;/* '<Root>/Rate Transition5' */
  volatile int8_T RateTransition6_ActiveBufIdx;/* '<Root>/Rate Transition6' */
  volatile int8_T RateTransition6_semaphoreTaken;/* '<Root>/Rate Transition6' */
  volatile int8_T RateTransition7_ActiveBufIdx;/* '<Root>/Rate Transition7' */
  volatile int8_T RateTransition7_semaphoreTaken;/* '<Root>/Rate Transition7' */
  volatile int8_T RateTransition8_ActiveBufIdx;/* '<Root>/Rate Transition8' */
  volatile int8_T RateTransition8_semaphoreTaken;/* '<Root>/Rate Transition8' */
  volatile int8_T Acados_trigger_out_ActiveBufIdx;/* '<Root>/Acados_trigger_out' */
  boolean_T offset_not_empty;          /* '<Root>/setZero' */
  boolean_T st_not_empty;              /* '<S41>/MATLAB Function2' */
  boolean_T st_not_empty_c;            /* '<S41>/MATLAB Function' */
  boolean_T t_start_not_empty;         /* '<S2>/MATLAB Function' */
  boolean_T getRange_MODE;             /* '<Root>/getRange' */
  boolean_T Rampenfunktion_MODE;       /* '<S16>/Rampenfunktion' */
  boolean_T EnabledSubsystem_MODE;     /* '<S14>/Enabled Subsystem' */
  boolean_T Control_MODE;              /* '<S14>/Control' */
  boolean_T Solver_MODE;               /* '<S1>/Solver' */
  boolean_T CurrentCtrl1_MODE;         /* '<Root>/CurrentCtrl1' */
  boolean_T Breaker_MODE;              /* '<Root>/Breaker' */
  DW_MATLABFunction_Furuta_Mode_T sf_MATLABFunction_a;/* '<S23>/MATLAB Function' */
  DW_MATLABFunction_Furuta_Mode_T sf_MATLABFunction_b;/* '<S13>/MATLAB Function' */
} DW_Furuta_Model_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S15>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S46>/Integrator1' */
  real_T Integrator_CSTATE_e;          /* '<S4>/Integrator' */
} X_Furuta_Model_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S15>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S46>/Integrator1' */
  real_T Integrator_CSTATE_e;          /* '<S4>/Integrator' */
} XDot_Furuta_Model_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S15>/Integrator' */
  boolean_T Integrator1_CSTATE;        /* '<S46>/Integrator1' */
  boolean_T Integrator_CSTATE_e;       /* '<S4>/Integrator' */
} XDis_Furuta_Model_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState DiscreteStateSpaceMethods_Trig_;/* '<S35>/DiscreteStateSpaceMethods' */
  ZCSigState Encoder_Chan2_SubSys_Trig_ZCE;/* '<Root>/Encoder_Chan2_SubSys' */
  ZCSigState Encoder_Chan1_SubSys_Trig_ZCE;/* '<Root>/Encoder_Chan1_SubSys' */
  ZCSigState DiscreteStateSpaceMethods_Tri_g;/* '<S3>/DiscreteStateSpaceMethods' */
} PrevZCX_Furuta_Model_T;

#ifndef ODE4_INTG
#define ODE4_INTG

/* ODE4 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[4];                        /* derivatives */
} ODE4_IntgData;

#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S23>/lbu'
   *   '<S23>/ubu'
   */
  real_T pooled1[10];
} ConstP_Furuta_Model_T;

/* Parameters (default storage) */
struct P_Furuta_Model_T_ {
  real_T U_max;                        /* Variable: U_max
                                        * Referenced by:
                                        *   '<S23>/lbu'
                                        *   '<S23>/ubu'
                                        */
  real_T u_guess[10];                  /* Variable: u_guess
                                        * Referenced by: '<S23>/u_tra'
                                        */
  real_T x_guess[44];                  /* Variable: x_guess
                                        * Referenced by: '<S23>/x_tra'
                                        */
  real_T out_Y0;                       /* Computed Parameter: out_Y0
                                        * Referenced by: '<S2>/out'
                                        */
  real_T Drehmoment_Y0;                /* Computed Parameter: Drehmoment_Y0
                                        * Referenced by: '<S28>/Drehmoment'
                                        */
  real_T LQR_active_Y0;                /* Computed Parameter: LQR_active_Y0
                                        * Referenced by: '<S28>/LQR_active'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S28>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S28>/Constant'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 0.4
                                        * Referenced by: '<S28>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -0.4
                                        * Referenced by: '<S28>/Saturation'
                                        */
  real_T k1_Gain;                      /* Expression: 0.1
                                        * Referenced by: '<S30>/k1'
                                        */
  real_T k2_Gain;                      /* Expression: -1.3582
                                        * Referenced by: '<S30>/k2'
                                        */
  real_T k3_Gain;                      /* Expression: 0.0544
                                        * Referenced by: '<S30>/k3'
                                        */
  real_T k4_Gain;                      /* Expression: -0.138
                                        * Referenced by: '<S30>/k4'
                                        */
  real_T uaV_Y0;                       /* Expression: 0
                                        * Referenced by: '<S4>/ua[V]'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S4>/Integrator'
                                        */
  real_T Integrator_UpperSat;          /* Expression: 10
                                        * Referenced by: '<S4>/Integrator'
                                        */
  real_T Integrator_LowerSat;          /* Expression: -10
                                        * Referenced by: '<S4>/Integrator'
                                        */
  real_T KpVA_Value;                   /* Expression: 2
                                        * Referenced by: '<S4>/Kp[V//A]'
                                        */
  real_T Tn_Value;                     /* Expression: 10e-3
                                        * Referenced by: '<S4>/Tn'
                                        */
  real_T Theta1rad_Y0;                 /* Computed Parameter: Theta1rad_Y0
                                        * Referenced by: '<S7>/Theta-1 rad'
                                        */
  real_T Theta1_dotrads_Y0;            /* Computed Parameter: Theta1_dotrads_Y0
                                        * Referenced by: '<S7>/Theta-1_dot[rad//s]'
                                        */
  real_T CONST1_Value;                 /* Expression: pi/180*2
                                        * Referenced by: '<S7>/CONST1'
                                        */
  real_T DT1TransferFcn_NumCoef[2];    /* Expression: [50, -50]
                                        * Referenced by: '<S7>/DT1 Transfer Fcn'
                                        */
  real_T DT1TransferFcn_DenCoef[2];    /* Expression: [1, -0.9512]
                                        * Referenced by: '<S7>/DT1 Transfer Fcn'
                                        */
  real_T DT1TransferFcn_InitialStates; /* Expression: 0
                                        * Referenced by: '<S7>/DT1 Transfer Fcn'
                                        */
  real_T Theta2rad_Y0;                 /* Computed Parameter: Theta2rad_Y0
                                        * Referenced by: '<S8>/Theta-2 rad'
                                        */
  real_T Theta2_dotrads_Y0;            /* Computed Parameter: Theta2_dotrads_Y0
                                        * Referenced by: '<S8>/Theta-2_dot[rad//s]'
                                        */
  real_T CONST1_Value_b;               /* Expression: pi/180*2
                                        * Referenced by: '<S8>/CONST1'
                                        */
  real_T DT1TransferFcn_NumCoef_k[2];  /* Expression: [50, -50]
                                        * Referenced by: '<S8>/DT1 Transfer Fcn'
                                        */
  real_T DT1TransferFcn_DenCoef_i[2];  /* Expression: [1, -0.9512]
                                        * Referenced by: '<S8>/DT1 Transfer Fcn'
                                        */
  real_T DT1TransferFcn_InitialStates_l;/* Expression: 0
                                         * Referenced by: '<S8>/DT1 Transfer Fcn'
                                         */
  real_T y_Y0;                         /* Computed Parameter: y_Y0
                                        * Referenced by: '<S13>/y'
                                        */
  real_T u_Y0;                         /* Computed Parameter: u_Y0
                                        * Referenced by: '<S23>/u'
                                        */
  real_T Measure_Y0;                   /* Computed Parameter: Measure_Y0
                                        * Referenced by: '<S23>/Measure'
                                        */
  real_T Counter_Y0;                   /* Computed Parameter: Counter_Y0
                                        * Referenced by: '<S23>/Counter'
                                        */
  real_T reset_acados_Value;           /* Expression: 0
                                        * Referenced by: '<S23>/reset_acados'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1
                                        * Referenced by: '<S23>/Gain1'
                                        */
  real_T Gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<S23>/Gain'
                                        */
  real_T I_refA_Y0;                    /* Expression: 0
                                        * Referenced by: '<S1>/I_ref[A]'
                                        */
  real_T Counter_Y0_k;                 /* Expression: 0
                                        * Referenced by: '<S1>/Counter'
                                        */
  real_T Measure_Y0_n;                 /* Expression: 0
                                        * Referenced by: '<S1>/Measure'
                                        */
  real_T acados_on_Y0;                 /* Expression: 0
                                        * Referenced by: '<S1>/acados_on'
                                        */
  real_T acadoson_Value;               /* Expression: 0
                                        * Referenced by: '<S1>/acados on'
                                        */
  real_T u4Nm_UpperSat;                /* Expression: 0.4
                                        * Referenced by: '<S1>/0,4Nm'
                                        */
  real_T u4Nm_LowerSat;                /* Expression: -0.4
                                        * Referenced by: '<S1>/0,4Nm'
                                        */
  real_T ukmot_Gain;                   /* Expression: 1/0.055
                                        * Referenced by: '<S1>/1//kmot'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 1
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T x_out_Gain;                   /* Expression: 1
                                        * Referenced by: '<S1>/x_out'
                                        */
  real_T Drehmoment_Y0_j;              /* Computed Parameter: Drehmoment_Y0_j
                                        * Referenced by: '<S38>/Drehmoment'
                                        */
  real_T Upswing_Strategy_Value;       /* Expression: 3
                                        * Referenced by: '<S41>/Upswing_Strategy'
                                        */
  real_T n_Value;                      /* Expression: 2
                                        * Referenced by: '<S41>/n'
                                        */
  real_T kv_Value;                     /* Expression: 0.01298
                                        * Referenced by: '<S41>/kv'
                                        */
  real_T KV_Value;                     /* Expression: 0.405
                                        * Referenced by: '<S41>/KV'
                                        */
  real_T UpswingInit_Value;            /* Expression: 0
                                        * Referenced by: '<S41>/UpswingInit'
                                        */
  real_T Stabilization_Ctrl_Value;     /* Expression: 3
                                        * Referenced by: '<S40>/Stabilization_Ctrl'
                                        */
  real_T Zustandsregler_Gain[4];
                              /* Expression: -[-0.0291, 0.7090, -0.0213, 0.0666]
                               * Referenced by: '<S40>/Zustandsregler'
                               */
  real_T k1_Gain_o;                    /* Expression: 0.1
                                        * Referenced by: '<S40>/k1'
                                        */
  real_T k2_Gain_b;                    /* Expression: -1.3582
                                        * Referenced by: '<S40>/k2'
                                        */
  real_T k3_Gain_l;                    /* Expression: 0.0544
                                        * Referenced by: '<S40>/k3'
                                        */
  real_T k4_Gain_f;                    /* Expression: -0.138
                                        * Referenced by: '<S40>/k4'
                                        */
  real_T StabilizationInit_Value;      /* Expression: 0
                                        * Referenced by: '<S40>/StabilizationInit'
                                        */
  real_T Constant_Value_e;             /* Expression: 0
                                        * Referenced by: '<S38>/Constant'
                                        */
  real_T Saturation_UpperSat_e;        /* Expression: 0.4
                                        * Referenced by: '<S38>/Saturation'
                                        */
  real_T Saturation_LowerSat_d;        /* Expression: -0.4
                                        * Referenced by: '<S38>/Saturation'
                                        */
  real_T I_refA_Y0_k;                  /* Expression: 0
                                        * Referenced by: '<S35>/I_ref[A]'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S35>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;     /* Computed Parameter: PulseGenerator_Period
                                     * Referenced by: '<S35>/Pulse Generator'
                                     */
  real_T PulseGenerator_Duty;         /* Computed Parameter: PulseGenerator_Duty
                                       * Referenced by: '<S35>/Pulse Generator'
                                       */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S35>/Pulse Generator'
                                        */
  real_T ukmot_Gain_h;                 /* Expression: 1/0.055
                                        * Referenced by: '<S35>/1//kmot'
                                        */
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S36>/Out1'
                                        */
  real_T PulseGenerator1_Amp;          /* Expression: 1
                                        * Referenced by: '<S36>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Period;   /* Computed Parameter: PulseGenerator1_Period
                                    * Referenced by: '<S36>/Pulse Generator1'
                                    */
  real_T PulseGenerator1_Duty;       /* Computed Parameter: PulseGenerator1_Duty
                                      * Referenced by: '<S36>/Pulse Generator1'
                                      */
  real_T PulseGenerator1_PhaseDelay;   /* Expression: 0
                                        * Referenced by: '<S36>/Pulse Generator1'
                                        */
  real_T Output_Y0;                    /* Computed Parameter: Output_Y0
                                        * Referenced by: '<S46>/Output'
                                        */
  real_T Integrator1_IC;               /* Expression: 0.5
                                        * Referenced by: '<S46>/Integrator1'
                                        */
  real_T Step1_Time;                   /* Expression: 0
                                        * Referenced by: '<S46>/Step1'
                                        */
  real_T Step1_Y0;                     /* Expression: 0
                                        * Referenced by: '<S46>/Step1'
                                        */
  real_T Step1_YFinal;                 /* Expression: 0.15
                                        * Referenced by: '<S46>/Step1'
                                        */
  real_T y_Y0_b;                       /* Expression: [0]
                                        * Referenced by: '<S16>/y'
                                        */
  real_T upper_limit_Y0;               /* Computed Parameter: upper_limit_Y0
                                        * Referenced by: '<S16>/upper_limit'
                                        */
  real_T lower_limit_Y0;               /* Computed Parameter: lower_limit_Y0
                                        * Referenced by: '<S16>/lower_limit'
                                        */
  real_T Offset_Theta1_Y0;             /* Computed Parameter: Offset_Theta1_Y0
                                        * Referenced by: '<S16>/Offset_Theta1'
                                        */
  real_T Constant_Value_ej;            /* Expression: 0
                                        * Referenced by: '<S16>/Constant'
                                        */
  real_T PulseGenerator_Amp_g;         /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period_l; /* Computed Parameter: PulseGenerator_Period_l
                                   * Referenced by: '<Root>/Pulse Generator'
                                   */
  real_T PulseGenerator_Duty_p;     /* Computed Parameter: PulseGenerator_Duty_p
                                     * Referenced by: '<Root>/Pulse Generator'
                                     */
  real_T PulseGenerator_PhaseDelay_g;  /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T Integrator_IC_b;              /* Expression: 0
                                        * Referenced by: '<S15>/Integrator'
                                        */
  real_T Nullabgleich_Strommessung_Value;/* Expression: -0.015
                                          * Referenced by: '<Root>/Nullabgleich_Strommessung'
                                          */
  real_T Gain_Gain_d;                  /* Expression: -1
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Calibrate_Ena_Value;          /* Expression: 0
                                        * Referenced by: '<Root>/Calibrate_Ena'
                                        */
  real_T Constant1_Value_f;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<Root>/Switch1'
                                        */
  real_T SetZeroTheta1_Value;          /* Expression: 0
                                        * Referenced by: '<Root>/SetZeroTheta1'
                                        */
  real_T PulseGenerator_Amp_n;         /* Expression: 1
                                        * Referenced by: '<S3>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period_a; /* Computed Parameter: PulseGenerator_Period_a
                                   * Referenced by: '<S3>/Pulse Generator'
                                   */
  real_T PulseGenerator_Duty_pj;   /* Computed Parameter: PulseGenerator_Duty_pj
                                    * Referenced by: '<S3>/Pulse Generator'
                                    */
  real_T PulseGenerator_PhaseDelay_k;  /* Expression: 0
                                        * Referenced by: '<S3>/Pulse Generator'
                                        */
  real_T ukmot_Gain_l;                 /* Expression: 1/0.055
                                        * Referenced by: '<S3>/1//kmot'
                                        */
  real_T Enable_LQR_Gain;              /* Expression: 0
                                        * Referenced by: '<Root>/Enable_LQR'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T I_refAcados_InitialCondition; /* Expression: 0
                                        * Referenced by: '<Root>/I_ref Acados'
                                        */
  real_T CurrentCtrl1_Ena_Value;       /* Expression: 1
                                        * Referenced by: '<Root>/CurrentCtrl1_Ena'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: -1
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Normierung_Gain;              /* Expression: 1/3
                                        * Referenced by: '<Root>/Normierung'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T DAC_Enable_Gain;              /* Expression: 1
                                        * Referenced by: '<Root>/DAC_Enable'
                                        */
  real_T acados_on_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<Root>/acados_on'
                                        */
  real_T Counter_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<Root>/Counter'
                                        */
  real_T Measure_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<Root>/Measure'
                                        */
  real_T NormalStrom_Gain;             /* Expression: 2.5
                                        * Referenced by: '<Root>/Normal->Strom'
                                        */
  real_T RateTransition5_InitialConditio;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition5'
                                          */
  real_T RateTransition6_InitialConditio;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition6'
                                          */
  real_T RateTransition7_InitialConditio;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition7'
                                          */
  real_T RateTransition8_InitialConditio;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition8'
                                          */
  real_T Sicherheitsbereich_Value;     /* Expression: 0.2
                                        * Referenced by: '<Root>/Sicherheitsbereich'
                                        */
  real_T taums_Value;                  /* Expression: 1
                                        * Referenced by: '<S15>/tau[ms}'
                                        */
  real_T mss_Gain;                     /* Expression: 0.001
                                        * Referenced by: '<S15>/ms->s'
                                        */
  real_T Acados_trigger_out_InitialCondi;/* Expression: 0
                                          * Referenced by: '<Root>/Acados_trigger_out'
                                          */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S14>/Constant3'
                                        */
  real_T Pendel_Ctrl_Ena_Value;        /* Expression: 0
                                        * Referenced by: '<S14>/Pendel_Ctrl_Ena'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S14>/Switch2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Furuta_Model_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[6];
    SimStruct childSFunctions[1];
    SimStruct *childSFunctionPtrs[1];
    struct _ssBlkInfo2 blkInfo2[1];
    struct _ssSFcnModelMethods2 methods2[1];
    struct _ssSFcnModelMethods3 methods3[1];
    struct _ssSFcnModelMethods4 methods4[1];
    struct _ssStatesInfo2 statesInfo2[1];
    ssPeriodicStatesInfo periodicStatesInfo[1];
    struct _ssPortInfo2 inputOutputPortInfo2[1];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[8];
      struct _ssInPortUnit inputPortUnits[8];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[8];
      real_T const *UPtrs0[4];
      real_T const *UPtrs1[4];
      real_T const *UPtrs2[10];
      real_T const *UPtrs3[10];
      real_T const *UPtrs4[1];
      real_T const *UPtrs5[44];
      real_T const *UPtrs6[10];
      real_T const *UPtrs7[1];
      struct _ssPortOutputs outputPortInfo[8];
      struct _ssOutPortUnit outputPortUnits[8];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[8];
    } Sfcn0;
  } NonInlinedSFcns;

  X_Furuta_Model_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  XDis_Furuta_Model_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[3];
  real_T odeF[4][3];
  ODE4_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    uint32_T clockTick3;
    uint32_T clockTickH3;
    time_T stepSize3;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[3];
    time_T offsetTimesArray[3];
    int_T sampleTimeTaskIDArray[3];
    int_T sampleHitArray[3];
    int_T perTaskSampleHitsArray[9];
    time_T tArray[6];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Furuta_Model_T Furuta_Model_P;

/* Block signals (default storage) */
extern B_Furuta_Model_T Furuta_Model_B;

/* Continuous states (default storage) */
extern X_Furuta_Model_T Furuta_Model_X;

/* Block states (default storage) */
extern DW_Furuta_Model_T Furuta_Model_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_Furuta_Model_T Furuta_Model_PrevZCX;

/* Constant parameters (default storage) */
extern const ConstP_Furuta_Model_T Furuta_Model_ConstP;

/* Model entry point functions */
extern void Furuta_Model_initialize(void);
extern void Furuta_Model_output(void);
extern void Furuta_Model_update(void);
extern void Furuta_Model_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Furuta_Model_T *const Furuta_Model_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Furuta_Model'
 * '<S1>'   : 'Furuta_Model/Acados'
 * '<S2>'   : 'Furuta_Model/Breaker'
 * '<S3>'   : 'Furuta_Model/Control1'
 * '<S4>'   : 'Furuta_Model/CurrentCtrl1'
 * '<S5>'   : 'Furuta_Model/Current_Sensor'
 * '<S6>'   : 'Furuta_Model/DAC Voltage Out (1)'
 * '<S7>'   : 'Furuta_Model/Encoder_Chan1_SubSys'
 * '<S8>'   : 'Furuta_Model/Encoder_Chan2_SubSys'
 * '<S9>'   : 'Furuta_Model/Hardware-Triggered Runnable Function1'
 * '<S10>'  : 'Furuta_Model/Hardware-Triggered Runnable Function2'
 * '<S11>'  : 'Furuta_Model/Measurement_out'
 * '<S12>'  : 'Furuta_Model/Software-Triggered Runnable Function'
 * '<S13>'  : 'Furuta_Model/Subsystem'
 * '<S14>'  : 'Furuta_Model/Swing Up Kaddik'
 * '<S15>'  : 'Furuta_Model/TP_Filter'
 * '<S16>'  : 'Furuta_Model/getRange'
 * '<S17>'  : 'Furuta_Model/omega_1_ctrl'
 * '<S18>'  : 'Furuta_Model/omega_2_ctrl'
 * '<S19>'  : 'Furuta_Model/safety_Function'
 * '<S20>'  : 'Furuta_Model/setZero'
 * '<S21>'  : 'Furuta_Model/theta_1_ctrl'
 * '<S22>'  : 'Furuta_Model/theta_2_ctrl'
 * '<S23>'  : 'Furuta_Model/Acados/Solver'
 * '<S24>'  : 'Furuta_Model/Acados/Solver/MATLAB Function'
 * '<S25>'  : 'Furuta_Model/Acados/Solver/Modulo'
 * '<S26>'  : 'Furuta_Model/Acados/Solver/security'
 * '<S27>'  : 'Furuta_Model/Breaker/MATLAB Function'
 * '<S28>'  : 'Furuta_Model/Control1/DiscreteStateSpaceMethods'
 * '<S29>'  : 'Furuta_Model/Control1/DiscreteStateSpaceMethods/LQR_aktiv'
 * '<S30>'  : 'Furuta_Model/Control1/DiscreteStateSpaceMethods/Stabilization Control'
 * '<S31>'  : 'Furuta_Model/Control1/DiscreteStateSpaceMethods/Stabilization Control/LQR_Controller'
 * '<S32>'  : 'Furuta_Model/Encoder_Chan1_SubSys/Enc_1'
 * '<S33>'  : 'Furuta_Model/Encoder_Chan2_SubSys/Enc_2'
 * '<S34>'  : 'Furuta_Model/Subsystem/MATLAB Function'
 * '<S35>'  : 'Furuta_Model/Swing Up Kaddik/Control'
 * '<S36>'  : 'Furuta_Model/Swing Up Kaddik/Enabled Subsystem'
 * '<S37>'  : 'Furuta_Model/Swing Up Kaddik/Interval Correction +-pi'
 * '<S38>'  : 'Furuta_Model/Swing Up Kaddik/Control/DiscreteStateSpaceMethods'
 * '<S39>'  : 'Furuta_Model/Swing Up Kaddik/Control/DiscreteStateSpaceMethods/LQR_enable'
 * '<S40>'  : 'Furuta_Model/Swing Up Kaddik/Control/DiscreteStateSpaceMethods/Stabilization Control'
 * '<S41>'  : 'Furuta_Model/Swing Up Kaddik/Control/DiscreteStateSpaceMethods/UpSwing Strategies'
 * '<S42>'  : 'Furuta_Model/Swing Up Kaddik/Control/DiscreteStateSpaceMethods/Stabilization Control/MATLAB Function1'
 * '<S43>'  : 'Furuta_Model/Swing Up Kaddik/Control/DiscreteStateSpaceMethods/UpSwing Strategies/MATLAB Function'
 * '<S44>'  : 'Furuta_Model/Swing Up Kaddik/Control/DiscreteStateSpaceMethods/UpSwing Strategies/MATLAB Function2'
 * '<S45>'  : 'Furuta_Model/getRange/MATLAB Function'
 * '<S46>'  : 'Furuta_Model/getRange/Rampenfunktion'
 */
#endif                                 /* RTW_HEADER_Furuta_Model_h_ */
