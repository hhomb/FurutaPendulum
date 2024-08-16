CC_OPT_SET_SUPPORTED_VALUES = DEFAULT NONE CUSTOM 
INCLUDE_MAKEFILE_VERSION    = 1 
LIB_TARGET                  = Furuta_Model 
SRCS= rt_matrx.c rt_printf.c Furuta_Model.c Furuta_Model_data.c Furuta_Model_dsmpbap.c Furuta_Model_dsrtmdlfcn.c \
		  Furuta_Model_dsrtmf.c Furuta_Model_dsrttf.c Furuta_Model_dsrtvdf.c rtGetInf.c rtGetNaN.c rt_nonfinite.c \
		  rt_zcfcn.c furuta_expl_ode_fun.c furuta_expl_ode_hess.c furuta_expl_vde_adj.c furuta_expl_vde_forw.c \
		  acados_solver_furuta.c acados_solver_sfunction_furuta.c
MRK_FILES                   = rt_matrx.mrk rt_printf.mrk Furuta_Model.mrk Furuta_Model_data.mrk Furuta_Model_dsmpbap.mrk Furuta_Model_dsrtmdlfcn.mrk Furuta_Model_dsrtmf.mrk Furuta_Model_dsrttf.mrk Furuta_Model_dsrtvdf.mrk rtGetInf.mrk rtGetNaN.mrk rt_nonfinite.mrk rt_zcfcn.mrk furuta_expl_ode_fun.mrk furuta_expl_ode_hess.mrk furuta_expl_vde_adj.mrk furuta_expl_vde_forw.mrk acados_solver_furuta.mrk acados_solver_sfunction_furuta.mrk  
OBJS= rt_matrx.oarm rt_printf.oarm Furuta_Model.oarm Furuta_Model_data.oarm Furuta_Model_dsmpbap.oarm \
		  Furuta_Model_dsrtmdlfcn.oarm Furuta_Model_dsrtmf.oarm Furuta_Model_dsrttf.oarm Furuta_Model_dsrtvdf.oarm \
		  rtGetInf.oarm rtGetNaN.oarm rt_nonfinite.oarm rt_zcfcn.oarm furuta_expl_ode_fun.oarm furuta_expl_ode_hess.oarm \
		  furuta_expl_vde_adj.oarm furuta_expl_vde_forw.oarm acados_solver_furuta.oarm acados_solver_sfunction_furuta.oarm
CC_SRC_DIRPATHS = \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model\Furuta_Model_dsrt \
 C:\Users\Administrator\Furuta\c_generated_code\furuta_model \
 C:\Users\Administrator\Furuta\c_generated_code \
 "C:\Program Files\MATLAB\R2023a\rtw\c\src" \
 "C:\Program Files\MATLAB\R2023a\simulink\src" 
 
CC_HDR_DIRPATHS = \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model\Furuta_Model_dsrt \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo\include \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados_c \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm\include \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\dense_qp \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_nlp \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_qp \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\sim \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\utils \
 C:\Users\Administrator\Furuta\c_generated_code\furuta_model \
 C:\Users\Administrator\Furuta\c_generated_code \
 "C:\Program Files\MATLAB\R2023a\extern\include" \
 "C:\Program Files\MATLAB\R2023a\simulink\include" \
 "C:\Program Files\MATLAB\R2023a\rtw\c\src" \
 "C:\Program Files\MATLAB\R2023a\rtw\c\src\ext_mode\common" 
 
CC_LIB_FILE                 = C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Build\Furuta_Model\Compile\Furuta_Model\Furuta_Model.a 
OBJ_FILEPATHS               =  
LIB_DIRPATHS                =    
CUSTOM_DIRPATHS             =   
CC_ADD_OPTS                 =    
CPP_ADD_OPTS                =    
CC_ADD_DEFINES              = DATA_PORT_ACCESS_POINT_API_VERSION=2 Model=Furuta_Model MT=0 NUMST=3 NCSTATES=3 TID01EQ=1 USE_RTMODEL RT NO_PRINTF 
CC_ADD_UNDEFS               =  
CC_OPT_SET                  = Default 
CC_CUSTOM_OPT_OPTS          =  

all : MakeLib 

depend : 

%include ..\Configuration.mk 
%include ..\LibraryRules.mk 
%include ..\CommonRules.mk 

CC_ALL_OPTS = \
 -c \
 -fno-common \
 -nostdinc \
 -fno-strict-aliasing \
 -pipe \
 -ffast-math \
 -fomit-frame-pointer \
 -funwind-tables \
 -mcpu=cortex-a15 \
 -mfpu=neon-vfpv4 \
 -mfloat-abi=hard \
 -isystem"C:\Program Files\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\arm-linux-gnueabihf\arm-linux-gnueabihf\include\c++\5.5.0" \
 -isystem"C:\Program Files\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\arm-linux-gnueabihf\arm-linux-gnueabihf\include\c++\5.5.0\arm-linux-gnueabihf" \
 -isystem"C:\Program Files\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\arm-linux-gnueabihf\include" \
 -isystem"C:\Program Files\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\arm-linux-gnueabihf\lib\gcc\arm-linux-gnueabihf\5.5.0\include" \
 -isystem"C:\Program Files\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\arm-linux-gnueabihf\lib\gcc\arm-linux-gnueabihf\5.5.0\include-fixed" \
 -Werror-implicit-function-declaration \
 -D_DS1403 \
 -D_DS1403CN \
 -DDS_PLATFORM_ARM \
 -DDS_PLATFORM_ARMV7 \
 -DDS_PLATFORM_KEYSTONE \
 -DDS_PLATFORM_LE \
 -DDS_PLATFORM_POSIX \
 -DDS_PLATFORM_LINUX \
 -DDS_PLATFORM_DSRTLINUX \
 -DDS_PLATFORM_CN \
 -DDS_PLATFORM_SMART \
 -DDS_PLATFORM_SMARTBOX \
 -DDS_PLATFORM_SMP \
 -D__HOSTNAME__=\""EI-PC82"\" \
 -D__INTEGRATION__=\""5.1.1"\" \
 -DDS_RTLIB_VERSION_MAR=5 \
 -DDS_RTLIB_VERSION_MIR=1 \
 -DDS_LINUX_VERSION=440 \
 -DLINUX_VERSION=4.4.0 \
 -D_FILE_OFFSET_BITS=64 \
 -O2 \
 -finline-functions \
 -IC:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model \
 -IC:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model\Furuta_Model_dsrt \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo\include \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\acados_c \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm\include \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\acados \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\dense_qp \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_nlp \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_qp \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\sim \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\utils \
 -IC:\Users\Administrator\Furuta\c_generated_code\furuta_model \
 -IC:\Users\Administrator\Furuta\c_generated_code \
 -I"C:\Program Files\MATLAB\R2023a\extern\include" \
 -I"C:\Program Files\MATLAB\R2023a\simulink\include" \
 -I"C:\Program Files\MATLAB\R2023a\rtw\c\src" \
 -I"C:\Program Files\MATLAB\R2023a\rtw\c\src\ext_mode\common" \
 -I"C:\Program Files\dSPACE RCPHIL 2021-A\DS1403\Include" \
 -DDATA_PORT_ACCESS_POINT_API_VERSION=2 \
 -DModel=Furuta_Model \
 -DMT=0 \
 -DNUMST=3 \
 -DNCSTATES=3 \
 -DTID01EQ=1 \
 -DUSE_RTMODEL \
 -DRT \
 -DNO_PRINTF 
 
