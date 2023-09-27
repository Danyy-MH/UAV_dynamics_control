//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: px4Demo_FlightController_top.cpp
//
// Code generated for Simulink model 'px4Demo_FlightController_top'.
//
// Model version                  : 6.0
// Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
// C/C++ source code generated on : Fri Sep 15 14:35:52 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "px4Demo_FlightController_top.h"
#include "px4Demo_FlightController_top_types.h"
#include "rtwtypes.h"
#include <math.h>
#include "px4Demo_FlightController_top_private.h"
#define FlightController_MDLREF_HIDE_CHILD_
#include "FlightController.h"

// Block signals (default storage)
B_px4Demo_FlightController_to_T px4Demo_FlightController_top_B;

// Block states (default storage)
DW_px4Demo_FlightController_t_T px4Demo_FlightController_top_DW;

// Real-time model
RT_MODEL_px4Demo_FlightContro_T px4Demo_FlightController_top_M_ =
  RT_MODEL_px4Demo_FlightContro_T();
RT_MODEL_px4Demo_FlightContro_T *const px4Demo_FlightController_top_M =
  &px4Demo_FlightController_top_M_;

// Forward declaration for local functions
static void px4Demo_Flight_SystemCore_setup(px4_internal_block_PWM_px4Dem_T *obj,
  boolean_T varargin_1, boolean_T varargin_2);
static void px4Demo_Flight_SystemCore_setup(px4_internal_block_PWM_px4Dem_T *obj,
  boolean_T varargin_1, boolean_T varargin_2)
{
  uint16_T status;
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  obj->isMain = true;
  obj->pwmDevObj = MW_PWM_OUTPUT_MAIN_DEVICE_PATH;
  status = pwm_open(&obj->pwmDevHandler, obj->pwmDevObj,
                    &obj->actuatorAdvertiseObj, &obj->armAdvertiseObj);
  obj->errorStatus = static_cast<uint16_T>(static_cast<int32_T>
    (static_cast<int32_T>(obj->errorStatus) | static_cast<int32_T>(status)));
  obj->servoCount = 0;
  status = pwm_getServoCount(&obj->pwmDevHandler, &obj->servoCount);
  obj->errorStatus = static_cast<uint16_T>(static_cast<int32_T>
    (static_cast<int32_T>(obj->errorStatus) | static_cast<int32_T>(status)));
  if (varargin_1) {
    status = pwm_arm(&obj->pwmDevHandler, &obj->armAdvertiseObj);
    obj->isArmed = true;
  } else {
    status = pwm_disarm(&obj->pwmDevHandler, &obj->armAdvertiseObj);
    obj->isArmed = false;
  }

  obj->errorStatus = static_cast<uint16_T>(static_cast<int32_T>
    (static_cast<int32_T>(obj->errorStatus) | static_cast<int32_T>(status)));
  status = pwm_setPWMRate(&obj->pwmDevHandler, obj->isMain);
  obj->errorStatus = static_cast<uint16_T>(static_cast<int32_T>
    (static_cast<int32_T>(obj->errorStatus) | static_cast<int32_T>(status)));
  obj->channelMask = 15;
  status = pwm_setChannelMask(&obj->pwmDevHandler, obj->channelMask);
  obj->errorStatus = static_cast<uint16_T>(static_cast<int32_T>
    (static_cast<int32_T>(obj->errorStatus) | static_cast<int32_T>(status)));
  status = pwm_setFailsafePWM(&obj->pwmDevHandler, obj->servoCount,
    obj->channelMask, obj->isMain);
  obj->errorStatus = static_cast<uint16_T>(static_cast<int32_T>
    (static_cast<int32_T>(obj->errorStatus) | static_cast<int32_T>(status)));
  status = pwm_setDisarmedPWM(&obj->pwmDevHandler, obj->servoCount,
    obj->channelMask, obj->isMain, &obj->actuatorAdvertiseObj);
  obj->errorStatus = static_cast<uint16_T>(static_cast<int32_T>
    (static_cast<int32_T>(obj->errorStatus) | static_cast<int32_T>(status)));
  if (obj->isMain) {
    status = pwm_forceFailsafe(&obj->pwmDevHandler, static_cast<int32_T>
      (varargin_2));
    obj->errorStatus = static_cast<uint16_T>(static_cast<int32_T>(static_cast<
      int32_T>(obj->errorStatus) | static_cast<int32_T>(status)));
    status = pwm_forceTerminateFailsafe(&obj->pwmDevHandler, 0);
    obj->errorStatus = static_cast<uint16_T>(static_cast<int32_T>
      (static_cast<int32_T>(obj->errorStatus) | static_cast<int32_T>(status)));
  }

  obj->isSetupComplete = true;
}

