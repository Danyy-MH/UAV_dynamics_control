//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: px4Demo_FlightController_top.h
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
#ifndef RTW_HEADER_px4Demo_FlightController_top_h_
#define RTW_HEADER_px4Demo_FlightController_top_h_
#include <poll.h>
#include <uORB/uORB.h>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "MW_PX4_PWM.h"
#include "MW_uORB_Read.h"
#include "px4Demo_FlightController_top_types.h"
#include <uORB/topics/vehicle_local_position.h>
#include <uORB/topics/vehicle_attitude.h>
#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

// Block signals (default storage)
struct B_px4Demo_FlightController_to_T {
  px4_Bus_vehicle_local_position In1;  // '<S5>/In1'
  px4_Bus_vehicle_local_position b_varargout_2;
  px4_Bus_vehicle_attitude In1_o;      // '<S4>/In1'
  px4_Bus_vehicle_attitude b_varargout_2_m;
  real_T TmpSignalConversionAtModelI[4];
  uint16_T pwmValue[8];
  real_T des_x;                        // '<S1>/x+'
  real_T lastSin_tmp;
  uint16_T Model_o2[4];                // '<Root>/Model'
  int32_T i;
  uint16_T status;
  boolean_T Model_o1;                  // '<Root>/Model'
  boolean_T NOT;                       // '<S2>/NOT'
  boolean_T NOT_b;                     // '<S3>/NOT'
};

// Block states (default storage) for system '<Root>'
struct DW_px4Demo_FlightController_t_T {
  px4_internal_block_PWM_px4Dem_T obj; // '<Root>/PX4 PWM Output'
  px4_internal_block_Subscriber_T obj_i;// '<S3>/SourceBlock'
  px4_internal_block_Subscriber_T obj_g;// '<S2>/SourceBlock'
  real_T lastSin;                      // '<S1>/x+'
  real_T lastCos;                      // '<S1>/x+'
  real_T lastSin_b;                    // '<S1>/y+'
  real_T lastCos_k;                    // '<S1>/y+'
  int32_T systemEnable;                // '<S1>/x+'
  int32_T systemEnable_d;              // '<S1>/y+'
  int8_T EnabledSubsystem_SubsysRanBC; // '<S3>/Enabled Subsystem'
  int8_T EnabledSubsystem_SubsysRanBC_e;// '<S2>/Enabled Subsystem'
};

// Parameters (default storage)
struct P_px4Demo_FlightController_to_T_ {
  px4_Bus_vehicle_local_position Out1_Y0;// Computed Parameter: Out1_Y0
                                            //  Referenced by: '<S5>/Out1'

  px4_Bus_vehicle_local_position Constant_Value;// Computed Parameter: Constant_Value
                                                   //  Referenced by: '<S3>/Constant'

  px4_Bus_vehicle_attitude Out1_Y0_h;  // Computed Parameter: Out1_Y0_h
                                          //  Referenced by: '<S4>/Out1'

  px4_Bus_vehicle_attitude Constant_Value_j;// Computed Parameter: Constant_Value_j
                                               //  Referenced by: '<S2>/Constant'

  real_T x_Amp;                        // Expression: 1
                                          //  Referenced by: '<S1>/x+'

  real_T x_Bias;                       // Expression: 0
                                          //  Referenced by: '<S1>/x+'

  real_T x_Freq;                       // Expression: 2*pi*.125
                                          //  Referenced by: '<S1>/x+'

  real_T x_Hsin;                       // Computed Parameter: x_Hsin
                                          //  Referenced by: '<S1>/x+'

  real_T x_HCos;                       // Computed Parameter: x_HCos
                                          //  Referenced by: '<S1>/x+'

  real_T x_PSin;                       // Computed Parameter: x_PSin
                                          //  Referenced by: '<S1>/x+'

  real_T x_PCos;                       // Computed Parameter: x_PCos
                                          //  Referenced by: '<S1>/x+'

  real_T y_Amp;                        // Expression: 1
                                          //  Referenced by: '<S1>/y+'

  real_T y_Bias;                       // Expression: 0
                                          //  Referenced by: '<S1>/y+'

  real_T y_Freq;                       // Expression: 2*pi*.125
                                          //  Referenced by: '<S1>/y+'

  real_T y_Hsin;                       // Computed Parameter: y_Hsin
                                          //  Referenced by: '<S1>/y+'

  real_T y_HCos;                       // Computed Parameter: y_HCos
                                          //  Referenced by: '<S1>/y+'

  real_T y_PSin;                       // Computed Parameter: y_PSin
                                          //  Referenced by: '<S1>/y+'

  real_T y_PCos;                       // Computed Parameter: y_PCos
                                          //  Referenced by: '<S1>/y+'

  real_T des_alt_Value;                // Expression: 0
                                          //  Referenced by: '<S1>/des_alt'

  real_T des_yaw_Value;                // Expression: 0
                                          //  Referenced by: '<S1>/des_yaw'

};

// Real-time Model Data Structure
struct tag_RTM_px4Demo_FlightControl_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    uint32_T checksums[4];
  } Sizes;

  //
  //  SpecialInfo:
  //  The following substructure contains special information
  //  related to other components that are dependent on RTW.

  struct {
    const void *mappingInfo;
  } SpecialInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_px4Demo_FlightController_to_T px4Demo_FlightController_top_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_px4Demo_FlightController_to_T px4Demo_FlightController_top_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_px4Demo_FlightController_t_T px4Demo_FlightController_top_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void px4Demo_FlightController_top_initialize(void);
  extern void px4Demo_FlightController_top_step(void);
  extern void px4Demo_FlightController_top_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_px4Demo_FlightContro_T *const px4Demo_FlightController_top_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S1>/Rate Transition3' : Eliminated since input and output rates are identical


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'px4Demo_FlightController_top'
//  '<S1>'   : 'px4Demo_FlightController_top/Commands'
//  '<S2>'   : 'px4Demo_FlightController_top/PX4 uORB Read2'
//  '<S3>'   : 'px4Demo_FlightController_top/PX4 uORB Read5'
//  '<S4>'   : 'px4Demo_FlightController_top/PX4 uORB Read2/Enabled Subsystem'
//  '<S5>'   : 'px4Demo_FlightController_top/PX4 uORB Read5/Enabled Subsystem'

#endif                            // RTW_HEADER_px4Demo_FlightController_top_h_

//
// File trailer for generated code.
//
// [EOF]
//