CPP_ALL_OPTS = \
 -c \
 -fno-common \
 -nostdinc \
 -fno-strict-aliasing \
 -pipe \
 -ffast-math \
 -fomit-frame-pointer \
 -funwind-tables \
 -mcpu=cortex-a15 \
 -mfpu=neon-vfpv4 \
 -mfloat-abi=hard \
 -isystem"C:\Program Files\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\arm-linux-gnueabihf\arm-linux-gnueabihf\include\c++\5.5.0" \
 -isystem"C:\Program Files\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\arm-linux-gnueabihf\arm-linux-gnueabihf\include\c++\5.5.0\arm-linux-gnueabihf" \
 -isystem"C:\Program Files\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\arm-linux-gnueabihf\include" \
 -isystem"C:\Program Files\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\arm-linux-gnueabihf\lib\gcc\arm-linux-gnueabihf\5.5.0\include" \
 -isystem"C:\Program Files\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\arm-linux-gnueabihf\lib\gcc\arm-linux-gnueabihf\5.5.0\include-fixed" \
 -fno-operator-names \
 -Wall \
 -D_DS1403 \
 -D_DS1403CN \
 -DDS_PLATFORM_ARM \
 -DDS_PLATFORM_ARMV7 \
 -DDS_PLATFORM_KEYSTONE \
 -DDS_PLATFORM_LE \
 -DDS_PLATFORM_POSIX \
 -DDS_PLATFORM_LINUX \
 -DDS_PLATFORM_DSRTLINUX \
 -DDS_PLATFORM_CN \
 -DDS_PLATFORM_SMART \
 -DDS_PLATFORM_SMARTBOX \
 -DDS_PLATFORM_SMP \
 -D__HOSTNAME__=\""EI-PC82"\" \
 -D__INTEGRATION__=\""5.1.1"\" \
 -DDS_RTLIB_VERSION_MAR=5 \
 -DDS_RTLIB_VERSION_MIR=1 \
 -DDS_LINUX_VERSION=440 \
 -DLINUX_VERSION=4.4.0 \
 -D_FILE_OFFSET_BITS=64 \
 -O2 \
 -finline-functions \
 -IC:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model \
 -IC:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model\Furuta_Model_dsrt \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo\include \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\acados_c \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm\include \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\acados \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\dense_qp \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_nlp \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_qp \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\sim \
 -IC:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\utils \
 -IC:\Users\Administrator\Furuta\c_generated_code\furuta_model \
 -IC:\Users\Administrator\Furuta\c_generated_code \
 -I"C:\Program Files\MATLAB\R2023a\extern\include" \
 -I"C:\Program Files\MATLAB\R2023a\simulink\include" \
 -I"C:\Program Files\MATLAB\R2023a\rtw\c\src" \
 -I"C:\Program Files\MATLAB\R2023a\rtw\c\src\ext_mode\common" \
 -I"C:\Program Files\dSPACE RCPHIL 2021-A\DS1403\Include" \
 -DDATA_PORT_ACCESS_POINT_API_VERSION=2 \
 -DModel=Furuta_Model \
 -DMT=0 \
 -DNUMST=3 \
 -DNCSTATES=3 \
 -DTID01EQ=1 \
 -DUSE_RTMODEL \
 -DRT \
 -DNO_PRINTF 
 
# ============================================================================= 
# MKMF Section 
# ============================================================================= 

# ----------------------------------------------------------------------------- 
# MKMF Configuration 
# ----------------------------------------------------------------------------- 

.TYPE.C   = .c .cpp 
.TYPE.OBJ = .oarm .oarm 

.PATH.c = \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model; \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model\Furuta_Model_dsrt; \
 C:\Users\Administrator\Furuta\c_generated_code\furuta_model; \
 C:\Users\Administrator\Furuta\c_generated_code; \
 "C:\Program Files\MATLAB\R2023a\rtw\c\src"; \
 "C:\Program Files\MATLAB\R2023a\simulink\src"; 
 
.PATH.cpp = \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model; \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model\Furuta_Model_dsrt; \
 C:\Users\Administrator\Furuta\c_generated_code\furuta_model; \
 C:\Users\Administrator\Furuta\c_generated_code; \
 "C:\Program Files\MATLAB\R2023a\rtw\c\src"; \
 "C:\Program Files\MATLAB\R2023a\simulink\src"; 
 
.PATH.h = \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model; \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model\Furuta_Model_dsrt; \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include; \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo; \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo\include; \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados_c; \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm; \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm\include; \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados; \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\dense_qp; \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_nlp; \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_qp; \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\sim; \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\utils; \
 C:\Users\Administrator\Furuta\c_generated_code\furuta_model; \
 C:\Users\Administrator\Furuta\c_generated_code; \
 "C:\Program Files\MATLAB\R2023a\extern\include"; \
 "C:\Program Files\MATLAB\R2023a\simulink\include"; \
 "C:\Program Files\MATLAB\R2023a\rtw\c\src"; \
 "C:\Program Files\MATLAB\R2023a\rtw\c\src\ext_mode\common"; 
 

.HDRPATH.c = \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model\Furuta_Model_dsrt \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo\include \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados_c \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm\include \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\dense_qp \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_nlp \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_qp \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\sim \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\utils \
 C:\Users\Administrator\Furuta\c_generated_code\furuta_model \
 C:\Users\Administrator\Furuta\c_generated_code \
 "C:\Program Files\MATLAB\R2023a\extern\include" \
 "C:\Program Files\MATLAB\R2023a\simulink\include" \
 "C:\Program Files\MATLAB\R2023a\rtw\c\src" \
 "C:\Program Files\MATLAB\R2023a\rtw\c\src\ext_mode\common" \
 | \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model\Furuta_Model_dsrt \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo\include \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados_c \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm\include \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\dense_qp \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_nlp \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_qp \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\sim \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\utils \
 C:\Users\Administrator\Furuta\c_generated_code\furuta_model \
 C:\Users\Administrator\Furuta\c_generated_code \
 "C:\Program Files\MATLAB\R2023a\extern\include" \
 "C:\Program Files\MATLAB\R2023a\simulink\include" \
 "C:\Program Files\MATLAB\R2023a\rtw\c\src" \
 "C:\Program Files\MATLAB\R2023a\rtw\c\src\ext_mode\common" 
 
.HDRPATH.cpp = \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model\Furuta_Model_dsrt \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo\include \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados_c \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm\include \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\dense_qp \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_nlp \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_qp \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\sim \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\utils \
 C:\Users\Administrator\Furuta\c_generated_code\furuta_model \
 C:\Users\Administrator\Furuta\c_generated_code \
 "C:\Program Files\MATLAB\R2023a\extern\include" \
 "C:\Program Files\MATLAB\R2023a\simulink\include" \
 "C:\Program Files\MATLAB\R2023a\rtw\c\src" \
 "C:\Program Files\MATLAB\R2023a\rtw\c\src\ext_mode\common" \
 | \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Components\Furuta_Model\Furuta_Model_dsrt \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\blasfeo\include \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados_c \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\hpipm\include \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\dense_qp \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_nlp \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\ocp_qp \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\sim \
 C:\Users\Administrator\acados_neu\buildDS1403\install\include\acados\utils \
 C:\Users\Administrator\Furuta\c_generated_code\furuta_model \
 C:\Users\Administrator\Furuta\c_generated_code \
 "C:\Program Files\MATLAB\R2023a\extern\include" \
 "C:\Program Files\MATLAB\R2023a\simulink\include" \
 "C:\Program Files\MATLAB\R2023a\rtw\c\src" \
 "C:\Program Files\MATLAB\R2023a\rtw\c\src\ext_mode\common" 
 

.CDEFINES.c  = -D_DS1403 -D_DS1403CN -DDS_PLATFORM_ARM -DDS_PLATFORM_ARMV7 -DDS_PLATFORM_KEYSTONE -DDS_PLATFORM_LE -DDS_PLATFORM_POSIX -DDS_PLATFORM_LINUX -DDS_PLATFORM_DSRTLINUX -DDS_PLATFORM_CN -DDS_PLATFORM_SMART -DDS_PLATFORM_SMARTBOX -DDS_PLATFORM_SMP -D__HOSTNAME__=\EI-PC82\ -D__INTEGRATION__=\5.1.1\ -DDS_RTLIB_VERSION_MAR=5 -DDS_RTLIB_VERSION_MIR=1 -DDS_LINUX_VERSION=440 -DLINUX_VERSION=4.4.0 -D_FILE_OFFSET_BITS=64  
.CDEFINES.cpp = -D__cplusplus -D_DS1403 -D_DS1403CN -DDS_PLATFORM_ARM -DDS_PLATFORM_ARMV7 -DDS_PLATFORM_KEYSTONE -DDS_PLATFORM_LE -DDS_PLATFORM_POSIX -DDS_PLATFORM_LINUX -DDS_PLATFORM_DSRTLINUX -DDS_PLATFORM_CN -DDS_PLATFORM_SMART -DDS_PLATFORM_SMARTBOX -DDS_PLATFORM_SMP -D__HOSTNAME__=\EI-PC82\ -D__INTEGRATION__=\5.1.1\ -DDS_RTLIB_VERSION_MAR=5 -DDS_RTLIB_VERSION_MIR=1 -DDS_LINUX_VERSION=440 -DLINUX_VERSION=4.4.0 -D_FILE_OFFSET_BITS=64  

