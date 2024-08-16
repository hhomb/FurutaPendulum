CC_OPT_SET_SUPPORTED_VALUES = DEFAULT NONE CUSTOM 
INCLUDE_MAKEFILE_VERSION    = 1 
SRCS= mdladapter_mdlfunctions.cpp mdlCode_ap.cpp data_in_ap.cpp data_out_ap.cpp fm_entry_ap.cpp fm_exit_ap.cpp \
		  dssimengine_accesspoint.cpp dssimengine_api.cpp dssimengine_main.cpp rtosal_task.cpp rtosal_taskap.cpp \
		  rtosal_simengineap.cpp IOCode_Data.cpp dssimengine_accesspoint_Digital_Incremental_Encoder_In.cpp \
		  dssimengine_accesspoint_Voltage_In.cpp dssimengine_accesspoint_Voltage_Out.cpp
MRK_FILES                   =  mdladapter_mdlfunctions.mrk mdlCode_ap.mrk data_in_ap.mrk data_out_ap.mrk fm_entry_ap.mrk fm_exit_ap.mrk dssimengine_accesspoint.mrk dssimengine_api.mrk dssimengine_main.mrk rtosal_task.mrk rtosal_taskap.mrk rtosal_simengineap.mrk IOCode_Data.mrk dssimengine_accesspoint_Digital_Incremental_Encoder_In.mrk dssimengine_accesspoint_Voltage_In.mrk dssimengine_accesspoint_Voltage_Out.mrk 
OBJS= mdladapter_mdlfunctions.oarm mdlCode_ap.oarm data_in_ap.oarm data_out_ap.oarm fm_entry_ap.oarm fm_exit_ap.oarm \
		  dssimengine_accesspoint.oarm dssimengine_api.oarm dssimengine_main.oarm rtosal_task.oarm rtosal_taskap.oarm \
		  rtosal_simengineap.oarm IOCode_Data.oarm dssimengine_accesspoint_Digital_Incremental_Encoder_In.oarm \
		  dssimengine_accesspoint_Voltage_In.oarm dssimengine_accesspoint_Voltage_Out.oarm
CC_SRC_DIRPATHS = \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Build\Furuta_Model\SysIntCode \
 "C:\Program Files\dSPACE RCPHIL 2021-A\ConfigurationDesk\Implementation\EmbeddedSW\Src" 
 
CC_HDR_DIRPATHS = \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Build\Furuta_Model\SysIntCode \
 "C:\Program Files\dSPACE RCPHIL 2021-A\ConfigurationDesk\Implementation\EmbeddedSW\Src" 
 
LIB_DIRPATHS                =    
CUSTOM_DIRPATHS             =   
CC_ADD_OPTS                 =    
CPP_ADD_OPTS                =    
CC_ADD_DEFINES              = DATA_PORT_ACCESS_POINT_API_VERSION=2 
CC_ADD_UNDEFS               =  
CC_OPT_SET                  = Default 
CC_CUSTOM_OPT_OPTS          =  

all : MakeCheckMarker_All MakeCompile 

depend : 

%include Configuration.mk 
%include CommonRules.mk 

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
 -IC:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Build\Furuta_Model\SysIntCode \
 -I"C:\Program Files\dSPACE RCPHIL 2021-A\ConfigurationDesk\Implementation\EmbeddedSW\Src" \
 -I"C:\Program Files\dSPACE RCPHIL 2021-A\DS1403\Include" \
 -DDATA_PORT_ACCESS_POINT_API_VERSION=2 
 
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
 -IC:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Build\Furuta_Model\SysIntCode \
 -I"C:\Program Files\dSPACE RCPHIL 2021-A\ConfigurationDesk\Implementation\EmbeddedSW\Src" \
 -I"C:\Program Files\dSPACE RCPHIL 2021-A\DS1403\Include" \
 -DDATA_PORT_ACCESS_POINT_API_VERSION=2 
 
# ============================================================================= 
# MKMF Section 
# ============================================================================= 

# ----------------------------------------------------------------------------- 
# MKMF Configuration 
# ----------------------------------------------------------------------------- 

.TYPE.C   = .c .cpp 
.TYPE.OBJ = .oarm .oarm 

.PATH.c = \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Build\Furuta_Model\SysIntCode; \
 "C:\Program Files\dSPACE RCPHIL 2021-A\ConfigurationDesk\Implementation\EmbeddedSW\Src"; 
 
