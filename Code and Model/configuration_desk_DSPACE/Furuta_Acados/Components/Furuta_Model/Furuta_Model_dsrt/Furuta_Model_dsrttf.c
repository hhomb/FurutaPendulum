/*****************************************************************************

   Include file Furuta_Model_dsrttf.c:

   Definition of task functions.

   Wed Aug 14 16:13:35 2024

   Copyright 2019, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header files */
#include "Furuta_Model_dsrttf.h"
#include "Furuta_Model.h"
#include "Furuta_Model_private.h"

/* Task function for TID0 */
void Furuta_Model_DSRTMdlOutputs0()
{
  /* Call to Simulink model output function */
  Furuta_Model_output();
}

void Furuta_Model_DSRTMdlUpdate0()
{
  /* Call to Simulink model upadte function */
  Furuta_Model_update();
}