MKMF_SRCS  = rt_matrx.c rt_printf.c Furuta_Model.c Furuta_Model_data.c Furuta_Model_dsmpbap.c Furuta_Model_dsrtmdlfcn.c Furuta_Model_dsrtmf.c Furuta_Model_dsrttf.c Furuta_Model_dsrtvdf.c rtGetInf.c rtGetNaN.c rt_nonfinite.c rt_zcfcn.c furuta_expl_ode_fun.c furuta_expl_ode_hess.c furuta_expl_vde_adj.c furuta_expl_vde_forw.c acados_solver_furuta.c acados_solver_sfunction_furuta.c 
MKMF_LINELEN = 118 
MKMF_TABLEN  = 2 

# ----------------------------------------------------------------------------- 
# MKMF Replacements 
# ----------------------------------------------------------------------------- 

HDRS= tmwtypes.h cg_sfun.h rt_matrx.h rt_mxclassid.h fixedpoint.h fixpoint_spec.h rtw_continuous.h rtw_extmode.h \
		  rtw_matlogging.h rtw_solver.h rtw_storage.h simstruc.h simstruc_compcond.h simstruc_debug.h simstruc_def.h \
		  simstruc_implement.h simstruc_internal.h simstruc_internal_types.h simstruc_types.h simulink_solver_api.h \
		  sl_common_types_def.h sl_datatype_access.h sl_fixpt.h sl_prodhwdevicetype.h sl_report_types.h \
		  sl_sample_time_defs.h sl_types_def.h slexec_block_runtime_service.h solver_zc.h sysran_types.h ocp_nlp_common.h \
		  ocp_nlp_constraints_bgh.h ocp_nlp_constraints_common.h ocp_nlp_cost_common.h ocp_nlp_dynamics_common.h \
		  ocp_nlp_reg_common.h ocp_qp_common.h ocp_qp_xcond_solver.h sim_collocation_utils.h sim_common.h \
		  sim_erk_integrator.h sim_gnsf.h sim_irk_integrator.h sim_lifted_irk_integrator.h external_function_generic.h \
		  timing.h types.h external_function_interface.h ocp_nlp_interface.h ocp_qp_interface.h sim_interface.h \
		  blasfeo_block_size.h blasfeo_common.h blasfeo_target.h hpipm_common.h hpipm_d_ocp_qp.h hpipm_d_ocp_qp_dim.h \
		  hpipm_d_ocp_qp_res.h hpipm_d_ocp_qp_sol.h acados_solver_furuta.h furuta_model.h Furuta_Model.h \
		  Furuta_Model_dsmpbap.h Furuta_Model_dsrtmdlfcn.h Furuta_Model_dsrtmf.h Furuta_Model_dsrttf.h \
		  Furuta_Model_dsrtvdf.h Furuta_Model_private.h Furuta_Model_types.h multiword_types.h rt_nonfinite.h rt_zcfcn.h \
		  rtGetInf.h rtGetNaN.h rtmodel.h rtwtypes.h zero_crossing_types.h

EXTHDRS=

# [EOF] 
 
### OPUS MKMF:  Do not remove this line!  Generated dependencies follow.

rt_matrx.oarm: rt_matrx.c \
	 rt_matrx.h \
		 rtwtypes.h \
			 tmwtypes.h \
		 rt_mxclassid.h

rt_printf.oarm: rt_printf.c

Furuta_Model.oarm: Furuta_Model.c \
	 Furuta_Model_dsrtvdf.h \
		 Furuta_Model.h \
			 rtwtypes.h \
				 tmwtypes.h \
			 simstruc.h \
				 simstruc_compcond.h \
					 simstruc_types.h \
						 rtwtypes.h \
							 # tmwtypes.h \
						 sl_types_def.h \
							 rtwtypes.h \
								 # tmwtypes.h \
						 rtw_matlogging.h \
							 sl_types_def.h \
								 # rtwtypes.h \
						 rtw_extmode.h \
							 rtwtypes.h \
								 # tmwtypes.h \
						 rtw_continuous.h \
							 rtwtypes.h \
								 # tmwtypes.h \
						 rtw_solver.h \
							 rtw_continuous.h \
								 # rtwtypes.h \
						 sysran_types.h \
						 sl_sample_time_defs.h \
					 solver_zc.h \
						 rtwtypes.h \
							 # tmwtypes.h \
					 slexec_block_runtime_service.h \
				 simstruc_types.h \
					 # rtwtypes.h \
					 # sl_types_def.h \
					 # rtw_matlogging.h \
					 # rtw_extmode.h \
					 # rtw_continuous.h \
					 # rtw_solver.h \
					 # sysran_types.h \
					 # sl_sample_time_defs.h \
				 simstruc_def.h \
					 simstruc_types.h \
						 # rtwtypes.h \
						 # sl_types_def.h \
						 # rtw_matlogging.h \
						 # rtw_extmode.h \
						 # rtw_continuous.h \
						 # rtw_solver.h \
						 # sysran_types.h \
						 # sl_sample_time_defs.h \
					 simstruc_internal_types.h \
						 simstruc_types.h \
							 # rtwtypes.h \
							 # sl_types_def.h \
							 # rtw_matlogging.h \
							 # rtw_extmode.h \
							 # rtw_continuous.h \
							 # rtw_solver.h \
							 # sysran_types.h \
							 # sl_sample_time_defs.h \
					 sl_common_types_def.h \
						 sl_types_def.h \
							 # rtwtypes.h \
						 sl_fixpt.h \
						 sl_datatype_access.h \
							 sl_types_def.h \
								 # rtwtypes.h \
							 sl_report_types.h \
						 rtw_storage.h \
				 simstruc_debug.h \
				 simstruc_internal.h \
					 simstruc_compcond.h \
						 # simstruc_types.h \
						 # solver_zc.h \
						 # slexec_block_runtime_service.h \
					 simstruc_implement.h \
						 sl_common_types_def.h \
							 # sl_types_def.h \
							 # sl_fixpt.h \
							 # sl_datatype_access.h \
							 # rtw_storage.h \
						 simstruc_compcond.h \
							 # simstruc_types.h \
							 # solver_zc.h \
							 # slexec_block_runtime_service.h \
					 simstruc_internal_types.h \
						 # simstruc_types.h \
					 sl_prodhwdevicetype.h \
					 simulink_solver_api.h \
						 simstruc.h \
							 # simstruc_compcond.h \
							 # simstruc_types.h \
							 # simstruc_def.h \
							 # simstruc_debug.h \
							 # simstruc_internal.h \
			 fixedpoint.h \
				 fixpoint_spec.h \
				 simstruc.h \
					 # simstruc_compcond.h \
					 # simstruc_types.h \
					 # simstruc_def.h \
					 # simstruc_debug.h \
					 # simstruc_internal.h \
			 Furuta_Model_types.h \
			 Furuta_Model_dsmpbap.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rt_zcfcn.h \
				 zero_crossing_types.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rt_nonfinite.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rtGetInf.h \
				 rt_nonfinite.h \
					 # rtwtypes.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rtGetNaN.h \
				 rt_nonfinite.h \
					 # rtwtypes.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 zero_crossing_types.h \
		 Furuta_Model_private.h \
			 rtwtypes.h \
				 # tmwtypes.h \
			 multiword_types.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 zero_crossing_types.h \
			 Furuta_Model.h \
				 # rtwtypes.h \
				 # simstruc.h \
				 # fixedpoint.h \
				 # Furuta_Model_types.h \
				 # Furuta_Model_dsmpbap.h \
				 # rt_zcfcn.h \
				 # rt_nonfinite.h \
				 # rtGetInf.h \
				 # rtGetNaN.h \
				 # zero_crossing_types.h \
			 Furuta_Model_types.h \
	 Furuta_Model.h \
		 # rtwtypes.h \
		 # simstruc.h \
		 # fixedpoint.h \
		 # Furuta_Model_types.h \
		 # Furuta_Model_dsmpbap.h \
		 # rt_zcfcn.h \
		 # rt_nonfinite.h \
		 # rtGetInf.h \
		 # rtGetNaN.h \
		 # zero_crossing_types.h \
	 rtwtypes.h \
		 # tmwtypes.h \
	 Furuta_Model_private.h \
		 # rtwtypes.h \
		 # multiword_types.h \
		 # zero_crossing_types.h \
		 # Furuta_Model.h \
		 # Furuta_Model_types.h \
	 rt_nonfinite.h \
		 # rtwtypes.h \
	 zero_crossing_types.h

