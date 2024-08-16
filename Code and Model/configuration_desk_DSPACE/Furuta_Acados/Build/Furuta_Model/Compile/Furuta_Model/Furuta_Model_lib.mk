##############################################################################
### Template file         : LibraryInterface.tmk
### File                  : Furuta_Model.mk
### Compatibility         : DSMAKE 6.26
### Description           : Library makefile.
###
### Copyright 2016, dSPACE GmbH. All rights reserved.
###
##############################################################################

MAKEFILE_DIR = "$(INTERFACE_IN_INCLUDE_FILEPATH,D,"=)"

TMP_INTERFACE_LIB_Furuta_Model_CC_SRC_DIRPATHS    =  \
 ".\..\..\..\..\Components\Furuta_Model" \
 ".\..\..\..\..\Components\Furuta_Model\Furuta_Model_dsrt" \
 ".\..\..\..\..\..\..\c_generated_code\furuta_model" \
 ".\..\..\..\..\..\..\c_generated_code" \
 ".\..\..\..\..\..\..\..\..\..\Program Files\MATLAB\R2023a\rtw\c\src" \
 ".\..\..\..\..\..\..\..\..\..\Program Files\MATLAB\R2023a\simulink\src"

TMP_INTERFACE_LIB_Furuta_Model_CC_HDR_DIRPATHS    =  \
 ".\..\..\..\..\Components\Furuta_Model" \
 ".\..\..\..\..\Components\Furuta_Model\Furuta_Model_dsrt" \
 ".\..\..\..\..\..\..\..\acados_neu\buildDS1403\install\include" \
 ".\..\..\..\..\..\..\..\acados_neu\buildDS1403\install\include\blasfeo" \
 ".\..\..\..\..\..\..\..\acados_neu\buildDS1403\install\include\blasfeo\include" \
 ".\..\..\..\..\..\..\..\acados_neu\buildDS1403\install\include\acados_c" \
 ".\..\..\..\..\..\..\..\acados_neu\buildDS1403\install\include\hpipm" \
 ".\..\..\..\..\..\..\..\acados_neu\buildDS1403\install\include\hpipm\include" \
 ".\..\..\..\..\..\..\..\acados_neu\buildDS1403\install\include\acados" \
 ".\..\..\..\..\..\..\..\acados_neu\buildDS1403\install\include\acados\dense_qp" \
 ".\..\..\..\..\..\..\..\acados_neu\buildDS1403\install\include\acados\ocp_nlp" \
 ".\..\..\..\..\..\..\..\acados_neu\buildDS1403\install\include\acados\ocp_qp" \
 ".\..\..\..\..\..\..\..\acados_neu\buildDS1403\install\include\acados\sim" \
 ".\..\..\..\..\..\..\..\acados_neu\buildDS1403\install\include\acados\utils" \
 ".\..\..\..\..\..\..\c_generated_code\furuta_model" \
 ".\..\..\..\..\..\..\c_generated_code" \
 ".\..\..\..\..\..\..\..\..\..\Program Files\MATLAB\R2023a\extern\include" \
 ".\..\..\..\..\..\..\..\..\..\Program Files\MATLAB\R2023a\simulink\include" \
 ".\..\..\..\..\..\..\..\..\..\Program Files\MATLAB\R2023a\rtw\c\src" \
 ".\..\..\..\..\..\..\..\..\..\Program Files\MATLAB\R2023a\rtw\c\src\ext_mode\common"

#-------------------------------------------------------------------------------
# Interface Settings
#-------------------------------------------------------------------------------

INTERFACE_INCLUDE_MAKEFILE_VERSION = 1

% set INTERFACE_LIB_Furuta_Model_FILELOCATION = $(MAKEFILE_DIR,>\Furuta_Model.a)

INTERFACE_LIB_Furuta_Model_CC_SRC_FILES       =  \
 rt_matrx.c \
 rt_printf.c \
 Furuta_Model.c \
 Furuta_Model_data.c \
 Furuta_Model_dsmpbap.c \
 Furuta_Model_dsrtmdlfcn.c \
 Furuta_Model_dsrtmf.c \
 Furuta_Model_dsrttf.c \
 Furuta_Model_dsrtvdf.c \
 rtGetInf.c \
 rtGetNaN.c \
 rt_nonfinite.c \
 rt_zcfcn.c \
 furuta_expl_ode_fun.c \
 furuta_expl_ode_hess.c \
 furuta_expl_vde_adj.c \
 furuta_expl_vde_forw.c \
 acados_solver_furuta.c \
 acados_solver_sfunction_furuta.c

% foreach IDX_DIRPATH in $(TMP_INTERFACE_LIB_Furuta_Model_CC_SRC_DIRPATHS)
%   set INTERFACE_LIB_Furuta_Model_CC_SRC_DIRPATHS += $(MAKEFILE_DIR,>\$(IDX_DIRPATH,"=),A)
% endfor
% set INTERFACE_LIB_Furuta_Model_CC_SRC_DIRPATHS += 

% foreach IDX_DIRPATH in $(TMP_INTERFACE_LIB_Furuta_Model_CC_HDR_DIRPATHS)
%   set INTERFACE_LIB_Furuta_Model_CC_HDR_DIRPATHS += $(MAKEFILE_DIR,>\$(IDX_DIRPATH,"=),A)
% endfor
% set INTERFACE_LIB_Furuta_Model_CC_HDR_DIRPATHS += 

INTERFACE_LIB_Furuta_Model_OBJ_FILEPATHS      = 

INTERFACE_LIB_Furuta_Model_CC_ADD_DEFINES     =  \
 Model=Furuta_Model \
 MT=0 \
 NUMST=3 \
 NCSTATES=3 \
 TID01EQ=1 \
 USE_RTMODEL \
 RT \
 NO_PRINTF

INTERFACE_LIB_Furuta_Model_CC_ADD_UNDEFS      = 

# Interface information about created library
INTERFACE_LIB_TARGET        = Furuta_Model

% set INTERFACE_LIB_FILEPATHS += $(MAKEFILE_DIR,>\Furuta_Model.a)

INTERFACE_LIB_FILEPATHS     +=  \
 "C:\Users\Administrator\acados_neu\buildDS1403\install\lib\libacados.a" \
 "C:\Users\Administrator\acados_neu\buildDS1403\install\lib\libblasfeo.a" \
 "C:\Users\Administrator\acados_neu\buildDS1403\install\lib\libhpipm.a"

% undef IDX_DIRPATH
% undef TMP_INTERFACE_LIB_Furuta_Model_CC_SRC_DIRPATHS
% undef TMP_INTERFACE_LIB_Furuta_Model_CC_HDR_DIRPATHS
% undef MAKEFILE_DIR

# [EOF]