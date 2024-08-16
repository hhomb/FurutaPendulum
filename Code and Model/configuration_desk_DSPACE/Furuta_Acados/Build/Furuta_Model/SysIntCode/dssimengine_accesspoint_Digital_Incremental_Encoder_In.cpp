/****************************************************************************\ 
 *** 
 *** File                  : dssimengine_accesspoint_Digital_Incremental_Encoder_In.cpp
 *** 
 *** Generated by dSPACE Tools.
 *** (c) Copyright 2013, dSPACE GmbH. All rights reserved.
\****************************************************************************/

#if !defined(DSSIMENGINE_ACCESSPOINT_DIGITAL_INCREMENTAL_ENCODER_IN_CPP_)
#  define    DSSIMENGINE_ACCESSPOINT_DIGITAL_INCREMENTAL_ENCODER_IN_CPP_


/* -- Include directives. -- */
#  include "dssimengine_api.h"
#  include "IOCode_Data.h"
#  include "dssimengine_accesspoint_Digital_Incremental_Encoder_In.h"

#  if defined(EXTERN_C_DECL)
#    undef EXTERN_C_DECL
#  endif
#  if defined(__cplusplus)
#    define EXTERN_C_DECL extern "C"
#  else
#    define EXTERN_C_DECL extern
#  endif


/* -- Definitions of exported functions. -- */

  void
ApSimEngineOnInitIoPostRtosInit_ctlcBODY_0_Digital_Incremental_Encoder_In_i1_(
    DsTErrorList ErrorList) 
{
pDigital_Incremental_Encoder_In_1_DriverHandle->setEncoderType(ErrorList, DsNImbsIoEncoderIn::EncoderType::Rotary);
digital_Incremental_Encoder_In_1_MeasurementMode = DsNImbsIoEncoderIn::MeasurementMode::Dynamic;
pDigital_Incremental_Encoder_In_1_DriverHandle->setMeasurementMode(ErrorList, digital_Incremental_Encoder_In_1_MeasurementMode);
pDigital_Incremental_Encoder_In_1_DriverHandle->setResolution(ErrorList, 2048.0);
pDigital_Incremental_Encoder_In_1_DriverHandle->setGatedMode(ErrorList, DsNImbsIoEncoderIn::GatedMode::Disabled);
pDigital_Incremental_Encoder_In_1_DriverHandle->setIndexMode(ErrorList, DsNImbsIoEncoderIn::IndexMode::Disabled);
digital_Incremental_Encoder_In_1_Timeout = 1.0;
pDigital_Incremental_Encoder_In_1_DriverHandle->setTimeout(ErrorList, digital_Incremental_Encoder_In_1_Timeout);
pDigital_Incremental_Encoder_In_1_DriverHandle->setPositionUpdate(ErrorList, DsNImbsIoEncoderIn::PositionUpdate::Disabled);
digital_Incremental_Encoder_In_1_MeasurementMode = DsNImbsIoEncoderIn::MeasurementMode::Dynamic;
pDigital_Incremental_Encoder_In_1_DriverHandle->setMeasurementMode(ErrorList, digital_Incremental_Encoder_In_1_MeasurementMode);
pDigital_Incremental_Encoder_In_1_DriverHandle->setReverseDirection(ErrorList, DsNImbsIoEncoderIn::ReverseDirection::Disabled);
furuta_model_fcnModule_SIDS8_TIDtriggered->bindDriver(ErrorList, pDigital_Incremental_Encoder_In_1_DriverHandle);
pDigital_Incremental_Encoder_In_1_DriverHandle->setName(ErrorList, "Digital Incremental Encoder In (1)");
pDigital_Incremental_Encoder_In_1_DriverHandle->bindIoChannel(ErrorList, DsCIoChannel::getInstance(ErrorList, DIGITALINCREMENTALENCODERINFUNCTIONBLOCK_1_PHI0), DsNImbsIoEncoderIn::LogicalChannel::Phi0, DsNImbsIoEncoderIn::ChannelProperties::Role::None | DsNImbsIoEncoderIn::ChannelProperties::Enhancement::None);
pDigital_Incremental_Encoder_In_1_DriverHandle->bindIoChannel(ErrorList, DsCIoChannel::getInstance(ErrorList, DIGITALINCREMENTALENCODERINFUNCTIONBLOCK_1_PHI90), DsNImbsIoEncoderIn::LogicalChannel::Phi90, DsNImbsIoEncoderIn::ChannelProperties::Role::None | DsNImbsIoEncoderIn::ChannelProperties::Enhancement::None);
digital_Incremental_Encoder_In_1_MinimumPulseDuration = 2.64E-07;
pDigital_Incremental_Encoder_In_1_DriverHandle->setMinimumPulseDuration(ErrorList, digital_Incremental_Encoder_In_1_MinimumPulseDuration);
digital_Incremental_Encoder_In_1_Threshold = 2;
pDigital_Incremental_Encoder_In_1_DriverHandle->setThreshold(ErrorList, digital_Incremental_Encoder_In_1_Threshold);
digital_Incremental_Encoder_In_1_Polarity = DsNImbsIoEncoderIn::Polarity::ActiveHigh;
pDigital_Incremental_Encoder_In_1_DriverHandle->setPolarity(ErrorList, digital_Incremental_Encoder_In_1_Polarity);

}

  void