Furuta_Model_data.oarm: Furuta_Model_data.c \
	 Furuta_Model.h \
		 rtwtypes.h \
			 tmwtypes.h \
		 simstruc.h \
			 simstruc_compcond.h \
				 simstruc_types.h \
					 rtwtypes.h \
						 # tmwtypes.h \
					 sl_types_def.h \
						 rtwtypes.h \
							 # tmwtypes.h \
					 rtw_matlogging.h \
						 sl_types_def.h \
							 # rtwtypes.h \
					 rtw_extmode.h \
						 rtwtypes.h \
							 # tmwtypes.h \
					 rtw_continuous.h \
						 rtwtypes.h \
							 # tmwtypes.h \
					 rtw_solver.h \
						 rtw_continuous.h \
							 # rtwtypes.h \
					 sysran_types.h \
					 sl_sample_time_defs.h \
				 solver_zc.h \
					 rtwtypes.h \
						 # tmwtypes.h \
				 slexec_block_runtime_service.h \
			 simstruc_types.h \
				 # rtwtypes.h \
				 # sl_types_def.h \
				 # rtw_matlogging.h \
				 # rtw_extmode.h \
				 # rtw_continuous.h \
				 # rtw_solver.h \
				 # sysran_types.h \
				 # sl_sample_time_defs.h \
			 simstruc_def.h \
				 simstruc_types.h \
					 # rtwtypes.h \
					 # sl_types_def.h \
					 # rtw_matlogging.h \
					 # rtw_extmode.h \
					 # rtw_continuous.h \
					 # rtw_solver.h \
					 # sysran_types.h \
					 # sl_sample_time_defs.h \
				 simstruc_internal_types.h \
					 simstruc_types.h \
						 # rtwtypes.h \
						 # sl_types_def.h \
						 # rtw_matlogging.h \
						 # rtw_extmode.h \
						 # rtw_continuous.h \
						 # rtw_solver.h \
						 # sysran_types.h \
						 # sl_sample_time_defs.h \
				 sl_common_types_def.h \
					 sl_types_def.h \
						 # rtwtypes.h \
					 sl_fixpt.h \
					 sl_datatype_access.h \
						 sl_types_def.h \
							 # rtwtypes.h \
						 sl_report_types.h \
					 rtw_storage.h \
			 simstruc_debug.h \
			 simstruc_internal.h \
				 simstruc_compcond.h \
					 # simstruc_types.h \
					 # solver_zc.h \
					 # slexec_block_runtime_service.h \
				 simstruc_implement.h \
					 sl_common_types_def.h \
						 # sl_types_def.h \
						 # sl_fixpt.h \
						 # sl_datatype_access.h \
						 # rtw_storage.h \
					 simstruc_compcond.h \
						 # simstruc_types.h \
						 # solver_zc.h \
						 # slexec_block_runtime_service.h \
				 simstruc_internal_types.h \
					 # simstruc_types.h \
				 sl_prodhwdevicetype.h \
				 simulink_solver_api.h \
					 simstruc.h \
						 # simstruc_compcond.h \
						 # simstruc_types.h \
						 # simstruc_def.h \
						 # simstruc_debug.h \
						 # simstruc_internal.h \
		 fixedpoint.h \
			 fixpoint_spec.h \
			 simstruc.h \
				 # simstruc_compcond.h \
				 # simstruc_types.h \
				 # simstruc_def.h \
				 # simstruc_debug.h \
				 # simstruc_internal.h \
		 Furuta_Model_types.h \
		 Furuta_Model_dsmpbap.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rt_zcfcn.h \
			 zero_crossing_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rt_nonfinite.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtGetInf.h \
			 rt_nonfinite.h \
				 # rtwtypes.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtGetNaN.h \
			 rt_nonfinite.h \
				 # rtwtypes.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 zero_crossing_types.h

Furuta_Model_dsmpbap.oarm: Furuta_Model_dsmpbap.c \
	 Furuta_Model_dsmpbap.h \
		 rtwtypes.h \
			 tmwtypes.h \
	 Furuta_Model.h \
		 rtwtypes.h \
			 # tmwtypes.h \
		 simstruc.h \
			 simstruc_compcond.h \
				 simstruc_types.h \
					 rtwtypes.h \
						 # tmwtypes.h \
					 sl_types_def.h \
						 rtwtypes.h \
							 # tmwtypes.h \
					 rtw_matlogging.h \
						 sl_types_def.h \
							 # rtwtypes.h \
					 rtw_extmode.h \
						 rtwtypes.h \
							 # tmwtypes.h \
					 rtw_continuous.h \
						 rtwtypes.h \
							 # tmwtypes.h \
					 rtw_solver.h \
						 rtw_continuous.h \
							 # rtwtypes.h \
					 sysran_types.h \
					 sl_sample_time_defs.h \
				 solver_zc.h \
					 rtwtypes.h \
						 # tmwtypes.h \
				 slexec_block_runtime_service.h \
			 simstruc_types.h \
				 # rtwtypes.h \
				 # sl_types_def.h \
				 # rtw_matlogging.h \
				 # rtw_extmode.h \
				 # rtw_continuous.h \
				 # rtw_solver.h \
				 # sysran_types.h \
				 # sl_sample_time_defs.h \
			 simstruc_def.h \
				 simstruc_types.h \
					 # rtwtypes.h \
					 # sl_types_def.h \
					 # rtw_matlogging.h \
					 # rtw_extmode.h \
					 # rtw_continuous.h \
					 # rtw_solver.h \
					 # sysran_types.h \
					 # sl_sample_time_defs.h \
				 simstruc_internal_types.h \
					 simstruc_types.h \
						 # rtwtypes.h \
						 # sl_types_def.h \
						 # rtw_matlogging.h \
						 # rtw_extmode.h \
						 # rtw_continuous.h \
						 # rtw_solver.h \
						 # sysran_types.h \
						 # sl_sample_time_defs.h \
				 sl_common_types_def.h \
					 sl_types_def.h \
						 # rtwtypes.h \
					 sl_fixpt.h \
					 sl_datatype_access.h \
						 sl_types_def.h \
							 # rtwtypes.h \
						 sl_report_types.h \
					 rtw_storage.h \
			 simstruc_debug.h \
			 simstruc_internal.h \
				 simstruc_compcond.h \
					 # simstruc_types.h \
					 # solver_zc.h \
					 # slexec_block_runtime_service.h \
				 simstruc_implement.h \
					 sl_common_types_def.h \
						 # sl_types_def.h \
						 # sl_fixpt.h \
						 # sl_datatype_access.h \
						 # rtw_storage.h \
					 simstruc_compcond.h \
						 # simstruc_types.h \
						 # solver_zc.h \
						 # slexec_block_runtime_service.h \
				 simstruc_internal_types.h \
					 # simstruc_types.h \
				 sl_prodhwdevicetype.h \
				 simulink_solver_api.h \
					 simstruc.h \
						 # simstruc_compcond.h \
						 # simstruc_types.h \
						 # simstruc_def.h \
						 # simstruc_debug.h \
						 # simstruc_internal.h \
		 fixedpoint.h \
			 fixpoint_spec.h \
			 simstruc.h \
				 # simstruc_compcond.h \
				 # simstruc_types.h \
				 # simstruc_def.h \
				 # simstruc_debug.h \
				 # simstruc_internal.h \
		 Furuta_Model_types.h \
		 Furuta_Model_dsmpbap.h \
			 # rtwtypes.h \
		 rt_zcfcn.h \
			 zero_crossing_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rt_nonfinite.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtGetInf.h \
			 rt_nonfinite.h \
				 # rtwtypes.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtGetNaN.h \
			 rt_nonfinite.h \
				 # rtwtypes.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 zero_crossing_types.h \
	 Furuta_Model_private.h \
		 rtwtypes.h \
			 # tmwtypes.h \
		 multiword_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 zero_crossing_types.h \
		 Furuta_Model.h \
			 # rtwtypes.h \
			 # simstruc.h \
			 # fixedpoint.h \
			 # Furuta_Model_types.h \
			 # Furuta_Model_dsmpbap.h \
			 # rt_zcfcn.h \
			 # rt_nonfinite.h \
			 # rtGetInf.h \
			 # rtGetNaN.h \
			 # zero_crossing_types.h \
		 Furuta_Model_types.h

