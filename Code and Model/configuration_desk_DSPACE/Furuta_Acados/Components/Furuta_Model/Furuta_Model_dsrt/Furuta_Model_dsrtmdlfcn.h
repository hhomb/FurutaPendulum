/*****************************************************************************

   Include file Furuta_Model_dsrtmdlfcn.h:

   Definition of model functions.

   Wed Aug 14 16:13:35 2024

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

#ifndef _DSRT_Furuta_Model_DSRTMDLFCN_HEADER_
#define _DSRT_Furuta_Model_DSRTMDLFCN_HEADER_
#if defined(EXTERN_C_DECL)
#undef EXTERN_C_DECL
#endif

#if defined(__cplusplus)
#define EXTERN_C_DECL                  extern "C"
#else
#define EXTERN_C_DECL                  extern
#endif

#include "rtwtypes.h"
#include <string.h>

/* Model functions declarations */
EXTERN_C_DECL void Furuta_Model_DSRTInitMdl(void);
EXTERN_C_DECL void Furuta_Model_DSRTStartMdl(void);
EXTERN_C_DECL void Furuta_Model_DSRTStopMdl(void);
EXTERN_C_DECL void Furuta_Model_DSRTCheckForSimulationStopCondition(void);
EXTERN_C_DECL void Furuta_Model_DSRTCheckForErrorStatus(void);
EXTERN_C_DECL void Furuta_Model_APTerminateSimulation(void);
EXTERN_C_DECL void Furuta_Model_APStopSimulation(void);
EXTERN_C_DECL void Furuta_Model_APLastApplStateStopped(uint8_T*);
EXTERN_C_DECL void Furuta_Model_APPrintMessage(const char_T*);

#endif                               /* _DSRT_Furuta_Model_DSRTMDLFCN_HEADER_ */