ApSimEngineOnStartIo_ctlcBODY_0_Digital_Incremental_Encoder_In_i1_(
    DsTErrorList ErrorList) 
{
pDigital_Incremental_Encoder_In_1_DriverHandle->setMeasurementMode(ErrorList, digital_Incremental_Encoder_In_1_MeasurementMode);
pDigital_Incremental_Encoder_In_1_DriverHandle->setTimeout(ErrorList, digital_Incremental_Encoder_In_1_Timeout);
pDigital_Incremental_Encoder_In_1_DriverHandle->setPositionValidInitial(ErrorList, DsNImbsIoEncoderIn::PositionValid::Invalid);
pDigital_Incremental_Encoder_In_1_DriverHandle->setSpeedInitial(ErrorList, 0);
pDigital_Incremental_Encoder_In_1_DriverHandle->setPositionInitial(ErrorList, 180);
pDigital_Incremental_Encoder_In_1_DriverHandle->setMeasurementMode(ErrorList, digital_Incremental_Encoder_In_1_MeasurementMode);
pDigital_Incremental_Encoder_In_1_DriverHandle->setMinimumPulseDuration(ErrorList, digital_Incremental_Encoder_In_1_MinimumPulseDuration);
pDigital_Incremental_Encoder_In_1_DriverHandle->setThreshold(ErrorList, digital_Incremental_Encoder_In_1_Threshold);
pDigital_Incremental_Encoder_In_1_DriverHandle->setPolarity(ErrorList, digital_Incremental_Encoder_In_1_Polarity);

}

  void
ApSimEngineRunTimeInit_ctlcBODY_0_Digital_Incremental_Encoder_In_i1_(
    DsTErrorList ErrorList) 
{
pDigital_Incremental_Encoder_In_1_DriverHandle->setPositionValidInitial(ErrorList, DsNImbsIoEncoderIn::PositionValid::Invalid);
pDigital_Incremental_Encoder_In_1_DriverHandle->setSpeedInitial(ErrorList, 0);
pDigital_Incremental_Encoder_In_1_DriverHandle->setPositionInitial(ErrorList, 180);

}

  void
ApSimEngineOnInitIoPreRtosInit_ctlcBODY_2_Digital_Incremental_Encoder_In_i1_(
    DsTErrorList ErrorList, DsCApplication* pApp) 
{
pDigital_Incremental_Encoder_In_1_DriverHandle = DsCImbsIoEncoderIn::create(ErrorList, pApp);

}

  void