// Model step function
void px4Demo_FlightController_top_step(void)
{
  boolean_T b_varargout_1;
  boolean_T b_varargout_1_0;

  // Reset subsysRan breadcrumbs
  srClearBC(px4Demo_FlightController_top_DW.EnabledSubsystem_SubsysRanBC_e);

  // Reset subsysRan breadcrumbs
  srClearBC(px4Demo_FlightController_top_DW.EnabledSubsystem_SubsysRanBC);

  // Sin: '<S1>/x+'
  if (px4Demo_FlightController_top_DW.systemEnable != 0) {
    px4Demo_FlightController_top_B.lastSin_tmp =
      px4Demo_FlightController_top_P.x_Freq *
      px4Demo_FlightController_top_M->Timing.taskTime0;
    px4Demo_FlightController_top_DW.lastSin = sin
      (px4Demo_FlightController_top_B.lastSin_tmp);
    px4Demo_FlightController_top_DW.lastCos = cos
      (px4Demo_FlightController_top_B.lastSin_tmp);
    px4Demo_FlightController_top_DW.systemEnable = 0;
  }

  // Sin: '<S1>/x+'
  px4Demo_FlightController_top_B.des_x =
    ((px4Demo_FlightController_top_DW.lastSin *
      px4Demo_FlightController_top_P.x_PCos +
      px4Demo_FlightController_top_DW.lastCos *
      px4Demo_FlightController_top_P.x_PSin) *
     px4Demo_FlightController_top_P.x_HCos +
     (px4Demo_FlightController_top_DW.lastCos *
      px4Demo_FlightController_top_P.x_PCos -
      px4Demo_FlightController_top_DW.lastSin *
      px4Demo_FlightController_top_P.x_PSin) *
     px4Demo_FlightController_top_P.x_Hsin) *
    px4Demo_FlightController_top_P.x_Amp + px4Demo_FlightController_top_P.x_Bias;

  // Sin: '<S1>/y+'
  if (px4Demo_FlightController_top_DW.systemEnable_d != 0) {
    px4Demo_FlightController_top_B.lastSin_tmp =
      px4Demo_FlightController_top_P.y_Freq *
      px4Demo_FlightController_top_M->Timing.taskTime0;
    px4Demo_FlightController_top_DW.lastSin_b = sin
      (px4Demo_FlightController_top_B.lastSin_tmp);
    px4Demo_FlightController_top_DW.lastCos_k = cos
      (px4Demo_FlightController_top_B.lastSin_tmp);
    px4Demo_FlightController_top_DW.systemEnable_d = 0;
  }

  // SignalConversion generated from: '<Root>/Model' incorporates:
  //   Constant: '<S1>/des_alt'
  //   Constant: '<S1>/des_yaw'
  //   Sin: '<S1>/y+'

  px4Demo_FlightController_top_B.TmpSignalConversionAtModelI[0] =
    px4Demo_FlightController_top_B.des_x;
  px4Demo_FlightController_top_B.TmpSignalConversionAtModelI[1] =
    ((px4Demo_FlightController_top_DW.lastSin_b *
      px4Demo_FlightController_top_P.y_PCos +
      px4Demo_FlightController_top_DW.lastCos_k *
      px4Demo_FlightController_top_P.y_PSin) *
     px4Demo_FlightController_top_P.y_HCos +
     (px4Demo_FlightController_top_DW.lastCos_k *
      px4Demo_FlightController_top_P.y_PCos -
      px4Demo_FlightController_top_DW.lastSin_b *
      px4Demo_FlightController_top_P.y_PSin) *
     px4Demo_FlightController_top_P.y_Hsin) *
    px4Demo_FlightController_top_P.y_Amp + px4Demo_FlightController_top_P.y_Bias;
  px4Demo_FlightController_top_B.TmpSignalConversionAtModelI[2] =
    px4Demo_FlightController_top_P.des_alt_Value;
  px4Demo_FlightController_top_B.TmpSignalConversionAtModelI[3] =
    px4Demo_FlightController_top_P.des_yaw_Value;

  // MATLABSystem: '<S3>/SourceBlock'
  b_varargout_1 = uORB_read_step
    (px4Demo_FlightController_top_DW.obj_i.orbMetadataObj,
     &px4Demo_FlightController_top_DW.obj_i.eventStructObj,
     &px4Demo_FlightController_top_B.b_varargout_2, false, 1.0);

  // Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S5>/Enable'

  if (b_varargout_1) {
    // SignalConversion generated from: '<S5>/In1'
    px4Demo_FlightController_top_B.In1 =
      px4Demo_FlightController_top_B.b_varargout_2;
    srUpdateBC(px4Demo_FlightController_top_DW.EnabledSubsystem_SubsysRanBC);
  }

  // End of Outputs for SubSystem: '<S3>/Enabled Subsystem'

  // MATLABSystem: '<S2>/SourceBlock'
  b_varargout_1_0 = uORB_read_step
    (px4Demo_FlightController_top_DW.obj_g.orbMetadataObj,
     &px4Demo_FlightController_top_DW.obj_g.eventStructObj,
     &px4Demo_FlightController_top_B.b_varargout_2_m, false, 1.0);

  // Outputs for Enabled SubSystem: '<S2>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S4>/Enable'

  if (b_varargout_1_0) {
    // SignalConversion generated from: '<S4>/In1'
    px4Demo_FlightController_top_B.In1_o =
      px4Demo_FlightController_top_B.b_varargout_2_m;
    srUpdateBC(px4Demo_FlightController_top_DW.EnabledSubsystem_SubsysRanBC_e);
  }

  // End of Outputs for SubSystem: '<S2>/Enabled Subsystem'

  // ModelReference generated from: '<Root>/Model'
  FlightController(&px4Demo_FlightController_top_B.TmpSignalConversionAtModelI[0],
                   &px4Demo_FlightController_top_B.In1.x,
                   &px4Demo_FlightController_top_B.In1.y,
                   &px4Demo_FlightController_top_B.In1.z,
                   &px4Demo_FlightController_top_B.In1.vx,
                   &px4Demo_FlightController_top_B.In1.vy,
                   &px4Demo_FlightController_top_B.In1.vz,
                   &px4Demo_FlightController_top_B.In1_o.q[0],
                   &px4Demo_FlightController_top_B.Model_o1,
                   &px4Demo_FlightController_top_B.Model_o2[0]);

  // MATLABSystem: '<Root>/PX4 PWM Output' incorporates:
  //   Logic: '<Root>/NOT'

  for (px4Demo_FlightController_top_B.i = 0; px4Demo_FlightController_top_B.i <
       8; px4Demo_FlightController_top_B.i++) {
    px4Demo_FlightController_top_B.pwmValue[px4Demo_FlightController_top_B.i] =
      0U;
  }

  px4Demo_FlightController_top_B.pwmValue[0] =
    px4Demo_FlightController_top_B.Model_o2[0];
  px4Demo_FlightController_top_B.pwmValue[1] =
    px4Demo_FlightController_top_B.Model_o2[1];
  px4Demo_FlightController_top_B.pwmValue[2] =
    px4Demo_FlightController_top_B.Model_o2[2];
  px4Demo_FlightController_top_B.pwmValue[3] =
    px4Demo_FlightController_top_B.Model_o2[3];
  if (px4Demo_FlightController_top_B.Model_o1) {
    if (!px4Demo_FlightController_top_DW.obj.isArmed) {
      px4Demo_FlightController_top_DW.obj.isArmed = true;
      px4Demo_FlightController_top_B.status = pwm_arm
        (&px4Demo_FlightController_top_DW.obj.pwmDevHandler,
         &px4Demo_FlightController_top_DW.obj.armAdvertiseObj);
      px4Demo_FlightController_top_DW.obj.errorStatus = static_cast<uint16_T>(
        static_cast<int32_T>(static_cast<int32_T>
        (px4Demo_FlightController_top_DW.obj.errorStatus) | static_cast<int32_T>
        (px4Demo_FlightController_top_B.status)));
    }

    px4Demo_FlightController_top_B.status = pwm_setServo
      (&px4Demo_FlightController_top_DW.obj.pwmDevHandler,
       px4Demo_FlightController_top_DW.obj.servoCount,
       px4Demo_FlightController_top_DW.obj.channelMask,
       &px4Demo_FlightController_top_B.pwmValue[0],
       px4Demo_FlightController_top_DW.obj.isMain,
       &px4Demo_FlightController_top_DW.obj.actuatorAdvertiseObj);
    px4Demo_FlightController_top_DW.obj.errorStatus = static_cast<uint16_T>(
      static_cast<int32_T>(static_cast<int32_T>
      (px4Demo_FlightController_top_DW.obj.errorStatus) | static_cast<int32_T>
      (px4Demo_FlightController_top_B.status)));
  } else {
    px4Demo_FlightController_top_B.status = pwm_disarm
      (&px4Demo_FlightController_top_DW.obj.pwmDevHandler,
       &px4Demo_FlightController_top_DW.obj.armAdvertiseObj);
    px4Demo_FlightController_top_DW.obj.errorStatus = static_cast<uint16_T>(
      static_cast<int32_T>(static_cast<int32_T>
      (px4Demo_FlightController_top_DW.obj.errorStatus) | static_cast<int32_T>
      (px4Demo_FlightController_top_B.status)));
    px4Demo_FlightController_top_DW.obj.isArmed = false;
    px4Demo_FlightController_top_B.status = pwm_resetServo
      (&px4Demo_FlightController_top_DW.obj.pwmDevHandler,
       px4Demo_FlightController_top_DW.obj.servoCount,
       px4Demo_FlightController_top_DW.obj.channelMask,
       px4Demo_FlightController_top_DW.obj.isMain,
       &px4Demo_FlightController_top_DW.obj.actuatorAdvertiseObj);
    px4Demo_FlightController_top_DW.obj.errorStatus = static_cast<uint16_T>(
      static_cast<int32_T>(static_cast<int32_T>
      (px4Demo_FlightController_top_DW.obj.errorStatus) | static_cast<int32_T>
      (px4Demo_FlightController_top_B.status)));
  }

  if (px4Demo_FlightController_top_DW.obj.isMain) {
    px4Demo_FlightController_top_B.status = pwm_forceFailsafe
      (&px4Demo_FlightController_top_DW.obj.pwmDevHandler,
       !px4Demo_FlightController_top_B.Model_o1);
    px4Demo_FlightController_top_DW.obj.errorStatus = static_cast<uint16_T>(
      static_cast<int32_T>(static_cast<int32_T>
      (px4Demo_FlightController_top_DW.obj.errorStatus) | static_cast<int32_T>
      (px4Demo_FlightController_top_B.status)));
  }

  // End of MATLABSystem: '<Root>/PX4 PWM Output'

  // Logic: '<S2>/NOT' incorporates:
  //   MATLABSystem: '<S2>/SourceBlock'

  px4Demo_FlightController_top_B.NOT = !b_varargout_1_0;

  // Logic: '<S3>/NOT' incorporates:
  //   MATLABSystem: '<S3>/SourceBlock'

  px4Demo_FlightController_top_B.NOT_b = !b_varargout_1;

  // Update for Sin: '<S1>/x+'
  px4Demo_FlightController_top_B.lastSin_tmp =
    px4Demo_FlightController_top_DW.lastSin;
  px4Demo_FlightController_top_DW.lastSin =
    px4Demo_FlightController_top_DW.lastSin *
    px4Demo_FlightController_top_P.x_HCos +
    px4Demo_FlightController_top_DW.lastCos *
    px4Demo_FlightController_top_P.x_Hsin;
  px4Demo_FlightController_top_DW.lastCos =
    px4Demo_FlightController_top_DW.lastCos *
    px4Demo_FlightController_top_P.x_HCos -
    px4Demo_FlightController_top_B.lastSin_tmp *
    px4Demo_FlightController_top_P.x_Hsin;

  // Update for Sin: '<S1>/y+'
  px4Demo_FlightController_top_B.lastSin_tmp =
    px4Demo_FlightController_top_DW.lastSin_b;
  px4Demo_FlightController_top_DW.lastSin_b =
    px4Demo_FlightController_top_DW.lastSin_b *
    px4Demo_FlightController_top_P.y_HCos +
    px4Demo_FlightController_top_DW.lastCos_k *
    px4Demo_FlightController_top_P.y_Hsin;
  px4Demo_FlightController_top_DW.lastCos_k =
    px4Demo_FlightController_top_DW.lastCos_k *
    px4Demo_FlightController_top_P.y_HCos -
    px4Demo_FlightController_top_B.lastSin_tmp *
    px4Demo_FlightController_top_P.y_Hsin;

  {                                    // Sample time: [0.008s, 0.0s]
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  px4Demo_FlightController_top_M->Timing.taskTime0 =
    ((time_T)(++px4Demo_FlightController_top_M->Timing.clockTick0)) *
    px4Demo_FlightController_top_M->Timing.stepSize0;
}

// Model initialize function
void px4Demo_FlightController_top_initialize(void)
{
  // Registration code
  rtmSetTFinal(px4Demo_FlightController_top_M, -1);
  px4Demo_FlightController_top_M->Timing.stepSize0 = 0.008;

  // External mode info
  px4Demo_FlightController_top_M->Sizes.checksums[0] = (3314320850U);
  px4Demo_FlightController_top_M->Sizes.checksums[1] = (1172701703U);
  px4Demo_FlightController_top_M->Sizes.checksums[2] = (424348234U);
  px4Demo_FlightController_top_M->Sizes.checksums[3] = (3712490292U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[6];
    px4Demo_FlightController_top_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = (sysRanDType *)
      &px4Demo_FlightController_top_DW.EnabledSubsystem_SubsysRanBC_e;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = (sysRanDType *)
      &px4Demo_FlightController_top_DW.EnabledSubsystem_SubsysRanBC;
    systemRan[5] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(px4Demo_FlightController_top_M->extModeInfo,
      &px4Demo_FlightController_top_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(px4Demo_FlightController_top_M->extModeInfo,
                        px4Demo_FlightController_top_M->Sizes.checksums);
    rteiSetTPtr(px4Demo_FlightController_top_M->extModeInfo, rtmGetTPtr
                (px4Demo_FlightController_top_M));
  }

  // Model Initialize function for ModelReference Block: '<Root>/Model'
  FlightController_initialize(rtmGetErrorStatusPointer
    (px4Demo_FlightController_top_M));

  {
    boolean_T rtb_NOT;

    // SystemInitialize for Enabled SubSystem: '<S3>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S5>/In1' incorporates:
    //   Outport: '<S5>/Out1'

    px4Demo_FlightController_top_B.In1 = px4Demo_FlightController_top_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S3>/Enabled Subsystem'

    // SystemInitialize for Enabled SubSystem: '<S2>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S4>/In1' incorporates:
    //   Outport: '<S4>/Out1'

    px4Demo_FlightController_top_B.In1_o =
      px4Demo_FlightController_top_P.Out1_Y0_h;

    // End of SystemInitialize for SubSystem: '<S2>/Enabled Subsystem'

    // SystemInitialize for ModelReference generated from: '<Root>/Model'
    FlightController_Init(&px4Demo_FlightController_top_B.Model_o1);

    // Start for MATLABSystem: '<S3>/SourceBlock'
    px4Demo_FlightController_top_DW.obj_i.matlabCodegenIsDeleted = false;
    px4Demo_FlightController_top_DW.obj_i.isInitialized = 1;
    px4Demo_FlightController_top_DW.obj_i.orbMetadataObj = ORB_ID
      (vehicle_local_position_groundtruth);
    uORB_read_initialize(px4Demo_FlightController_top_DW.obj_i.orbMetadataObj,
                         &px4Demo_FlightController_top_DW.obj_i.eventStructObj);
    px4Demo_FlightController_top_DW.obj_i.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/SourceBlock'
    px4Demo_FlightController_top_DW.obj_g.matlabCodegenIsDeleted = false;
    px4Demo_FlightController_top_DW.obj_g.isInitialized = 1;
    px4Demo_FlightController_top_DW.obj_g.orbMetadataObj = ORB_ID
      (vehicle_attitude_groundtruth);
    uORB_read_initialize(px4Demo_FlightController_top_DW.obj_g.orbMetadataObj,
                         &px4Demo_FlightController_top_DW.obj_g.eventStructObj);
    px4Demo_FlightController_top_DW.obj_g.isSetupComplete = true;

    // Start for MATLABSystem: '<Root>/PX4 PWM Output'
    px4Demo_FlightController_top_DW.obj.errorStatus = 0U;
    px4Demo_FlightController_top_DW.obj.isInitialized = 0;
    px4Demo_FlightController_top_DW.obj.matlabCodegenIsDeleted = false;
    px4Demo_Flight_SystemCore_setup(&px4Demo_FlightController_top_DW.obj,
      px4Demo_FlightController_top_B.Model_o1, rtb_NOT);

    // Enable for Sin: '<S1>/x+'
    px4Demo_FlightController_top_DW.systemEnable = 1;

    // Enable for Sin: '<S1>/y+'
    px4Demo_FlightController_top_DW.systemEnable_d = 1;
  }
}

// Model terminate function
void px4Demo_FlightController_top_terminate(void)
{
  uint16_T status;

  // Terminate for MATLABSystem: '<S3>/SourceBlock'
  if (!px4Demo_FlightController_top_DW.obj_i.matlabCodegenIsDeleted) {
    px4Demo_FlightController_top_DW.obj_i.matlabCodegenIsDeleted = true;
    if ((px4Demo_FlightController_top_DW.obj_i.isInitialized == 1) &&
        px4Demo_FlightController_top_DW.obj_i.isSetupComplete) {
      uORB_read_terminate(&px4Demo_FlightController_top_DW.obj_i.eventStructObj);
    }
  }

  // End of Terminate for MATLABSystem: '<S3>/SourceBlock'

  // Terminate for MATLABSystem: '<S2>/SourceBlock'
  if (!px4Demo_FlightController_top_DW.obj_g.matlabCodegenIsDeleted) {
    px4Demo_FlightController_top_DW.obj_g.matlabCodegenIsDeleted = true;
    if ((px4Demo_FlightController_top_DW.obj_g.isInitialized == 1) &&
        px4Demo_FlightController_top_DW.obj_g.isSetupComplete) {
      uORB_read_terminate(&px4Demo_FlightController_top_DW.obj_g.eventStructObj);
    }
  }

  // End of Terminate for MATLABSystem: '<S2>/SourceBlock'

  // Terminate for MATLABSystem: '<Root>/PX4 PWM Output'
  if (!px4Demo_FlightController_top_DW.obj.matlabCodegenIsDeleted) {
    px4Demo_FlightController_top_DW.obj.matlabCodegenIsDeleted = true;
    if ((px4Demo_FlightController_top_DW.obj.isInitialized == 1) &&
        px4Demo_FlightController_top_DW.obj.isSetupComplete) {
      status = pwm_disarm(&px4Demo_FlightController_top_DW.obj.pwmDevHandler,
                          &px4Demo_FlightController_top_DW.obj.armAdvertiseObj);
      px4Demo_FlightController_top_DW.obj.errorStatus = static_cast<uint16_T>(
        static_cast<int32_T>(static_cast<int32_T>
        (px4Demo_FlightController_top_DW.obj.errorStatus) | static_cast<int32_T>
        (status)));
      status = pwm_resetServo(&px4Demo_FlightController_top_DW.obj.pwmDevHandler,
        px4Demo_FlightController_top_DW.obj.servoCount,
        px4Demo_FlightController_top_DW.obj.channelMask,
        px4Demo_FlightController_top_DW.obj.isMain,
        &px4Demo_FlightController_top_DW.obj.actuatorAdvertiseObj);
      px4Demo_FlightController_top_DW.obj.errorStatus = static_cast<uint16_T>(
        static_cast<int32_T>(static_cast<int32_T>
        (px4Demo_FlightController_top_DW.obj.errorStatus) | static_cast<int32_T>
        (status)));
      status = pwm_close(&px4Demo_FlightController_top_DW.obj.pwmDevHandler,
                         &px4Demo_FlightController_top_DW.obj.actuatorAdvertiseObj,
                         &px4Demo_FlightController_top_DW.obj.armAdvertiseObj);
      px4Demo_FlightController_top_DW.obj.errorStatus = static_cast<uint16_T>(
        static_cast<int32_T>(static_cast<int32_T>
        (px4Demo_FlightController_top_DW.obj.errorStatus) | static_cast<int32_T>
        (status)));
    }
  }

  // End of Terminate for MATLABSystem: '<Root>/PX4 PWM Output'
}

//
// File trailer for generated code.
//
// [EOF]
//