Furuta_Model_dsrtmdlfcn.oarm: Furuta_Model_dsrtmdlfcn.c \
	 rtmodel.h \
		 Furuta_Model.h \
			 rtwtypes.h \
				 tmwtypes.h \
			 simstruc.h \
				 simstruc_compcond.h \
					 simstruc_types.h \
						 rtwtypes.h \
							 # tmwtypes.h \
						 sl_types_def.h \
							 rtwtypes.h \
								 # tmwtypes.h \
						 rtw_matlogging.h \
							 sl_types_def.h \
								 # rtwtypes.h \
						 rtw_extmode.h \
							 rtwtypes.h \
								 # tmwtypes.h \
						 rtw_continuous.h \
							 rtwtypes.h \
								 # tmwtypes.h \
						 rtw_solver.h \
							 rtw_continuous.h \
								 # rtwtypes.h \
						 sysran_types.h \
						 sl_sample_time_defs.h \
					 solver_zc.h \
						 rtwtypes.h \
							 # tmwtypes.h \
					 slexec_block_runtime_service.h \
				 simstruc_types.h \
					 # rtwtypes.h \
					 # sl_types_def.h \
					 # rtw_matlogging.h \
					 # rtw_extmode.h \
					 # rtw_continuous.h \
					 # rtw_solver.h \
					 # sysran_types.h \
					 # sl_sample_time_defs.h \
				 simstruc_def.h \
					 simstruc_types.h \
						 # rtwtypes.h \
						 # sl_types_def.h \
						 # rtw_matlogging.h \
						 # rtw_extmode.h \
						 # rtw_continuous.h \
						 # rtw_solver.h \
						 # sysran_types.h \
						 # sl_sample_time_defs.h \
					 simstruc_internal_types.h \
						 simstruc_types.h \
							 # rtwtypes.h \
							 # sl_types_def.h \
							 # rtw_matlogging.h \
							 # rtw_extmode.h \
							 # rtw_continuous.h \
							 # rtw_solver.h \
							 # sysran_types.h \
							 # sl_sample_time_defs.h \
					 sl_common_types_def.h \
						 sl_types_def.h \
							 # rtwtypes.h \
						 sl_fixpt.h \
						 sl_datatype_access.h \
							 sl_types_def.h \
								 # rtwtypes.h \
							 sl_report_types.h \
						 rtw_storage.h \
				 simstruc_debug.h \
				 simstruc_internal.h \
					 simstruc_compcond.h \
						 # simstruc_types.h \
						 # solver_zc.h \
						 # slexec_block_runtime_service.h \
					 simstruc_implement.h \
						 sl_common_types_def.h \
							 # sl_types_def.h \
							 # sl_fixpt.h \
							 # sl_datatype_access.h \
							 # rtw_storage.h \
						 simstruc_compcond.h \
							 # simstruc_types.h \
							 # solver_zc.h \
							 # slexec_block_runtime_service.h \
					 simstruc_internal_types.h \
						 # simstruc_types.h \
					 sl_prodhwdevicetype.h \
					 simulink_solver_api.h \
						 simstruc.h \
							 # simstruc_compcond.h \
							 # simstruc_types.h \
							 # simstruc_def.h \
							 # simstruc_debug.h \
							 # simstruc_internal.h \
			 fixedpoint.h \
				 fixpoint_spec.h \
				 simstruc.h \
					 # simstruc_compcond.h \
					 # simstruc_types.h \
					 # simstruc_def.h \
					 # simstruc_debug.h \
					 # simstruc_internal.h \
			 Furuta_Model_types.h \
			 Furuta_Model_dsmpbap.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rt_zcfcn.h \
				 zero_crossing_types.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rt_nonfinite.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rtGetInf.h \
				 rt_nonfinite.h \
					 # rtwtypes.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rtGetNaN.h \
				 rt_nonfinite.h \
					 # rtwtypes.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 zero_crossing_types.h \
	 rtwtypes.h \
		 # tmwtypes.h \
	 Furuta_Model_dsrtmdlfcn.h \
		 rtwtypes.h \
			 # tmwtypes.h

Furuta_Model_dsrtmf.oarm: Furuta_Model_dsrtmf.c \
	 Furuta_Model.h \
		 rtwtypes.h \
			 tmwtypes.h \
		 simstruc.h \
			 simstruc_compcond.h \
				 simstruc_types.h \
					 rtwtypes.h \
						 # tmwtypes.h \
					 sl_types_def.h \
						 rtwtypes.h \
							 # tmwtypes.h \
					 rtw_matlogging.h \
						 sl_types_def.h \
							 # rtwtypes.h \
					 rtw_extmode.h \
						 rtwtypes.h \
							 # tmwtypes.h \
					 rtw_continuous.h \
						 rtwtypes.h \
							 # tmwtypes.h \
					 rtw_solver.h \
						 rtw_continuous.h \
							 # rtwtypes.h \
					 sysran_types.h \
					 sl_sample_time_defs.h \
				 solver_zc.h \
					 rtwtypes.h \
						 # tmwtypes.h \
				 slexec_block_runtime_service.h \
			 simstruc_types.h \
				 # rtwtypes.h \
				 # sl_types_def.h \
				 # rtw_matlogging.h \
				 # rtw_extmode.h \
				 # rtw_continuous.h \
				 # rtw_solver.h \
				 # sysran_types.h \
				 # sl_sample_time_defs.h \
			 simstruc_def.h \
				 simstruc_types.h \
					 # rtwtypes.h \
					 # sl_types_def.h \
					 # rtw_matlogging.h \
					 # rtw_extmode.h \
					 # rtw_continuous.h \
					 # rtw_solver.h \
					 # sysran_types.h \
					 # sl_sample_time_defs.h \
				 simstruc_internal_types.h \
					 simstruc_types.h \
						 # rtwtypes.h \
						 # sl_types_def.h \
						 # rtw_matlogging.h \
						 # rtw_extmode.h \
						 # rtw_continuous.h \
						 # rtw_solver.h \
						 # sysran_types.h \
						 # sl_sample_time_defs.h \
				 sl_common_types_def.h \
					 sl_types_def.h \
						 # rtwtypes.h \
					 sl_fixpt.h \
					 sl_datatype_access.h \
						 sl_types_def.h \
							 # rtwtypes.h \
						 sl_report_types.h \
					 rtw_storage.h \
			 simstruc_debug.h \
			 simstruc_internal.h \
				 simstruc_compcond.h \
					 # simstruc_types.h \
					 # solver_zc.h \
					 # slexec_block_runtime_service.h \
				 simstruc_implement.h \
					 sl_common_types_def.h \
						 # sl_types_def.h \
						 # sl_fixpt.h \
						 # sl_datatype_access.h \
						 # rtw_storage.h \
					 simstruc_compcond.h \
						 # simstruc_types.h \
						 # solver_zc.h \
						 # slexec_block_runtime_service.h \
				 simstruc_internal_types.h \
					 # simstruc_types.h \
				 sl_prodhwdevicetype.h \
				 simulink_solver_api.h \
					 simstruc.h \
						 # simstruc_compcond.h \
						 # simstruc_types.h \
						 # simstruc_def.h \
						 # simstruc_debug.h \
						 # simstruc_internal.h \
		 fixedpoint.h \
			 fixpoint_spec.h \
			 simstruc.h \
				 # simstruc_compcond.h \
				 # simstruc_types.h \
				 # simstruc_def.h \
				 # simstruc_debug.h \
				 # simstruc_internal.h \
		 Furuta_Model_types.h \
		 Furuta_Model_dsmpbap.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rt_zcfcn.h \
			 zero_crossing_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rt_nonfinite.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtGetInf.h \
			 rt_nonfinite.h \
				 # rtwtypes.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtGetNaN.h \
			 rt_nonfinite.h \
				 # rtwtypes.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 zero_crossing_types.h \
	 Furuta_Model_private.h \
		 rtwtypes.h \
			 # tmwtypes.h \
		 multiword_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 zero_crossing_types.h \
		 Furuta_Model.h \
			 # rtwtypes.h \
			 # simstruc.h \
			 # fixedpoint.h \
			 # Furuta_Model_types.h \
			 # Furuta_Model_dsmpbap.h \
			 # rt_zcfcn.h \
			 # rt_nonfinite.h \
			 # rtGetInf.h \
			 # rtGetNaN.h \
			 # zero_crossing_types.h \
		 Furuta_Model_types.h \
	 Furuta_Model_dsrtmf.h

