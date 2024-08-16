/**************************************************************************** *
 * FILE :
 *  Furuta_Model_dsrtmdlfcn.c
 *
 *
 *
 * Copyright 2017, dSPACE GmbH. All rights reserved
 *
   \****************************************************************************/

#ifndef TEMP_DSRT_RTI
#include <rtmodel.h>
#include "rtwtypes.h"
#include "Furuta_Model_dsrtmdlfcn.h"
#include <stdio.h>

int32_T DSRTStopSimulation = 0;
EXTERN_C_DECL void Furuta_Model_initialize();
EXTERN_C_DECL void Furuta_Model_terminate();

/* Initialization of model */
void Furuta_Model_DSRTInitMdl(void)
{
  /* Initialize model */
  Furuta_Model_initialize();

  /* Check for initialization errors */
  Furuta_Model_DSRTCheckForErrorStatus();

  /* Reinit Stop Simulation flag*/
  DSRTStopSimulation = 0;
}

/* Model start function */
void Furuta_Model_DSRTStartMdl(void)
{
  uint8_T lastApplStateStopped;
  Furuta_Model_APLastApplStateStopped(&lastApplStateStopped);
  if (lastApplStateStopped) {
    /* Reinit main simulation structure */
    Furuta_Model_DSRTInitMdl();
  }
}

/* Model stop function */
void Furuta_Model_DSRTStopMdl(void)
{
  /* Call terminate function */
  Furuta_Model_terminate();

  /* Check for model error status */
  Furuta_Model_DSRTCheckForErrorStatus();
}

/* Check for model error status */
void Furuta_Model_DSRTCheckForErrorStatus()
{
  const char_T* errorStatus = rtmGetErrorStatus(Furuta_Model_M);
  if (errorStatus != NULL && strcmp(errorStatus, "Simulation finished") == 0) {
    /* The RTM errorStatus field has been set */
    Furuta_Model_APTerminateSimulation();
    Furuta_Model_APPrintMessage("Model 'Furuta_Model' error status:");
    Furuta_Model_APPrintMessage(errorStatus);
  }
}

/* Check for simulation stop conditions */
void Furuta_Model_DSRTCheckForSimulationStopCondition(void)
{
  const char_T* errorStatus = rtmGetErrorStatus(Furuta_Model_M);
  if (errorStatus != NULL) {
    if (DSRTStopSimulation != 1) {
      /* The RTM errorStatus field was set */
      Furuta_Model_APTerminateSimulation();
      Furuta_Model_APPrintMessage("Model 'Furuta_Model' error status:");
      Furuta_Model_APPrintMessage(errorStatus);
      DSRTStopSimulation = 1;
    }
  } else if (rtmGetStopRequested(Furuta_Model_M)) {
    if (DSRTStopSimulation != 1) {
      Furuta_Model_APStopSimulation();
      Furuta_Model_APPrintMessage(
        "Model 'Furuta_Model': Executed a Simulink Stop Simulation block or request.");
      DSRTStopSimulation = 1;
    }
  }
}

#endif
