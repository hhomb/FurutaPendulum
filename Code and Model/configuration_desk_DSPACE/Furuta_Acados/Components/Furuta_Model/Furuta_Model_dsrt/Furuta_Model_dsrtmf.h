/*********************** dSPACE target specific file *************************

   Include file Furuta_Model_dsrtmf.h:

   Definition of model functions.

   Wed Aug 14 16:13:35 2024

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

#ifndef _DSRT_Furuta_Model_DSRTMF_HEADER_
#define _DSRT_Furuta_Model_DSRTMF_HEADER_
#ifdef EXTERN_C
#undef EXTERN_C
#endif

#ifdef __cplusplus
#define EXTERN_C                       extern "C"
#else
#define EXTERN_C                       extern
#endif

/* Model functions declarations */
#define Furuta_Model_dsrt_mdl_ApSimEngineOnInitIoPreRtosInit()
#define dsrt_mdl_timesync_simstate()
#define Furuta_Model_dsrt_mdl_ApSimEngineIdle()
#endif                                 /* _DSRT_Furuta_Model_DSRTMF_HEADER_ */

/****** [EOF] ****************************************************************/