Furuta_Model_dsrttf.oarm: Furuta_Model_dsrttf.c \
	 Furuta_Model_dsrttf.h \
	 Furuta_Model.h \
		 rtwtypes.h \
			 tmwtypes.h \
		 simstruc.h \
			 simstruc_compcond.h \
				 simstruc_types.h \
					 rtwtypes.h \
						 # tmwtypes.h \
					 sl_types_def.h \
						 rtwtypes.h \
							 # tmwtypes.h \
					 rtw_matlogging.h \
						 sl_types_def.h \
							 # rtwtypes.h \
					 rtw_extmode.h \
						 rtwtypes.h \
							 # tmwtypes.h \
					 rtw_continuous.h \
						 rtwtypes.h \
							 # tmwtypes.h \
					 rtw_solver.h \
						 rtw_continuous.h \
							 # rtwtypes.h \
					 sysran_types.h \
					 sl_sample_time_defs.h \
				 solver_zc.h \
					 rtwtypes.h \
						 # tmwtypes.h \
				 slexec_block_runtime_service.h \
			 simstruc_types.h \
				 # rtwtypes.h \
				 # sl_types_def.h \
				 # rtw_matlogging.h \
				 # rtw_extmode.h \
				 # rtw_continuous.h \
				 # rtw_solver.h \
				 # sysran_types.h \
				 # sl_sample_time_defs.h \
			 simstruc_def.h \
				 simstruc_types.h \
					 # rtwtypes.h \
					 # sl_types_def.h \
					 # rtw_matlogging.h \
					 # rtw_extmode.h \
					 # rtw_continuous.h \
					 # rtw_solver.h \
					 # sysran_types.h \
					 # sl_sample_time_defs.h \
				 simstruc_internal_types.h \
					 simstruc_types.h \
						 # rtwtypes.h \
						 # sl_types_def.h \
						 # rtw_matlogging.h \
						 # rtw_extmode.h \
						 # rtw_continuous.h \
						 # rtw_solver.h \
						 # sysran_types.h \
						 # sl_sample_time_defs.h \
				 sl_common_types_def.h \
					 sl_types_def.h \
						 # rtwtypes.h \
					 sl_fixpt.h \
					 sl_datatype_access.h \
						 sl_types_def.h \
							 # rtwtypes.h \
						 sl_report_types.h \
					 rtw_storage.h \
			 simstruc_debug.h \
			 simstruc_internal.h \
				 simstruc_compcond.h \
					 # simstruc_types.h \
					 # solver_zc.h \
					 # slexec_block_runtime_service.h \
				 simstruc_implement.h \
					 sl_common_types_def.h \
						 # sl_types_def.h \
						 # sl_fixpt.h \
						 # sl_datatype_access.h \
						 # rtw_storage.h \
					 simstruc_compcond.h \
						 # simstruc_types.h \
						 # solver_zc.h \
						 # slexec_block_runtime_service.h \
				 simstruc_internal_types.h \
					 # simstruc_types.h \
				 sl_prodhwdevicetype.h \
				 simulink_solver_api.h \
					 simstruc.h \
						 # simstruc_compcond.h \
						 # simstruc_types.h \
						 # simstruc_def.h \
						 # simstruc_debug.h \
						 # simstruc_internal.h \
		 fixedpoint.h \
			 fixpoint_spec.h \
			 simstruc.h \
				 # simstruc_compcond.h \
				 # simstruc_types.h \
				 # simstruc_def.h \
				 # simstruc_debug.h \
				 # simstruc_internal.h \
		 Furuta_Model_types.h \
		 Furuta_Model_dsmpbap.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rt_zcfcn.h \
			 zero_crossing_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rt_nonfinite.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtGetInf.h \
			 rt_nonfinite.h \
				 # rtwtypes.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtGetNaN.h \
			 rt_nonfinite.h \
				 # rtwtypes.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 zero_crossing_types.h \
	 Furuta_Model_private.h \
		 rtwtypes.h \
			 # tmwtypes.h \
		 multiword_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 zero_crossing_types.h \
		 Furuta_Model.h \
			 # rtwtypes.h \
			 # simstruc.h \
			 # fixedpoint.h \
			 # Furuta_Model_types.h \
			 # Furuta_Model_dsmpbap.h \
			 # rt_zcfcn.h \
			 # rt_nonfinite.h \
			 # rtGetInf.h \
			 # rtGetNaN.h \
			 # zero_crossing_types.h \
		 Furuta_Model_types.h

Furuta_Model_dsrtvdf.oarm: Furuta_Model_dsrtvdf.c \
	 Furuta_Model_dsrtvdf.h \
		 Furuta_Model.h \
			 rtwtypes.h \
				 tmwtypes.h \
			 simstruc.h \
				 simstruc_compcond.h \
					 simstruc_types.h \
						 rtwtypes.h \
							 # tmwtypes.h \
						 sl_types_def.h \
							 rtwtypes.h \
								 # tmwtypes.h \
						 rtw_matlogging.h \
							 sl_types_def.h \
								 # rtwtypes.h \
						 rtw_extmode.h \
							 rtwtypes.h \
								 # tmwtypes.h \
						 rtw_continuous.h \
							 rtwtypes.h \
								 # tmwtypes.h \
						 rtw_solver.h \
							 rtw_continuous.h \
								 # rtwtypes.h \
						 sysran_types.h \
						 sl_sample_time_defs.h \
					 solver_zc.h \
						 rtwtypes.h \
							 # tmwtypes.h \
					 slexec_block_runtime_service.h \
				 simstruc_types.h \
					 # rtwtypes.h \
					 # sl_types_def.h \
					 # rtw_matlogging.h \
					 # rtw_extmode.h \
					 # rtw_continuous.h \
					 # rtw_solver.h \
					 # sysran_types.h \
					 # sl_sample_time_defs.h \
				 simstruc_def.h \
					 simstruc_types.h \
						 # rtwtypes.h \
						 # sl_types_def.h \
						 # rtw_matlogging.h \
						 # rtw_extmode.h \
						 # rtw_continuous.h \
						 # rtw_solver.h \
						 # sysran_types.h \
						 # sl_sample_time_defs.h \
					 simstruc_internal_types.h \
						 simstruc_types.h \
							 # rtwtypes.h \
							 # sl_types_def.h \
							 # rtw_matlogging.h \
							 # rtw_extmode.h \
							 # rtw_continuous.h \
							 # rtw_solver.h \
							 # sysran_types.h \
							 # sl_sample_time_defs.h \
					 sl_common_types_def.h \
						 sl_types_def.h \
							 # rtwtypes.h \
						 sl_fixpt.h \
						 sl_datatype_access.h \
							 sl_types_def.h \
								 # rtwtypes.h \
							 sl_report_types.h \
						 rtw_storage.h \
				 simstruc_debug.h \
				 simstruc_internal.h \
					 simstruc_compcond.h \
						 # simstruc_types.h \
						 # solver_zc.h \
						 # slexec_block_runtime_service.h \
					 simstruc_implement.h \
						 sl_common_types_def.h \
							 # sl_types_def.h \
							 # sl_fixpt.h \
							 # sl_datatype_access.h \
							 # rtw_storage.h \
						 simstruc_compcond.h \
							 # simstruc_types.h \
							 # solver_zc.h \
							 # slexec_block_runtime_service.h \
					 simstruc_internal_types.h \
						 # simstruc_types.h \
					 sl_prodhwdevicetype.h \
					 simulink_solver_api.h \
						 simstruc.h \
							 # simstruc_compcond.h \
							 # simstruc_types.h \
							 # simstruc_def.h \
							 # simstruc_debug.h \
							 # simstruc_internal.h \
			 fixedpoint.h \
				 fixpoint_spec.h \
				 simstruc.h \
					 # simstruc_compcond.h \
					 # simstruc_types.h \
					 # simstruc_def.h \
					 # simstruc_debug.h \
					 # simstruc_internal.h \
			 Furuta_Model_types.h \
			 Furuta_Model_dsmpbap.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rt_zcfcn.h \
				 zero_crossing_types.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rt_nonfinite.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rtGetInf.h \
				 rt_nonfinite.h \
					 # rtwtypes.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rtGetNaN.h \
				 rt_nonfinite.h \
					 # rtwtypes.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 zero_crossing_types.h \
		 Furuta_Model_private.h \
			 rtwtypes.h \
				 # tmwtypes.h \
			 multiword_types.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 zero_crossing_types.h \
			 Furuta_Model.h \
				 # rtwtypes.h \
				 # simstruc.h \
				 # fixedpoint.h \
				 # Furuta_Model_types.h \
				 # Furuta_Model_dsmpbap.h \
				 # rt_zcfcn.h \
				 # rt_nonfinite.h \
				 # rtGetInf.h \
				 # rtGetNaN.h \
				 # zero_crossing_types.h \
			 Furuta_Model_types.h \
	 Furuta_Model.h \
		 # rtwtypes.h \
		 # simstruc.h \
		 # fixedpoint.h \
		 # Furuta_Model_types.h \
		 # Furuta_Model_dsmpbap.h \
		 # rt_zcfcn.h \
		 # rt_nonfinite.h \
		 # rtGetInf.h \
		 # rtGetNaN.h \
		 # zero_crossing_types.h \
	 Furuta_Model_private.h \
		 # rtwtypes.h \
		 # multiword_types.h \
		 # zero_crossing_types.h \
		 # Furuta_Model.h \
		 # Furuta_Model_types.h

