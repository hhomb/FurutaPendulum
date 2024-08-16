/*********************** dSPACE target specific header file ********************
   Include file Furuta_Model_dsmpbap.h:

   Definitions used for access points

   Wed Aug 14 16:13:35 2024

   (c) Copyright 2020, dSPACE GmbH. All rights reserved.

 *******************************************************************************/

#ifndef _DSMPB_Furuta_Model_HEADER_
#define _DSMPB_Furuta_Model_HEADER_
#include "rtwtypes.h"
#ifdef EXTERN_C
#undef EXTERN_C
#endif

#ifdef __cplusplus
#define EXTERN_C                       extern "C"
#else
#define EXTERN_C                       extern
#endif

/* External declarations for access points prototypes */

/*                                                                            */
/* Declarations of read/write and trigger access points                       */
/*                                                                            */
/* Read access point of block Furuta_Model/Encoder_Chan1_SubSys/Enc_1, non-bus port 1 */
EXTERN_C void ap_read_Furuta_Model_DataInport1_P1_S1(real_T* OutputPortSignalPtr);

/* Read access point of block Furuta_Model/Encoder_Chan1_SubSys/Enc_1, non-bus port 2 */
EXTERN_C void ap_read_Furuta_Model_DataInport1_P2_S1(real_T* OutputPortSignalPtr);

/* Read access point of block Furuta_Model/Encoder_Chan1_SubSys/Enc_1, non-bus port 3 */
EXTERN_C void ap_read_Furuta_Model_DataInport1_P3_S1(real_T* OutputPortSignalPtr);

/* Read access point of block Furuta_Model/Encoder_Chan2_SubSys/Enc_2, non-bus port 1 */
EXTERN_C void ap_read_Furuta_Model_DataInport2_P1_S1(real_T* OutputPortSignalPtr);

/* Read access point of block Furuta_Model/Encoder_Chan2_SubSys/Enc_2, non-bus port 2 */
EXTERN_C void ap_read_Furuta_Model_DataInport2_P2_S1(real_T* OutputPortSignalPtr);

/* Read access point of block Furuta_Model/Encoder_Chan2_SubSys/Enc_2, non-bus port 3 */
EXTERN_C void ap_read_Furuta_Model_DataInport2_P3_S1(real_T* OutputPortSignalPtr);

/* Write access point of block Furuta_Model/DAC Voltage Out (1), non-bus port 1 */
EXTERN_C void ap_write_Furuta_Model_DataOutport1_P1_S1(const real_T
  * InputPortSignalPtr);

/* Read access point of block Furuta_Model/Current_Sensor, non-bus port 1 */
EXTERN_C void ap_read_Furuta_Model_DataInport3_P1_S1(real_T* OutputPortSignalPtr);

/* Trigger access point of block Furuta_Model/Hardware-Triggered Runnable Function2/Trigger Event Port S-Fcn*/
EXTERN_C void dsmpb_event_task_Furuta_Model_TriggerEventPortSFcn_b_TID0_BT1(void);

/* Trigger function of software triggered event port block Furuta_Model/Software-Triggered Runnable Function/Trigger Event Port S-Fcn*/
EXTERN_C void dsmpb_TriggerFunction_Furuta_Model_TriggerEventPortSFcn_TID3_BT1
  (void);

/* Trigger access point of block Furuta_Model/Software-Triggered Runnable Function/Trigger Event Port S-Fcn*/
EXTERN_C void dsmpb_event_task_Furuta_Model_TriggerEventPortSFcn_TID3_BT2(void);

/* Realtime function for absolute Time support              */
EXTERN_C void DSMPB_AbsoluteTimeGet(real_T*);

/* Trigger access point of block Furuta_Model/Hardware-Triggered Runnable Function1/Trigger Event Port S-Fcn*/
EXTERN_C void dsmpb_event_task_Furuta_Model_TriggerEventPortSFcn_g_TID4_BT3(void);

/*                                                                            */
/* Declarations of function module access points                              */
/*                                                                            */
/* Function module access point of system <Root>/Encoder_Chan1_SubSys    */
EXTERN_C void ap_entry_Furuta_Model_SIDS7_TIDtriggered();
EXTERN_C void ap_exit_Furuta_Model_SIDS7_TIDtriggered();

/* Function module access point of system <Root>/Encoder_Chan2_SubSys    */
EXTERN_C void ap_entry_Furuta_Model_SIDS8_TIDtriggered();
EXTERN_C void ap_exit_Furuta_Model_SIDS8_TIDtriggered();

/* Function module access point of system <Root>    */
EXTERN_C void ap_entry_Furuta_Model_SIDRoot_TID1();
EXTERN_C void ap_exit_Furuta_Model_SIDRoot_TID1();

#ifdef HAVE_Furuta_Model_DSMPBAP_CUSTOM
#include "Furuta_Model_dsmpbap_custom.h"
#endif
#endif