ApSimEngineOnInitIoPostRtosInit_ctlcBODY_0_Digital_Incremental_Encoder_In_i2_(
    DsTErrorList ErrorList) 
{
pDigital_Incremental_Encoder_In_2_DriverHandle->setEncoderType(ErrorList, DsNImbsIoEncoderIn::EncoderType::Rotary);
digital_Incremental_Encoder_In_2_MeasurementMode = DsNImbsIoEncoderIn::MeasurementMode::Dynamic;
pDigital_Incremental_Encoder_In_2_DriverHandle->setMeasurementMode(ErrorList, digital_Incremental_Encoder_In_2_MeasurementMode);
pDigital_Incremental_Encoder_In_2_DriverHandle->setResolution(ErrorList, 1000.0);
pDigital_Incremental_Encoder_In_2_DriverHandle->setGatedMode(ErrorList, DsNImbsIoEncoderIn::GatedMode::Disabled);
pDigital_Incremental_Encoder_In_2_DriverHandle->setIndexMode(ErrorList, DsNImbsIoEncoderIn::IndexMode::Disabled);
digital_Incremental_Encoder_In_2_Timeout = 1.0;
pDigital_Incremental_Encoder_In_2_DriverHandle->setTimeout(ErrorList, digital_Incremental_Encoder_In_2_Timeout);
pDigital_Incremental_Encoder_In_2_DriverHandle->setPositionUpdate(ErrorList, DsNImbsIoEncoderIn::PositionUpdate::Disabled);
digital_Incremental_Encoder_In_2_MeasurementMode = DsNImbsIoEncoderIn::MeasurementMode::Dynamic;
pDigital_Incremental_Encoder_In_2_DriverHandle->setMeasurementMode(ErrorList, digital_Incremental_Encoder_In_2_MeasurementMode);
pDigital_Incremental_Encoder_In_2_DriverHandle->setReverseDirection(ErrorList, DsNImbsIoEncoderIn::ReverseDirection::Disabled);
furuta_model_fcnModule_SIDS7_TIDtriggered->bindDriver(ErrorList, pDigital_Incremental_Encoder_In_2_DriverHandle);
pDigital_Incremental_Encoder_In_2_DriverHandle->setName(ErrorList, "Digital Incremental Encoder In (2)");
pDigital_Incremental_Encoder_In_2_DriverHandle->bindIoChannel(ErrorList, DsCIoChannel::getInstance(ErrorList, DIGITALINCREMENTALENCODERINFUNCTIONBLOCK_2_PHI0), DsNImbsIoEncoderIn::LogicalChannel::Phi0, DsNImbsIoEncoderIn::ChannelProperties::Role::None | DsNImbsIoEncoderIn::ChannelProperties::Enhancement::None);
pDigital_Incremental_Encoder_In_2_DriverHandle->bindIoChannel(ErrorList, DsCIoChannel::getInstance(ErrorList, DIGITALINCREMENTALENCODERINFUNCTIONBLOCK_2_PHI90), DsNImbsIoEncoderIn::LogicalChannel::Phi90, DsNImbsIoEncoderIn::ChannelProperties::Role::None | DsNImbsIoEncoderIn::ChannelProperties::Enhancement::None);
digital_Incremental_Encoder_In_2_MinimumPulseDuration = 2.64E-07;
pDigital_Incremental_Encoder_In_2_DriverHandle->setMinimumPulseDuration(ErrorList, digital_Incremental_Encoder_In_2_MinimumPulseDuration);
digital_Incremental_Encoder_In_2_Threshold = 2;
pDigital_Incremental_Encoder_In_2_DriverHandle->setThreshold(ErrorList, digital_Incremental_Encoder_In_2_Threshold);
digital_Incremental_Encoder_In_2_Polarity = DsNImbsIoEncoderIn::Polarity::ActiveHigh;
pDigital_Incremental_Encoder_In_2_DriverHandle->setPolarity(ErrorList, digital_Incremental_Encoder_In_2_Polarity);

}

  void
ApSimEngineOnStartIo_ctlcBODY_0_Digital_Incremental_Encoder_In_i2_(
    DsTErrorList ErrorList) 
{
pDigital_Incremental_Encoder_In_2_DriverHandle->setMeasurementMode(ErrorList, digital_Incremental_Encoder_In_2_MeasurementMode);
pDigital_Incremental_Encoder_In_2_DriverHandle->setTimeout(ErrorList, digital_Incremental_Encoder_In_2_Timeout);
pDigital_Incremental_Encoder_In_2_DriverHandle->setPositionValidInitial(ErrorList, DsNImbsIoEncoderIn::PositionValid::Invalid);
pDigital_Incremental_Encoder_In_2_DriverHandle->setSpeedInitial(ErrorList, 0);
pDigital_Incremental_Encoder_In_2_DriverHandle->setPositionInitial(ErrorList, 180);
pDigital_Incremental_Encoder_In_2_DriverHandle->setMeasurementMode(ErrorList, digital_Incremental_Encoder_In_2_MeasurementMode);
pDigital_Incremental_Encoder_In_2_DriverHandle->setMinimumPulseDuration(ErrorList, digital_Incremental_Encoder_In_2_MinimumPulseDuration);
pDigital_Incremental_Encoder_In_2_DriverHandle->setThreshold(ErrorList, digital_Incremental_Encoder_In_2_Threshold);
pDigital_Incremental_Encoder_In_2_DriverHandle->setPolarity(ErrorList, digital_Incremental_Encoder_In_2_Polarity);

}

  void
ApSimEngineRunTimeInit_ctlcBODY_0_Digital_Incremental_Encoder_In_i2_(
    DsTErrorList ErrorList) 
{
pDigital_Incremental_Encoder_In_2_DriverHandle->setPositionValidInitial(ErrorList, DsNImbsIoEncoderIn::PositionValid::Invalid);
pDigital_Incremental_Encoder_In_2_DriverHandle->setSpeedInitial(ErrorList, 0);
pDigital_Incremental_Encoder_In_2_DriverHandle->setPositionInitial(ErrorList, 180);

}

  void
ApSimEngineOnInitIoPreRtosInit_ctlcBODY_2_Digital_Incremental_Encoder_In_i2_(
    DsTErrorList ErrorList, DsCApplication* pApp) 
{
pDigital_Incremental_Encoder_In_2_DriverHandle = DsCImbsIoEncoderIn::create(ErrorList, pApp);

}

#endif                                 /* DSSIMENGINE_ACCESSPOINT_DIGITAL_INCREMENTAL_ENCODER_IN_CPP_ */
/* [EOF] */