rtGetInf.oarm: rtGetInf.c \
	 rtwtypes.h \
		 tmwtypes.h \
	 rtGetInf.h \
		 rt_nonfinite.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtwtypes.h \
			 # tmwtypes.h \
	 rt_nonfinite.h \
		 # rtwtypes.h

rtGetNaN.oarm: rtGetNaN.c \
	 rtwtypes.h \
		 tmwtypes.h \
	 rtGetNaN.h \
		 rt_nonfinite.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtwtypes.h \
			 # tmwtypes.h \
	 rt_nonfinite.h \
		 # rtwtypes.h

rt_nonfinite.oarm: rt_nonfinite.c \
	 rtGetNaN.h \
		 rt_nonfinite.h \
			 rtwtypes.h \
				 tmwtypes.h \
		 rtwtypes.h \
			 # tmwtypes.h \
	 rtGetInf.h \
		 rt_nonfinite.h \
			 # rtwtypes.h \
		 rtwtypes.h \
			 # tmwtypes.h \
	 rtwtypes.h \
		 # tmwtypes.h \
	 rt_nonfinite.h \
		 # rtwtypes.h

rt_zcfcn.oarm: rt_zcfcn.c \
	 zero_crossing_types.h \
	 rtwtypes.h \
		 tmwtypes.h \
	 rt_zcfcn.h \
		 zero_crossing_types.h \
		 rtwtypes.h \
			 # tmwtypes.h \
	 solver_zc.h \
		 rtwtypes.h \
			 # tmwtypes.h

furuta_expl_ode_fun.oarm: furuta_expl_ode_fun.c

furuta_expl_ode_hess.oarm: furuta_expl_ode_hess.c

furuta_expl_vde_adj.oarm: furuta_expl_vde_adj.c

furuta_expl_vde_forw.oarm: furuta_expl_vde_forw.c

acados_solver_furuta.oarm: acados_solver_furuta.c \
	 ocp_nlp_interface.h \
		 ocp_nlp_common.h \
			 ocp_nlp_constraints_common.h \
				 ocp_qp_common.h \
					 hpipm_d_ocp_qp.h \
						 blasfeo_target.h \
						 blasfeo_common.h \
							 blasfeo_target.h \
							 blasfeo_block_size.h \
						 hpipm_d_ocp_qp_dim.h \
							 hpipm_common.h \
					 hpipm_d_ocp_qp_dim.h \
						 # hpipm_common.h \
					 hpipm_d_ocp_qp_res.h \
						 blasfeo_target.h \
						 blasfeo_common.h \
							 # blasfeo_target.h \
							 # blasfeo_block_size.h \
						 hpipm_common.h \
						 hpipm_d_ocp_qp_dim.h \
							 # hpipm_common.h \
						 hpipm_d_ocp_qp.h \
							 # blasfeo_target.h \
							 # blasfeo_common.h \
							 # hpipm_d_ocp_qp_dim.h \
						 hpipm_d_ocp_qp_sol.h \
							 blasfeo_target.h \
							 blasfeo_common.h \
								 # blasfeo_target.h \
								 # blasfeo_block_size.h \
							 hpipm_d_ocp_qp_dim.h \
								 # hpipm_common.h \
					 hpipm_d_ocp_qp_sol.h \
						 # blasfeo_target.h \
						 # blasfeo_common.h \
						 # hpipm_d_ocp_qp_dim.h \
					 types.h \
				 external_function_generic.h \
					 types.h \
				 types.h \
			 ocp_nlp_cost_common.h \
				 external_function_generic.h \
					 # types.h \
				 types.h \
			 ocp_nlp_dynamics_common.h \
				 blasfeo_common.h \
					 # blasfeo_target.h \
					 # blasfeo_block_size.h \
				 sim_common.h \
					 sim_collocation_utils.h \
						 types.h \
					 timing.h \
						 types.h \
					 types.h \
					 external_function_generic.h \
						 # types.h \
				 external_function_generic.h \
					 # types.h \
				 types.h \
			 ocp_nlp_reg_common.h \
				 ocp_qp_common.h \
					 # hpipm_d_ocp_qp.h \
					 # hpipm_d_ocp_qp_dim.h \
					 # hpipm_d_ocp_qp_res.h \
					 # hpipm_d_ocp_qp_sol.h \
					 # types.h \
			 ocp_qp_common.h \
				 # hpipm_d_ocp_qp.h \
				 # hpipm_d_ocp_qp_dim.h \
				 # hpipm_d_ocp_qp_res.h \
				 # hpipm_d_ocp_qp_sol.h \
				 # types.h \
			 ocp_qp_xcond_solver.h \
				 ocp_qp_common.h \
					 # hpipm_d_ocp_qp.h \
					 # hpipm_d_ocp_qp_dim.h \
					 # hpipm_d_ocp_qp_res.h \
					 # hpipm_d_ocp_qp_sol.h \
					 # types.h \
				 types.h \
			 sim_common.h \
				 # sim_collocation_utils.h \
				 # timing.h \
				 # types.h \
				 # external_function_generic.h \
			 external_function_generic.h \
				 # types.h \
			 types.h \
		 ocp_nlp_constraints_bgh.h \
			 ocp_qp_common.h \
				 # hpipm_d_ocp_qp.h \
				 # hpipm_d_ocp_qp_dim.h \
				 # hpipm_d_ocp_qp_res.h \
				 # hpipm_d_ocp_qp_sol.h \
				 # types.h \
			 ocp_nlp_constraints_common.h \
				 # ocp_qp_common.h \
				 # external_function_generic.h \
				 # types.h \
			 external_function_generic.h \
				 # types.h \
			 types.h \
		 sim_erk_integrator.h \
			 sim_common.h \
				 # sim_collocation_utils.h \
				 # timing.h \
				 # types.h \
				 # external_function_generic.h \
			 types.h \
		 sim_irk_integrator.h \
			 sim_common.h \
				 # sim_collocation_utils.h \
				 # timing.h \
				 # types.h \
				 # external_function_generic.h \
			 types.h \
			 blasfeo_common.h \
				 # blasfeo_target.h \
				 # blasfeo_block_size.h \
		 sim_lifted_irk_integrator.h \
			 sim_common.h \
				 # sim_collocation_utils.h \
				 # timing.h \
				 # types.h \
				 # external_function_generic.h \
			 types.h \
		 sim_gnsf.h \
			 timing.h \
				 # types.h \
			 types.h \
			 sim_common.h \
				 # sim_collocation_utils.h \
				 # timing.h \
				 # types.h \
				 # external_function_generic.h \
			 blasfeo_common.h \
				 # blasfeo_target.h \
				 # blasfeo_block_size.h \
		 types.h \
		 ocp_qp_interface.h \
			 ocp_qp_common.h \
				 # hpipm_d_ocp_qp.h \
				 # hpipm_d_ocp_qp_dim.h \
				 # hpipm_d_ocp_qp_res.h \
				 # hpipm_d_ocp_qp_sol.h \
				 # types.h \
			 ocp_qp_xcond_solver.h \
				 # ocp_qp_common.h \
				 # types.h \
		 sim_interface.h \
			 sim_common.h \
				 # sim_collocation_utils.h \
				 # timing.h \
				 # types.h \
				 # external_function_generic.h \
	 external_function_interface.h \
		 external_function_generic.h \
			 # types.h \
	 furuta_model.h \
	 acados_solver_furuta.h \
		 types.h \
		 ocp_nlp_interface.h \
			 # ocp_nlp_common.h \
			 # ocp_nlp_constraints_bgh.h \
			 # sim_erk_integrator.h \
			 # sim_irk_integrator.h \
			 # sim_lifted_irk_integrator.h \
			 # sim_gnsf.h \
			 # types.h \
			 # ocp_qp_interface.h \
			 # sim_interface.h \
		 external_function_interface.h \
			 # external_function_generic.h