.PATH.cpp = \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Build\Furuta_Model\SysIntCode; \
 "C:\Program Files\dSPACE RCPHIL 2021-A\ConfigurationDesk\Implementation\EmbeddedSW\Src"; 
 
.PATH.h = \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Build\Furuta_Model\SysIntCode; \
 "C:\Program Files\dSPACE RCPHIL 2021-A\ConfigurationDesk\Implementation\EmbeddedSW\Src"; 
 

.HDRPATH.c = \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Build\Furuta_Model\SysIntCode \
 "C:\Program Files\dSPACE RCPHIL 2021-A\ConfigurationDesk\Implementation\EmbeddedSW\Src" \
 | \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Build\Furuta_Model\SysIntCode \
 "C:\Program Files\dSPACE RCPHIL 2021-A\ConfigurationDesk\Implementation\EmbeddedSW\Src" 
 
.HDRPATH.cpp = \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Build\Furuta_Model\SysIntCode \
 "C:\Program Files\dSPACE RCPHIL 2021-A\ConfigurationDesk\Implementation\EmbeddedSW\Src" \
 | \
 C:\Users\Administrator\Furuta\Furuta\Furuta_Acados\Build\Furuta_Model\SysIntCode \
 "C:\Program Files\dSPACE RCPHIL 2021-A\ConfigurationDesk\Implementation\EmbeddedSW\Src" 
 

.CDEFINES.c  = -D_DS1403 -D_DS1403CN -DDS_PLATFORM_ARM -DDS_PLATFORM_ARMV7 -DDS_PLATFORM_KEYSTONE -DDS_PLATFORM_LE -DDS_PLATFORM_POSIX -DDS_PLATFORM_LINUX -DDS_PLATFORM_DSRTLINUX -DDS_PLATFORM_CN -DDS_PLATFORM_SMART -DDS_PLATFORM_SMARTBOX -DDS_PLATFORM_SMP -D__HOSTNAME__=\EI-PC82\ -D__INTEGRATION__=\5.1.1\ -DDS_RTLIB_VERSION_MAR=5 -DDS_RTLIB_VERSION_MIR=1 -DDS_LINUX_VERSION=440 -DLINUX_VERSION=4.4.0 -D_FILE_OFFSET_BITS=64  
.CDEFINES.cpp = -D__cplusplus -D_DS1403 -D_DS1403CN -DDS_PLATFORM_ARM -DDS_PLATFORM_ARMV7 -DDS_PLATFORM_KEYSTONE -DDS_PLATFORM_LE -DDS_PLATFORM_POSIX -DDS_PLATFORM_LINUX -DDS_PLATFORM_DSRTLINUX -DDS_PLATFORM_CN -DDS_PLATFORM_SMART -DDS_PLATFORM_SMARTBOX -DDS_PLATFORM_SMP -D__HOSTNAME__=\EI-PC82\ -D__INTEGRATION__=\5.1.1\ -DDS_RTLIB_VERSION_MAR=5 -DDS_RTLIB_VERSION_MIR=1 -DDS_LINUX_VERSION=440 -DLINUX_VERSION=4.4.0 -D_FILE_OFFSET_BITS=64  

MKMF_SRCS  =   mdladapter_mdlfunctions.cpp mdlCode_ap.cpp data_in_ap.cpp data_out_ap.cpp fm_entry_ap.cpp fm_exit_ap.cpp dssimengine_accesspoint.cpp dssimengine_api.cpp dssimengine_main.cpp rtosal_task.cpp rtosal_taskap.cpp rtosal_simengineap.cpp IOCode_Data.cpp dssimengine_accesspoint_Digital_Incremental_Encoder_In.cpp dssimengine_accesspoint_Voltage_In.cpp dssimengine_accesspoint_Voltage_Out.cpp 
MKMF_LINELEN = 118 
MKMF_TABLEN  = 2 

# ----------------------------------------------------------------------------- 
# MKMF Replacements 
# ----------------------------------------------------------------------------- 

