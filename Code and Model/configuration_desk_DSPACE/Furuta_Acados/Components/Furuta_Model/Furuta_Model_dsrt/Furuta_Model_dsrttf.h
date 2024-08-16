/*********************** dSPACE target specific file *************************

   Include file Furuta_Model_dsrttf.h:

   Extern declarations of task functions.

   Wed Aug 14 16:13:35 2024

   Copyright 2019, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

#ifndef _DSRT_Furuta_Model_DSRTTF_HEADER_
#define _DSRT_Furuta_Model_DSRTTF_HEADER_
#ifdef EXTERN_C
#undef EXTERN_C
#endif

#ifdef __cplusplus
#define EXTERN_C                       extern "C"
#else
#define EXTERN_C                       extern
#endif

EXTERN_C void Furuta_Model_DSRTMdlOutputs0(void);
EXTERN_C void Furuta_Model_DSRTMdlUpdate0(void);

#endif                                 /* _DSRT_Furuta_Model_DSRTTF_HEADER_ */