acados_solver_sfunction_furuta.oarm: acados_solver_sfunction_furuta.c \
	 sim_interface.h \
		 sim_common.h \
			 sim_collocation_utils.h \
				 types.h \
			 timing.h \
				 types.h \
			 types.h \
			 external_function_generic.h \
				 types.h \
	 external_function_interface.h \
		 external_function_generic.h \
			 # types.h \
	 furuta_model.h \
	 acados_solver_furuta.h \
		 types.h \
		 ocp_nlp_interface.h \
			 ocp_nlp_common.h \
				 ocp_nlp_constraints_common.h \
					 ocp_qp_common.h \
						 hpipm_d_ocp_qp.h \
							 blasfeo_target.h \
							 blasfeo_common.h \
								 blasfeo_target.h \
								 blasfeo_block_size.h \
							 hpipm_d_ocp_qp_dim.h \
								 hpipm_common.h \
						 hpipm_d_ocp_qp_dim.h \
							 # hpipm_common.h \
						 hpipm_d_ocp_qp_res.h \
							 blasfeo_target.h \
							 blasfeo_common.h \
								 # blasfeo_target.h \
								 # blasfeo_block_size.h \
							 hpipm_common.h \
							 hpipm_d_ocp_qp_dim.h \
								 # hpipm_common.h \
							 hpipm_d_ocp_qp.h \
								 # blasfeo_target.h \
								 # blasfeo_common.h \
								 # hpipm_d_ocp_qp_dim.h \
							 hpipm_d_ocp_qp_sol.h \
								 blasfeo_target.h \
								 blasfeo_common.h \
									 # blasfeo_target.h \
									 # blasfeo_block_size.h \
								 hpipm_d_ocp_qp_dim.h \
									 # hpipm_common.h \
						 hpipm_d_ocp_qp_sol.h \
							 # blasfeo_target.h \
							 # blasfeo_common.h \
							 # hpipm_d_ocp_qp_dim.h \
						 types.h \
					 external_function_generic.h \
						 # types.h \
					 types.h \
				 ocp_nlp_cost_common.h \
					 external_function_generic.h \
						 # types.h \
					 types.h \
				 ocp_nlp_dynamics_common.h \
					 blasfeo_common.h \
						 # blasfeo_target.h \
						 # blasfeo_block_size.h \
					 sim_common.h \
						 # sim_collocation_utils.h \
						 # timing.h \
						 # types.h \
						 # external_function_generic.h \
					 external_function_generic.h \
						 # types.h \
					 types.h \
				 ocp_nlp_reg_common.h \
					 ocp_qp_common.h \
						 # hpipm_d_ocp_qp.h \
						 # hpipm_d_ocp_qp_dim.h \
						 # hpipm_d_ocp_qp_res.h \
						 # hpipm_d_ocp_qp_sol.h \
						 # types.h \
				 ocp_qp_common.h \
					 # hpipm_d_ocp_qp.h \
					 # hpipm_d_ocp_qp_dim.h \
					 # hpipm_d_ocp_qp_res.h \
					 # hpipm_d_ocp_qp_sol.h \
					 # types.h \
				 ocp_qp_xcond_solver.h \
					 ocp_qp_common.h \
						 # hpipm_d_ocp_qp.h \
						 # hpipm_d_ocp_qp_dim.h \
						 # hpipm_d_ocp_qp_res.h \
						 # hpipm_d_ocp_qp_sol.h \
						 # types.h \
					 types.h \
				 sim_common.h \
					 # sim_collocation_utils.h \
					 # timing.h \
					 # types.h \
					 # external_function_generic.h \
				 external_function_generic.h \
					 # types.h \
				 types.h \
			 ocp_nlp_constraints_bgh.h \
				 ocp_qp_common.h \
					 # hpipm_d_ocp_qp.h \
					 # hpipm_d_ocp_qp_dim.h \
					 # hpipm_d_ocp_qp_res.h \
					 # hpipm_d_ocp_qp_sol.h \
					 # types.h \
				 ocp_nlp_constraints_common.h \
					 # ocp_qp_common.h \
					 # external_function_generic.h \
					 # types.h \
				 external_function_generic.h \
					 # types.h \
				 types.h \
			 sim_erk_integrator.h \
				 sim_common.h \
					 # sim_collocation_utils.h \
					 # timing.h \
					 # types.h \
					 # external_function_generic.h \
				 types.h \
			 sim_irk_integrator.h \
				 sim_common.h \
					 # sim_collocation_utils.h \
					 # timing.h \
					 # types.h \
					 # external_function_generic.h \
				 types.h \
				 blasfeo_common.h \
					 # blasfeo_target.h \
					 # blasfeo_block_size.h \
			 sim_lifted_irk_integrator.h \
				 sim_common.h \
					 # sim_collocation_utils.h \
					 # timing.h \
					 # types.h \
					 # external_function_generic.h \
				 types.h \
			 sim_gnsf.h \
				 timing.h \
					 # types.h \
				 types.h \
				 sim_common.h \
					 # sim_collocation_utils.h \
					 # timing.h \
					 # types.h \
					 # external_function_generic.h \
				 blasfeo_common.h \
					 # blasfeo_target.h \
					 # blasfeo_block_size.h \
			 types.h \
			 ocp_qp_interface.h \
				 ocp_qp_common.h \
					 # hpipm_d_ocp_qp.h \
					 # hpipm_d_ocp_qp_dim.h \
					 # hpipm_d_ocp_qp_res.h \
					 # hpipm_d_ocp_qp_sol.h \
					 # types.h \
				 ocp_qp_xcond_solver.h \
					 # ocp_qp_common.h \
					 # types.h \
			 sim_interface.h \
				 # sim_common.h \
		 external_function_interface.h \
			 # external_function_generic.h \
	 simstruc.h \
		 simstruc_compcond.h \
			 simstruc_types.h \
				 rtwtypes.h \
					 tmwtypes.h \
				 sl_types_def.h \
					 rtwtypes.h \
						 # tmwtypes.h \
				 rtw_matlogging.h \
					 sl_types_def.h \
						 # rtwtypes.h \
				 rtw_extmode.h \
					 rtwtypes.h \
						 # tmwtypes.h \
				 rtw_continuous.h \
					 rtwtypes.h \
						 # tmwtypes.h \
				 rtw_solver.h \
					 rtw_continuous.h \
						 # rtwtypes.h \
				 sysran_types.h \
				 sl_sample_time_defs.h \
			 solver_zc.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 slexec_block_runtime_service.h \
		 simstruc_types.h \
			 # rtwtypes.h \
			 # sl_types_def.h \
			 # rtw_matlogging.h \
			 # rtw_extmode.h \
			 # rtw_continuous.h \
			 # rtw_solver.h \
			 # sysran_types.h \
			 # sl_sample_time_defs.h \
		 simstruc_def.h \
			 simstruc_types.h \
				 # rtwtypes.h \
				 # sl_types_def.h \
				 # rtw_matlogging.h \
				 # rtw_extmode.h \
				 # rtw_continuous.h \
				 # rtw_solver.h \
				 # sysran_types.h \
				 # sl_sample_time_defs.h \
			 simstruc_internal_types.h \
				 simstruc_types.h \
					 # rtwtypes.h \
					 # sl_types_def.h \
					 # rtw_matlogging.h \
					 # rtw_extmode.h \
					 # rtw_continuous.h \
					 # rtw_solver.h \
					 # sysran_types.h \
					 # sl_sample_time_defs.h \
			 sl_common_types_def.h \
				 sl_types_def.h \
					 # rtwtypes.h \
				 sl_fixpt.h \
				 sl_datatype_access.h \
					 sl_types_def.h \
						 # rtwtypes.h \
					 sl_report_types.h \
				 rtw_storage.h \
		 simstruc_debug.h \
		 simstruc_internal.h \
			 simstruc_compcond.h \
				 # simstruc_types.h \
				 # solver_zc.h \
				 # slexec_block_runtime_service.h \
			 simstruc_implement.h \
				 sl_common_types_def.h \
					 # sl_types_def.h \
					 # sl_fixpt.h \
					 # sl_datatype_access.h \
					 # rtw_storage.h \
				 simstruc_compcond.h \
					 # simstruc_types.h \
					 # solver_zc.h \
					 # slexec_block_runtime_service.h \
			 simstruc_internal_types.h \
				 # simstruc_types.h \
			 sl_prodhwdevicetype.h \
			 simulink_solver_api.h \
				 simstruc.h \
					 # simstruc_compcond.h \
					 # simstruc_types.h \
					 # simstruc_def.h \
					 # simstruc_debug.h \
					 # simstruc_internal.h \
	 cg_sfun.h