HDRS= dssimengine_api.h dssimengine_main.h rtosal_msg.h data_in_ap.h data_out_ap.h DS_BusDef.h \
		  dssimengine_accesspoint.h dssimengine_accesspoint_Digital_Incremental_Encoder_In.h \
		  dssimengine_accesspoint_Voltage_In.h dssimengine_accesspoint_Voltage_Out.h dssimengine_defines.h fm_entry_ap.h \
		  fm_exit_ap.h IOCode_Data.h mdlCode_ap.h rtosal_simengineap.h rtosal_task.h rtosal_taskap.h

EXTHDRS=

SRCS= mdladapter_mdlfunctions.cpp mdlCode_ap.cpp data_in_ap.cpp data_out_ap.cpp fm_entry_ap.cpp fm_exit_ap.cpp \
		  dssimengine_accesspoint.cpp dssimengine_api.cpp dssimengine_main.cpp rtosal_task.cpp rtosal_taskap.cpp \
		  rtosal_simengineap.cpp IOCode_Data.cpp dssimengine_accesspoint_Digital_Incremental_Encoder_In.cpp \
		  dssimengine_accesspoint_Voltage_In.cpp dssimengine_accesspoint_Voltage_Out.cpp

# [EOF] 
 
### OPUS MKMF:  Do not remove this line!  Generated dependencies follow.

mdladapter_mdlfunctions.oarm: mdladapter_mdlfunctions.cpp \
	 dssimengine_api.h

mdlCode_ap.oarm: mdlCode_ap.cpp \
	 IOCode_Data.h \
	 mdlCode_ap.h \
		 DS_BusDef.h

data_in_ap.oarm: data_in_ap.cpp \
	 IOCode_Data.h \
	 data_in_ap.h \
		 DS_BusDef.h

data_out_ap.oarm: data_out_ap.cpp \
	 IOCode_Data.h \
	 data_out_ap.h \
		 DS_BusDef.h

fm_entry_ap.oarm: fm_entry_ap.cpp \
	 IOCode_Data.h \
	 fm_entry_ap.h \
		 DS_BusDef.h

fm_exit_ap.oarm: fm_exit_ap.cpp \
	 IOCode_Data.h \
	 fm_exit_ap.h \
		 DS_BusDef.h

dssimengine_accesspoint.oarm: dssimengine_accesspoint.cpp \
	 dssimengine_accesspoint.h \
	 rtosal_simengineap.h \
	 rtosal_task.h \
	 dssimengine_api.h \
	 IOCode_Data.h \
	 dssimengine_accesspoint_Digital_Incremental_Encoder_In.h \
	 dssimengine_accesspoint_Voltage_In.h \
	 dssimengine_accesspoint_Voltage_Out.h \
	 dssimengine_defines.h

dssimengine_api.oarm: dssimengine_api.cpp \
	 dssimengine_main.h \
	 dssimengine_api.h

dssimengine_main.oarm: dssimengine_main.cpp \
	 dssimengine_api.h \
	 dssimengine_main.h \
	 dssimengine_accesspoint.h

rtosal_task.oarm: rtosal_task.cpp \
	 dssimengine_api.h \
	 rtosal_msg.h \
	 rtosal_taskap.h \
	 IOCode_Data.h \
	 rtosal_task.h

rtosal_taskap.oarm: rtosal_taskap.cpp \
	 rtosal_task.h \
	 IOCode_Data.h \
	 rtosal_taskap.h

rtosal_simengineap.oarm: rtosal_simengineap.cpp \
	 rtosal_task.h \
	 dssimengine_api.h \
	 IOCode_Data.h \
	 rtosal_msg.h \
	 rtosal_simengineap.h

IOCode_Data.oarm: IOCode_Data.cpp \
	 dssimengine_accesspoint.h \
	 IOCode_Data.h

dssimengine_accesspoint_Digital_Incremental_Encoder_In.oarm: \
 dssimengine_accesspoint_Digital_Incremental_Encoder_In.cpp \
	 dssimengine_api.h \
	 IOCode_Data.h \
	 dssimengine_accesspoint_Digital_Incremental_Encoder_In.h

dssimengine_accesspoint_Voltage_In.oarm: dssimengine_accesspoint_Voltage_In.cpp \
	 dssimengine_api.h \
	 IOCode_Data.h \
	 dssimengine_accesspoint_Voltage_In.h

dssimengine_accesspoint_Voltage_Out.oarm: dssimengine_accesspoint_Voltage_Out.cpp \
	 dssimengine_api.h \
	 IOCode_Data.h \
	 dssimengine_accesspoint_Voltage_Out.h
