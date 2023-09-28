//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: FlightController.h
//
// Code generated for Simulink model 'FlightController'.
//
// Model version                  : 6.0
// Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
// C/C++ source code generated on : Fri Sep 15 14:19:33 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_FlightController_h_
#define RTW_HEADER_FlightController_h_
#include "rtwtypes.h"
#include "FlightController_types.h"
#include "rtGetNaN.h"

extern "C"
{

#include "rt_nonfinite.h"

}

// Block signals for model 'FlightController'
#ifndef FlightController_MDLREF_HIDE_CHILD_

struct B_FlightController_c_T {
  real_T vz_error;                     // '<S5>/Add1'
  real_T IntegralGain_jd;              // '<S440>/Integral Gain'
  real_T Integrator_g;                 // '<S247>/Integrator'
  real_T DeadZone_o;                   // '<S386>/DeadZone'
  real_T Filter_m;                     // '<S388>/Filter'
  real_T fcn3;                         // '<S463>/fcn3'
  real_T FilterCoefficient_o;          // '<S446>/Filter Coefficient'
  real_T DeadZone;                     // '<S436>/DeadZone'
  real_T Saturation_e;                 // '<S51>/Saturation'
  real_T Saturation_h;                 // '<S99>/Saturation'
  real_T FilterCoefficient_cs;         // '<S95>/Filter Coefficient'
  real_T Saturation_i;                 // '<S149>/Saturation'
  real_T FilterCoefficient_j;          // '<S145>/Filter Coefficient'
  real_T Saturation_n;                 // '<S350>/Saturation'
  real_T Filter_e0;                    // '<S338>/Filter'
};

#endif                                 //FlightController_MDLREF_HIDE_CHILD_

// Block states (default storage) for model 'FlightController'
#ifndef FlightController_MDLREF_HIDE_CHILD_

struct DW_FlightController_f_T {
  real_T Integrator_DSTATE;            // '<S393>/Integrator'
  real_T Filter_DSTATE;                // '<S388>/Filter'
  real_T Integrator_DSTATE_n;          // '<S443>/Integrator'
  real_T Filter_DSTATE_c;              // '<S438>/Filter'
  real_T Integrator_DSTATE_b;          // '<S247>/Integrator'
  real_T Filter_DSTATE_a;              // '<S242>/Filter'
  real_T Integrator_DSTATE_p;          // '<S295>/Integrator'
  real_T Filter_DSTATE_l;              // '<S290>/Filter'
  real_T Filter_DSTATE_i;              // '<S39>/Filter'
  real_T Integrator_DSTATE_c;          // '<S44>/Integrator'
  real_T Filter_DSTATE_d;              // '<S87>/Filter'
  real_T Integrator_DSTATE_m;          // '<S92>/Integrator'
  real_T Filter_DSTATE_ag;             // '<S137>/Filter'
  real_T Integrator_DSTATE_pm;         // '<S142>/Integrator'
  real_T Filter_DSTATE_g;              // '<S194>/Filter'
  real_T Integrator_DSTATE_i;          // '<S199>/Integrator'
  real_T Filter_DSTATE_e;              // '<S338>/Filter'
  real_T Integrator_DSTATE_pj;         // '<S343>/Integrator'
};

#endif                                 //FlightController_MDLREF_HIDE_CHILD_

#ifndef FlightController_MDLREF_HIDE_CHILD_

// Parameters (default storage)
struct P_FlightController_T_ {
  real_T PID_x_D;                      // Mask Parameter: PID_x_D
                                          //  Referenced by: '<S387>/Derivative Gain'

  real_T PID_y_D;                      // Mask Parameter: PID_y_D
                                          //  Referenced by: '<S437>/Derivative Gain'

  real_T PID_vx_D;                     // Mask Parameter: PID_vx_D
                                          //  Referenced by: '<S241>/Derivative Gain'

  real_T PID_vy_D;                     // Mask Parameter: PID_vy_D
                                          //  Referenced by: '<S289>/Derivative Gain'

  real_T PID_pitch_D;                  // Mask Parameter: PID_pitch_D
                                          //  Referenced by: '<S38>/Derivative Gain'

  real_T PID_roll_D;                   // Mask Parameter: PID_roll_D
                                          //  Referenced by: '<S86>/Derivative Gain'

  real_T PID_yaw_D;                    // Mask Parameter: PID_yaw_D
                                          //  Referenced by: '<S136>/Derivative Gain'

  real_T PID_Altitude_D;               // Mask Parameter: PID_Altitude_D
                                          //  Referenced by: '<S193>/Derivative Gain'

  real_T PID_vz_D;                     // Mask Parameter: PID_vz_D
                                          //  Referenced by: '<S337>/Derivative Gain'

  real_T PID_pitch_I;                  // Mask Parameter: PID_pitch_I
                                          //  Referenced by: '<S41>/Integral Gain'

  real_T PID_roll_I;                   // Mask Parameter: PID_roll_I
                                          //  Referenced by: '<S89>/Integral Gain'

  real_T PID_yaw_I;                    // Mask Parameter: PID_yaw_I
                                          //  Referenced by: '<S139>/Integral Gain'

  real_T PID_Altitude_I;               // Mask Parameter: PID_Altitude_I
                                          //  Referenced by: '<S196>/Integral Gain'

  real_T PID_vx_I;                     // Mask Parameter: PID_vx_I
                                          //  Referenced by: '<S244>/Integral Gain'

  real_T PID_vy_I;                     // Mask Parameter: PID_vy_I
                                          //  Referenced by: '<S292>/Integral Gain'

  real_T PID_vz_I;                     // Mask Parameter: PID_vz_I
                                          //  Referenced by: '<S340>/Integral Gain'

  real_T PID_x_I;                      // Mask Parameter: PID_x_I
                                          //  Referenced by: '<S390>/Integral Gain'

  real_T PID_y_I;                      // Mask Parameter: PID_y_I
                                          //  Referenced by: '<S440>/Integral Gain'

  real_T PID_x_InitialConditionForFilter;
                              // Mask Parameter: PID_x_InitialConditionForFilter
                                 //  Referenced by: '<S388>/Filter'

  real_T PID_y_InitialConditionForFilter;
                              // Mask Parameter: PID_y_InitialConditionForFilter
                                 //  Referenced by: '<S438>/Filter'

  real_T PID_vx_InitialConditionForFilte;
                              // Mask Parameter: PID_vx_InitialConditionForFilte
                                 //  Referenced by: '<S242>/Filter'

  real_T PID_vy_InitialConditionForFilte;
                              // Mask Parameter: PID_vy_InitialConditionForFilte
                                 //  Referenced by: '<S290>/Filter'

  real_T PID_pitch_InitialConditionForFi;
                              // Mask Parameter: PID_pitch_InitialConditionForFi
                                 //  Referenced by: '<S39>/Filter'

  real_T PID_roll_InitialConditionForFil;
                              // Mask Parameter: PID_roll_InitialConditionForFil
                                 //  Referenced by: '<S87>/Filter'

  real_T PID_yaw_InitialConditionForFilt;
                              // Mask Parameter: PID_yaw_InitialConditionForFilt
                                 //  Referenced by: '<S137>/Filter'

  real_T PID_Altitude_InitialConditionFo;
                              // Mask Parameter: PID_Altitude_InitialConditionFo
                                 //  Referenced by: '<S194>/Filter'

  real_T PID_vz_InitialConditionForFilte;
                              // Mask Parameter: PID_vz_InitialConditionForFilte
                                 //  Referenced by: '<S338>/Filter'

  real_T PID_x_InitialConditionForIntegr;
                              // Mask Parameter: PID_x_InitialConditionForIntegr
                                 //  Referenced by: '<S393>/Integrator'

  real_T PID_y_InitialConditionForIntegr;
                              // Mask Parameter: PID_y_InitialConditionForIntegr
                                 //  Referenced by: '<S443>/Integrator'

  real_T PID_vx_InitialConditionForInteg;
                              // Mask Parameter: PID_vx_InitialConditionForInteg
                                 //  Referenced by: '<S247>/Integrator'

  real_T PID_vy_InitialConditionForInteg;
                              // Mask Parameter: PID_vy_InitialConditionForInteg
                                 //  Referenced by: '<S295>/Integrator'

  real_T PID_pitch_InitialConditionForIn;
                              // Mask Parameter: PID_pitch_InitialConditionForIn
                                 //  Referenced by: '<S44>/Integrator'

  real_T PID_roll_InitialConditionForInt;
                              // Mask Parameter: PID_roll_InitialConditionForInt
                                 //  Referenced by: '<S92>/Integrator'

  real_T PID_yaw_InitialConditionForInte;
                              // Mask Parameter: PID_yaw_InitialConditionForInte
                                 //  Referenced by: '<S142>/Integrator'

  real_T PID_Altitude_InitialCondition_p;
                              // Mask Parameter: PID_Altitude_InitialCondition_p
                                 //  Referenced by: '<S199>/Integrator'

  real_T PID_vz_InitialConditionForInteg;
                              // Mask Parameter: PID_vz_InitialConditionForInteg
                                 //  Referenced by: '<S343>/Integrator'

  real_T PID_x_LowerSaturationLimit;
                                   // Mask Parameter: PID_x_LowerSaturationLimit
                                      //  Referenced by:
                                      //    '<S400>/Saturation'
                                      //    '<S386>/DeadZone'

  real_T PID_y_LowerSaturationLimit;
                                   // Mask Parameter: PID_y_LowerSaturationLimit
                                      //  Referenced by:
                                      //    '<S450>/Saturation'
                                      //    '<S436>/DeadZone'

  real_T PID_vx_LowerSaturationLimit;
                                  // Mask Parameter: PID_vx_LowerSaturationLimit
                                     //  Referenced by: '<S254>/Saturation'

  real_T PID_vy_LowerSaturationLimit;
                                  // Mask Parameter: PID_vy_LowerSaturationLimit
                                     //  Referenced by: '<S302>/Saturation'

  real_T PID_pitch_LowerSaturationLimit;
                               // Mask Parameter: PID_pitch_LowerSaturationLimit
                                  //  Referenced by: '<S51>/Saturation'

  real_T PID_roll_LowerSaturationLimit;
                                // Mask Parameter: PID_roll_LowerSaturationLimit
                                   //  Referenced by: '<S99>/Saturation'

  real_T PID_yaw_LowerSaturationLimit;
                                 // Mask Parameter: PID_yaw_LowerSaturationLimit
                                    //  Referenced by:
                                    //    '<S149>/Saturation'
                                    //    '<S135>/DeadZone'

  real_T PID_Altitude_LowerSaturationLim;
                              // Mask Parameter: PID_Altitude_LowerSaturationLim
                                 //  Referenced by:
                                 //    '<S206>/Saturation'
                                 //    '<S192>/DeadZone'

  real_T PID_vz_LowerSaturationLimit;
                                  // Mask Parameter: PID_vz_LowerSaturationLimit
                                     //  Referenced by: '<S350>/Saturation'

  real_T PID_x_N;                      // Mask Parameter: PID_x_N
                                          //  Referenced by: '<S396>/Filter Coefficient'

  real_T PID_y_N;                      // Mask Parameter: PID_y_N
                                          //  Referenced by: '<S446>/Filter Coefficient'

  real_T PID_vx_N;                     // Mask Parameter: PID_vx_N
                                          //  Referenced by: '<S250>/Filter Coefficient'

  real_T PID_vy_N;                     // Mask Parameter: PID_vy_N
                                          //  Referenced by: '<S298>/Filter Coefficient'

  real_T PID_pitch_N;                  // Mask Parameter: PID_pitch_N
                                          //  Referenced by: '<S47>/Filter Coefficient'

  real_T PID_roll_N;                   // Mask Parameter: PID_roll_N
                                          //  Referenced by: '<S95>/Filter Coefficient'

  real_T PID_yaw_N;                    // Mask Parameter: PID_yaw_N
                                          //  Referenced by: '<S145>/Filter Coefficient'

  real_T PID_Altitude_N;               // Mask Parameter: PID_Altitude_N
                                          //  Referenced by: '<S202>/Filter Coefficient'

  real_T PID_vz_N;                     // Mask Parameter: PID_vz_N
                                          //  Referenced by: '<S346>/Filter Coefficient'

  real_T PID_x_P;                      // Mask Parameter: PID_x_P
                                          //  Referenced by: '<S398>/Proportional Gain'

  real_T PID_y_P;                      // Mask Parameter: PID_y_P
                                          //  Referenced by: '<S448>/Proportional Gain'

  real_T PID_vx_P;                     // Mask Parameter: PID_vx_P
                                          //  Referenced by: '<S252>/Proportional Gain'

  real_T PID_vy_P;                     // Mask Parameter: PID_vy_P
                                          //  Referenced by: '<S300>/Proportional Gain'

  real_T PID_pitch_P;                  // Mask Parameter: PID_pitch_P
                                          //  Referenced by: '<S49>/Proportional Gain'

  real_T PID_roll_P;                   // Mask Parameter: PID_roll_P
                                          //  Referenced by: '<S97>/Proportional Gain'

  real_T PID_yaw_P;                    // Mask Parameter: PID_yaw_P
                                          //  Referenced by: '<S147>/Proportional Gain'

  real_T PID_Altitude_P;               // Mask Parameter: PID_Altitude_P
                                          //  Referenced by: '<S204>/Proportional Gain'

  real_T PID_vz_P;                     // Mask Parameter: PID_vz_P
                                          //  Referenced by: '<S348>/Proportional Gain'

  real_T PID_x_UpperSaturationLimit;
                                   // Mask Parameter: PID_x_UpperSaturationLimit
                                      //  Referenced by:
                                      //    '<S400>/Saturation'
                                      //    '<S386>/DeadZone'

  real_T PID_y_UpperSaturationLimit;
                                   // Mask Parameter: PID_y_UpperSaturationLimit
                                      //  Referenced by:
                                      //    '<S450>/Saturation'
                                      //    '<S436>/DeadZone'

  real_T PID_vx_UpperSaturationLimit;
                                  // Mask Parameter: PID_vx_UpperSaturationLimit
                                     //  Referenced by: '<S254>/Saturation'

  real_T PID_vy_UpperSaturationLimit;
                                  // Mask Parameter: PID_vy_UpperSaturationLimit
                                     //  Referenced by: '<S302>/Saturation'

  real_T PID_pitch_UpperSaturationLimit;
                               // Mask Parameter: PID_pitch_UpperSaturationLimit
                                  //  Referenced by: '<S51>/Saturation'

  real_T PID_roll_UpperSaturationLimit;
                                // Mask Parameter: PID_roll_UpperSaturationLimit
                                   //  Referenced by: '<S99>/Saturation'

  real_T PID_yaw_UpperSaturationLimit;
                                 // Mask Parameter: PID_yaw_UpperSaturationLimit
                                    //  Referenced by:
                                    //    '<S149>/Saturation'
                                    //    '<S135>/DeadZone'

  real_T PID_Altitude_UpperSaturationLim;
                              // Mask Parameter: PID_Altitude_UpperSaturationLim
                                 //  Referenced by:
                                 //    '<S206>/Saturation'
                                 //    '<S192>/DeadZone'

  real_T PID_vz_UpperSaturationLimit;
                                  // Mask Parameter: PID_vz_UpperSaturationLimit
                                     //  Referenced by: '<S350>/Saturation'

  real_T Constant_Value;               // Expression: 1
                                          //  Referenced by: '<S467>/Constant'

  real_T Constant_Value_p;             // Expression: 1
                                          //  Referenced by: '<S468>/Constant'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S133>/Constant1'

  real_T Constant1_Value_n;            // Expression: 0
                                          //  Referenced by: '<S190>/Constant1'

  real_T Constant1_Value_f;            // Expression: 0
                                          //  Referenced by: '<S384>/Constant1'

  real_T Constant1_Value_a;            // Expression: 0
                                          //  Referenced by: '<S434>/Constant1'

  real_T Gain1_Gain;                   // Expression: pi/180
                                          //  Referenced by: '<S7>/Gain1'

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S393>/Integrator'

  real_T Filter_gainval;               // Computed Parameter: Filter_gainval
                                          //  Referenced by: '<S388>/Filter'

  real_T Integrator_gainval_n;       // Computed Parameter: Integrator_gainval_n
                                        //  Referenced by: '<S443>/Integrator'

  real_T Filter_gainval_i;             // Computed Parameter: Filter_gainval_i
                                          //  Referenced by: '<S438>/Filter'

  real_T Integrator_gainval_j;       // Computed Parameter: Integrator_gainval_j
                                        //  Referenced by: '<S247>/Integrator'

  real_T Filter_gainval_l;             // Computed Parameter: Filter_gainval_l
                                          //  Referenced by: '<S242>/Filter'

  real_T Gain1_Gain_l;                 // Expression: pi/180
                                          //  Referenced by: '<S8>/Gain1'

  real_T Integrator_gainval_o;       // Computed Parameter: Integrator_gainval_o
                                        //  Referenced by: '<S295>/Integrator'

  real_T Filter_gainval_j;             // Computed Parameter: Filter_gainval_j
                                          //  Referenced by: '<S290>/Filter'

  real_T Gain_Gain;                    // Expression: -1
                                          //  Referenced by: '<S5>/Gain'

  real_T Gain1_Gain_d;                 // Expression: pi/180
                                          //  Referenced by: '<S9>/Gain1'

  real_T Filter_gainval_a;             // Computed Parameter: Filter_gainval_a
                                          //  Referenced by: '<S39>/Filter'

  real_T Integrator_gainval_p;       // Computed Parameter: Integrator_gainval_p
                                        //  Referenced by: '<S44>/Integrator'

  real_T Filter_gainval_k;             // Computed Parameter: Filter_gainval_k
                                          //  Referenced by: '<S87>/Filter'

  real_T Integrator_gainval_b;       // Computed Parameter: Integrator_gainval_b
                                        //  Referenced by: '<S92>/Integrator'

  real_T Clamping_zero_Value;          // Expression: 0
                                          //  Referenced by: '<S133>/Clamping_zero'

  real_T Filter_gainval_jn;            // Computed Parameter: Filter_gainval_jn
                                          //  Referenced by: '<S137>/Filter'

  real_T Integrator_gainval_oi;     // Computed Parameter: Integrator_gainval_oi
                                       //  Referenced by: '<S142>/Integrator'

  real_T Clamping_zero_Value_l;        // Expression: 0
                                          //  Referenced by: '<S190>/Clamping_zero'

  real_T Filter_gainval_iw;            // Computed Parameter: Filter_gainval_iw
                                          //  Referenced by: '<S194>/Filter'

  real_T Integrator_gainval_jh;     // Computed Parameter: Integrator_gainval_jh
                                       //  Referenced by: '<S199>/Integrator'

  real_T Filter_gainval_at;            // Computed Parameter: Filter_gainval_at
                                          //  Referenced by: '<S338>/Filter'

  real_T Integrator_gainval_a;       // Computed Parameter: Integrator_gainval_a
                                        //  Referenced by: '<S343>/Integrator'

  real_T Clamping_zero_Value_n;        // Expression: 0
                                          //  Referenced by: '<S384>/Clamping_zero'

  real_T Clamping_zero_Value_a;        // Expression: 0
                                          //  Referenced by: '<S434>/Clamping_zero'

  real_T Mixermatrix_Value[16];
                          // Expression: [1 -1 1 1;1 1 -1 1;1 -1 -1 -1;1 1 1 -1]
                             //  Referenced by: '<S6>/Mixer matrix'

  real_T Saturation_UpperSat;          // Expression: 1
                                          //  Referenced by: '<S6>/Saturation'

  real_T Saturation_LowerSat;          // Expression: 0
                                          //  Referenced by: '<S6>/Saturation'

  real_T Constant_Value_h;             // Expression: 1000
                                          //  Referenced by: '<S2>/Constant'

  real_T Gain_Gain_h;                  // Expression: 1000
                                          //  Referenced by: '<S2>/Gain'

  boolean_T Constant_Value_e;          // Computed Parameter: Constant_Value_e
                                          //  Referenced by: '<Root>/Constant'

  int8_T Constant_Value_l;             // Computed Parameter: Constant_Value_l
                                          //  Referenced by: '<S133>/Constant'

  int8_T Constant2_Value;              // Computed Parameter: Constant2_Value
                                          //  Referenced by: '<S133>/Constant2'

  int8_T Constant3_Value;              // Computed Parameter: Constant3_Value
                                          //  Referenced by: '<S133>/Constant3'

  int8_T Constant4_Value;              // Computed Parameter: Constant4_Value
                                          //  Referenced by: '<S133>/Constant4'

  int8_T Constant_Value_c;             // Computed Parameter: Constant_Value_c
                                          //  Referenced by: '<S190>/Constant'

  int8_T Constant2_Value_h;            // Computed Parameter: Constant2_Value_h
                                          //  Referenced by: '<S190>/Constant2'

  int8_T Constant3_Value_f;            // Computed Parameter: Constant3_Value_f
                                          //  Referenced by: '<S190>/Constant3'

  int8_T Constant4_Value_h;            // Computed Parameter: Constant4_Value_h
                                          //  Referenced by: '<S190>/Constant4'

  int8_T Constant_Value_j;             // Computed Parameter: Constant_Value_j
                                          //  Referenced by: '<S384>/Constant'

  int8_T Constant2_Value_o;            // Computed Parameter: Constant2_Value_o
                                          //  Referenced by: '<S384>/Constant2'

  int8_T Constant3_Value_p;            // Computed Parameter: Constant3_Value_p
                                          //  Referenced by: '<S384>/Constant3'

  int8_T Constant4_Value_c;            // Computed Parameter: Constant4_Value_c
                                          //  Referenced by: '<S384>/Constant4'

  int8_T Constant_Value_l0;            // Computed Parameter: Constant_Value_l0
                                          //  Referenced by: '<S434>/Constant'

  int8_T Constant2_Value_n;            // Computed Parameter: Constant2_Value_n
                                          //  Referenced by: '<S434>/Constant2'

  int8_T Constant3_Value_c;            // Computed Parameter: Constant3_Value_c
                                          //  Referenced by: '<S434>/Constant3'

  int8_T Constant4_Value_i;            // Computed Parameter: Constant4_Value_i
                                          //  Referenced by: '<S434>/Constant4'

};

#endif                                 //FlightController_MDLREF_HIDE_CHILD_

#ifndef FlightController_MDLREF_HIDE_CHILD_

// Real-time Model Data Structure
struct tag_RTM_FlightController_T {
  const char_T **errorStatus;
};

#endif                                 //FlightController_MDLREF_HIDE_CHILD_

#ifndef FlightController_MDLREF_HIDE_CHILD_

struct MdlrefDW_FlightController_T {
  RT_MODEL_FlightController_T rtm;
};

#endif                                 //FlightController_MDLREF_HIDE_CHILD_

extern void FlightController_Init(boolean_T *rty_Arming);
extern void FlightController(const real_T rtu_Des_command[4], const real32_T
  *rtu_uorb_vehicle_local_position, const real32_T
  *rtu_uorb_vehicle_local_positi_c, const real32_T
  *rtu_uorb_vehicle_local_positi_e, const real32_T
  *rtu_uorb_vehicle_local_positi_n, const real32_T
  *rtu_uorb_vehicle_local_positi_f, const real32_T
  *rtu_uorb_vehicle_local_positi_k, const real32_T rtu_uorb_vehicle_attitude_q[4],
  boolean_T *rty_Arming, uint16_T rty_Actuators[4]);

// Model reference registration function
extern void FlightController_initialize(const char_T **rt_errorStatus);

#ifndef FlightController_MDLREF_HIDE_CHILD_

extern MdlrefDW_FlightController_T FlightController_MdlrefDW;

#endif                                 //FlightController_MDLREF_HIDE_CHILD_

#ifndef FlightController_MDLREF_HIDE_CHILD_

// Block signals (default storage)
extern B_FlightController_c_T FlightController_B;

#endif                                 //FlightController_MDLREF_HIDE_CHILD_

#ifndef FlightController_MDLREF_HIDE_CHILD_

// Block states (default storage)
extern DW_FlightController_f_T FlightController_DW;

#endif                                 //FlightController_MDLREF_HIDE_CHILD_

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S6>/Reshape' : Reshape block reduction


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
//  '<Root>' : 'FlightController'
//  '<S1>'   : 'FlightController/Controller'
//  '<S2>'   : 'FlightController/Omega to PX4 PWM'
//  '<S3>'   : 'FlightController/Signal Conditioning'
//  '<S4>'   : 'FlightController/Controller/Attitude controller'
//  '<S5>'   : 'FlightController/Controller/Position & Altitude controller'
//  '<S6>'   : 'FlightController/Controller/To Actuator'
//  '<S7>'   : 'FlightController/Controller/Attitude controller/Degrees to Radians'
//  '<S8>'   : 'FlightController/Controller/Attitude controller/Degrees to Radians1'
//  '<S9>'   : 'FlightController/Controller/Attitude controller/Degrees to Radians2'
//  '<S10>'  : 'FlightController/Controller/Attitude controller/PID_pitch'
//  '<S11>'  : 'FlightController/Controller/Attitude controller/PID_roll'
//  '<S12>'  : 'FlightController/Controller/Attitude controller/PID_yaw'
//  '<S13>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Anti-windup'
//  '<S14>'  : 'FlightController/Controller/Attitude controller/PID_pitch/D Gain'
//  '<S15>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Filter'
//  '<S16>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Filter ICs'
//  '<S17>'  : 'FlightController/Controller/Attitude controller/PID_pitch/I Gain'
//  '<S18>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Ideal P Gain'
//  '<S19>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Ideal P Gain Fdbk'
//  '<S20>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Integrator'
//  '<S21>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Integrator ICs'
//  '<S22>'  : 'FlightController/Controller/Attitude controller/PID_pitch/N Copy'
//  '<S23>'  : 'FlightController/Controller/Attitude controller/PID_pitch/N Gain'
//  '<S24>'  : 'FlightController/Controller/Attitude controller/PID_pitch/P Copy'
//  '<S25>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Parallel P Gain'
//  '<S26>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Reset Signal'
//  '<S27>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Saturation'
//  '<S28>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Saturation Fdbk'
//  '<S29>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Sum'
//  '<S30>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Sum Fdbk'
//  '<S31>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Tracking Mode'
//  '<S32>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Tracking Mode Sum'
//  '<S33>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Tsamp - Integral'
//  '<S34>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Tsamp - Ngain'
//  '<S35>'  : 'FlightController/Controller/Attitude controller/PID_pitch/postSat Signal'
//  '<S36>'  : 'FlightController/Controller/Attitude controller/PID_pitch/preSat Signal'
//  '<S37>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Anti-windup/Passthrough'
//  '<S38>'  : 'FlightController/Controller/Attitude controller/PID_pitch/D Gain/Internal Parameters'
//  '<S39>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Filter/Disc. Forward Euler Filter'
//  '<S40>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Filter ICs/Internal IC - Filter'
//  '<S41>'  : 'FlightController/Controller/Attitude controller/PID_pitch/I Gain/Internal Parameters'
//  '<S42>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Ideal P Gain/Passthrough'
//  '<S43>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Ideal P Gain Fdbk/Disabled'
//  '<S44>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Integrator/Discrete'
//  '<S45>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Integrator ICs/Internal IC'
//  '<S46>'  : 'FlightController/Controller/Attitude controller/PID_pitch/N Copy/Disabled'
//  '<S47>'  : 'FlightController/Controller/Attitude controller/PID_pitch/N Gain/Internal Parameters'
//  '<S48>'  : 'FlightController/Controller/Attitude controller/PID_pitch/P Copy/Disabled'
//  '<S49>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Parallel P Gain/Internal Parameters'
//  '<S50>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Reset Signal/Disabled'
//  '<S51>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Saturation/Enabled'
//  '<S52>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Saturation Fdbk/Disabled'
//  '<S53>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Sum/Sum_PID'
//  '<S54>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Sum Fdbk/Disabled'
//  '<S55>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Tracking Mode/Disabled'
//  '<S56>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Tracking Mode Sum/Passthrough'
//  '<S57>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Tsamp - Integral/TsSignalSpecification'
//  '<S58>'  : 'FlightController/Controller/Attitude controller/PID_pitch/Tsamp - Ngain/Passthrough'
//  '<S59>'  : 'FlightController/Controller/Attitude controller/PID_pitch/postSat Signal/Forward_Path'
//  '<S60>'  : 'FlightController/Controller/Attitude controller/PID_pitch/preSat Signal/Forward_Path'
//  '<S61>'  : 'FlightController/Controller/Attitude controller/PID_roll/Anti-windup'
//  '<S62>'  : 'FlightController/Controller/Attitude controller/PID_roll/D Gain'
//  '<S63>'  : 'FlightController/Controller/Attitude controller/PID_roll/Filter'
//  '<S64>'  : 'FlightController/Controller/Attitude controller/PID_roll/Filter ICs'
//  '<S65>'  : 'FlightController/Controller/Attitude controller/PID_roll/I Gain'
//  '<S66>'  : 'FlightController/Controller/Attitude controller/PID_roll/Ideal P Gain'
//  '<S67>'  : 'FlightController/Controller/Attitude controller/PID_roll/Ideal P Gain Fdbk'
//  '<S68>'  : 'FlightController/Controller/Attitude controller/PID_roll/Integrator'
//  '<S69>'  : 'FlightController/Controller/Attitude controller/PID_roll/Integrator ICs'
//  '<S70>'  : 'FlightController/Controller/Attitude controller/PID_roll/N Copy'
//  '<S71>'  : 'FlightController/Controller/Attitude controller/PID_roll/N Gain'
//  '<S72>'  : 'FlightController/Controller/Attitude controller/PID_roll/P Copy'
//  '<S73>'  : 'FlightController/Controller/Attitude controller/PID_roll/Parallel P Gain'
//  '<S74>'  : 'FlightController/Controller/Attitude controller/PID_roll/Reset Signal'
//  '<S75>'  : 'FlightController/Controller/Attitude controller/PID_roll/Saturation'
//  '<S76>'  : 'FlightController/Controller/Attitude controller/PID_roll/Saturation Fdbk'
//  '<S77>'  : 'FlightController/Controller/Attitude controller/PID_roll/Sum'
//  '<S78>'  : 'FlightController/Controller/Attitude controller/PID_roll/Sum Fdbk'
//  '<S79>'  : 'FlightController/Controller/Attitude controller/PID_roll/Tracking Mode'
//  '<S80>'  : 'FlightController/Controller/Attitude controller/PID_roll/Tracking Mode Sum'
//  '<S81>'  : 'FlightController/Controller/Attitude controller/PID_roll/Tsamp - Integral'
//  '<S82>'  : 'FlightController/Controller/Attitude controller/PID_roll/Tsamp - Ngain'
//  '<S83>'  : 'FlightController/Controller/Attitude controller/PID_roll/postSat Signal'
//  '<S84>'  : 'FlightController/Controller/Attitude controller/PID_roll/preSat Signal'
//  '<S85>'  : 'FlightController/Controller/Attitude controller/PID_roll/Anti-windup/Passthrough'
//  '<S86>'  : 'FlightController/Controller/Attitude controller/PID_roll/D Gain/Internal Parameters'
//  '<S87>'  : 'FlightController/Controller/Attitude controller/PID_roll/Filter/Disc. Forward Euler Filter'
//  '<S88>'  : 'FlightController/Controller/Attitude controller/PID_roll/Filter ICs/Internal IC - Filter'
//  '<S89>'  : 'FlightController/Controller/Attitude controller/PID_roll/I Gain/Internal Parameters'
//  '<S90>'  : 'FlightController/Controller/Attitude controller/PID_roll/Ideal P Gain/Passthrough'
//  '<S91>'  : 'FlightController/Controller/Attitude controller/PID_roll/Ideal P Gain Fdbk/Disabled'
//  '<S92>'  : 'FlightController/Controller/Attitude controller/PID_roll/Integrator/Discrete'
//  '<S93>'  : 'FlightController/Controller/Attitude controller/PID_roll/Integrator ICs/Internal IC'
//  '<S94>'  : 'FlightController/Controller/Attitude controller/PID_roll/N Copy/Disabled'
//  '<S95>'  : 'FlightController/Controller/Attitude controller/PID_roll/N Gain/Internal Parameters'
//  '<S96>'  : 'FlightController/Controller/Attitude controller/PID_roll/P Copy/Disabled'
//  '<S97>'  : 'FlightController/Controller/Attitude controller/PID_roll/Parallel P Gain/Internal Parameters'
//  '<S98>'  : 'FlightController/Controller/Attitude controller/PID_roll/Reset Signal/Disabled'
//  '<S99>'  : 'FlightController/Controller/Attitude controller/PID_roll/Saturation/Enabled'
//  '<S100>' : 'FlightController/Controller/Attitude controller/PID_roll/Saturation Fdbk/Disabled'
//  '<S101>' : 'FlightController/Controller/Attitude controller/PID_roll/Sum/Sum_PID'
//  '<S102>' : 'FlightController/Controller/Attitude controller/PID_roll/Sum Fdbk/Disabled'
//  '<S103>' : 'FlightController/Controller/Attitude controller/PID_roll/Tracking Mode/Disabled'
//  '<S104>' : 'FlightController/Controller/Attitude controller/PID_roll/Tracking Mode Sum/Passthrough'
//  '<S105>' : 'FlightController/Controller/Attitude controller/PID_roll/Tsamp - Integral/TsSignalSpecification'
//  '<S106>' : 'FlightController/Controller/Attitude controller/PID_roll/Tsamp - Ngain/Passthrough'
//  '<S107>' : 'FlightController/Controller/Attitude controller/PID_roll/postSat Signal/Forward_Path'
//  '<S108>' : 'FlightController/Controller/Attitude controller/PID_roll/preSat Signal/Forward_Path'
//  '<S109>' : 'FlightController/Controller/Attitude controller/PID_yaw/Anti-windup'
//  '<S110>' : 'FlightController/Controller/Attitude controller/PID_yaw/D Gain'
//  '<S111>' : 'FlightController/Controller/Attitude controller/PID_yaw/Filter'
//  '<S112>' : 'FlightController/Controller/Attitude controller/PID_yaw/Filter ICs'
//  '<S113>' : 'FlightController/Controller/Attitude controller/PID_yaw/I Gain'
//  '<S114>' : 'FlightController/Controller/Attitude controller/PID_yaw/Ideal P Gain'
//  '<S115>' : 'FlightController/Controller/Attitude controller/PID_yaw/Ideal P Gain Fdbk'
//  '<S116>' : 'FlightController/Controller/Attitude controller/PID_yaw/Integrator'
//  '<S117>' : 'FlightController/Controller/Attitude controller/PID_yaw/Integrator ICs'
//  '<S118>' : 'FlightController/Controller/Attitude controller/PID_yaw/N Copy'
//  '<S119>' : 'FlightController/Controller/Attitude controller/PID_yaw/N Gain'
//  '<S120>' : 'FlightController/Controller/Attitude controller/PID_yaw/P Copy'
//  '<S121>' : 'FlightController/Controller/Attitude controller/PID_yaw/Parallel P Gain'
//  '<S122>' : 'FlightController/Controller/Attitude controller/PID_yaw/Reset Signal'
//  '<S123>' : 'FlightController/Controller/Attitude controller/PID_yaw/Saturation'
//  '<S124>' : 'FlightController/Controller/Attitude controller/PID_yaw/Saturation Fdbk'
//  '<S125>' : 'FlightController/Controller/Attitude controller/PID_yaw/Sum'
//  '<S126>' : 'FlightController/Controller/Attitude controller/PID_yaw/Sum Fdbk'
//  '<S127>' : 'FlightController/Controller/Attitude controller/PID_yaw/Tracking Mode'
//  '<S128>' : 'FlightController/Controller/Attitude controller/PID_yaw/Tracking Mode Sum'
//  '<S129>' : 'FlightController/Controller/Attitude controller/PID_yaw/Tsamp - Integral'
//  '<S130>' : 'FlightController/Controller/Attitude controller/PID_yaw/Tsamp - Ngain'
//  '<S131>' : 'FlightController/Controller/Attitude controller/PID_yaw/postSat Signal'
//  '<S132>' : 'FlightController/Controller/Attitude controller/PID_yaw/preSat Signal'
//  '<S133>' : 'FlightController/Controller/Attitude controller/PID_yaw/Anti-windup/Disc. Clamping Parallel'
//  '<S134>' : 'FlightController/Controller/Attitude controller/PID_yaw/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S135>' : 'FlightController/Controller/Attitude controller/PID_yaw/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S136>' : 'FlightController/Controller/Attitude controller/PID_yaw/D Gain/Internal Parameters'
//  '<S137>' : 'FlightController/Controller/Attitude controller/PID_yaw/Filter/Disc. Forward Euler Filter'
//  '<S138>' : 'FlightController/Controller/Attitude controller/PID_yaw/Filter ICs/Internal IC - Filter'
//  '<S139>' : 'FlightController/Controller/Attitude controller/PID_yaw/I Gain/Internal Parameters'
//  '<S140>' : 'FlightController/Controller/Attitude controller/PID_yaw/Ideal P Gain/Passthrough'
//  '<S141>' : 'FlightController/Controller/Attitude controller/PID_yaw/Ideal P Gain Fdbk/Passthrough'
//  '<S142>' : 'FlightController/Controller/Attitude controller/PID_yaw/Integrator/Discrete'
//  '<S143>' : 'FlightController/Controller/Attitude controller/PID_yaw/Integrator ICs/Internal IC'
//  '<S144>' : 'FlightController/Controller/Attitude controller/PID_yaw/N Copy/Disabled'
//  '<S145>' : 'FlightController/Controller/Attitude controller/PID_yaw/N Gain/Internal Parameters'
//  '<S146>' : 'FlightController/Controller/Attitude controller/PID_yaw/P Copy/Disabled'
//  '<S147>' : 'FlightController/Controller/Attitude controller/PID_yaw/Parallel P Gain/Internal Parameters'
//  '<S148>' : 'FlightController/Controller/Attitude controller/PID_yaw/Reset Signal/Disabled'
//  '<S149>' : 'FlightController/Controller/Attitude controller/PID_yaw/Saturation/Enabled'
//  '<S150>' : 'FlightController/Controller/Attitude controller/PID_yaw/Saturation Fdbk/Passthrough'
//  '<S151>' : 'FlightController/Controller/Attitude controller/PID_yaw/Sum/Sum_PID'
//  '<S152>' : 'FlightController/Controller/Attitude controller/PID_yaw/Sum Fdbk/Enabled'
//  '<S153>' : 'FlightController/Controller/Attitude controller/PID_yaw/Tracking Mode/Disabled'
//  '<S154>' : 'FlightController/Controller/Attitude controller/PID_yaw/Tracking Mode Sum/Passthrough'
//  '<S155>' : 'FlightController/Controller/Attitude controller/PID_yaw/Tsamp - Integral/TsSignalSpecification'
//  '<S156>' : 'FlightController/Controller/Attitude controller/PID_yaw/Tsamp - Ngain/Passthrough'
//  '<S157>' : 'FlightController/Controller/Attitude controller/PID_yaw/postSat Signal/Feedback_Path'
//  '<S158>' : 'FlightController/Controller/Attitude controller/PID_yaw/preSat Signal/Feedback_Path'
//  '<S159>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude'
//  '<S160>' : 'FlightController/Controller/Position & Altitude controller/PID_vx'
//  '<S161>' : 'FlightController/Controller/Position & Altitude controller/PID_vy'
//  '<S162>' : 'FlightController/Controller/Position & Altitude controller/PID_vz'
//  '<S163>' : 'FlightController/Controller/Position & Altitude controller/PID_x'
//  '<S164>' : 'FlightController/Controller/Position & Altitude controller/PID_y'
//  '<S165>' : 'FlightController/Controller/Position & Altitude controller/Rotation mat '
//  '<S166>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Anti-windup'
//  '<S167>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/D Gain'
//  '<S168>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Filter'
//  '<S169>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Filter ICs'
//  '<S170>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/I Gain'
//  '<S171>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Ideal P Gain'
//  '<S172>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Ideal P Gain Fdbk'
//  '<S173>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Integrator'
//  '<S174>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Integrator ICs'
//  '<S175>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/N Copy'
//  '<S176>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/N Gain'
//  '<S177>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/P Copy'
//  '<S178>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Parallel P Gain'
//  '<S179>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Reset Signal'
//  '<S180>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Saturation'
//  '<S181>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Saturation Fdbk'
//  '<S182>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Sum'
//  '<S183>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Sum Fdbk'
//  '<S184>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Tracking Mode'
//  '<S185>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Tracking Mode Sum'
//  '<S186>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Tsamp - Integral'
//  '<S187>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Tsamp - Ngain'
//  '<S188>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/postSat Signal'
//  '<S189>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/preSat Signal'
//  '<S190>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Anti-windup/Disc. Clamping Parallel'
//  '<S191>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S192>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S193>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/D Gain/Internal Parameters'
//  '<S194>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Filter/Disc. Forward Euler Filter'
//  '<S195>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Filter ICs/Internal IC - Filter'
//  '<S196>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/I Gain/Internal Parameters'
//  '<S197>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Ideal P Gain/Passthrough'
//  '<S198>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Ideal P Gain Fdbk/Passthrough'
//  '<S199>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Integrator/Discrete'
//  '<S200>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Integrator ICs/Internal IC'
//  '<S201>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/N Copy/Disabled'
//  '<S202>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/N Gain/Internal Parameters'
//  '<S203>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/P Copy/Disabled'
//  '<S204>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Parallel P Gain/Internal Parameters'
//  '<S205>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Reset Signal/Disabled'
//  '<S206>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Saturation/Enabled'
//  '<S207>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Saturation Fdbk/Passthrough'
//  '<S208>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Sum/Sum_PID'
//  '<S209>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Sum Fdbk/Enabled'
//  '<S210>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Tracking Mode/Disabled'
//  '<S211>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Tracking Mode Sum/Passthrough'
//  '<S212>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Tsamp - Integral/TsSignalSpecification'
//  '<S213>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/Tsamp - Ngain/Passthrough'
//  '<S214>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/postSat Signal/Feedback_Path'
//  '<S215>' : 'FlightController/Controller/Position & Altitude controller/PID_Altitude/preSat Signal/Feedback_Path'
//  '<S216>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Anti-windup'
//  '<S217>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/D Gain'
//  '<S218>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Filter'
//  '<S219>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Filter ICs'
//  '<S220>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/I Gain'
//  '<S221>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Ideal P Gain'
//  '<S222>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Ideal P Gain Fdbk'
//  '<S223>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Integrator'
//  '<S224>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Integrator ICs'
//  '<S225>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/N Copy'
//  '<S226>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/N Gain'
//  '<S227>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/P Copy'
//  '<S228>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Parallel P Gain'
//  '<S229>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Reset Signal'
//  '<S230>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Saturation'
//  '<S231>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Saturation Fdbk'
//  '<S232>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Sum'
//  '<S233>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Sum Fdbk'
//  '<S234>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Tracking Mode'
//  '<S235>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Tracking Mode Sum'
//  '<S236>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Tsamp - Integral'
//  '<S237>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Tsamp - Ngain'
//  '<S238>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/postSat Signal'
//  '<S239>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/preSat Signal'
//  '<S240>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Anti-windup/Passthrough'
//  '<S241>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/D Gain/Internal Parameters'
//  '<S242>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Filter/Disc. Forward Euler Filter'
//  '<S243>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Filter ICs/Internal IC - Filter'
//  '<S244>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/I Gain/Internal Parameters'
//  '<S245>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Ideal P Gain/Passthrough'
//  '<S246>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Ideal P Gain Fdbk/Disabled'
//  '<S247>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Integrator/Discrete'
//  '<S248>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Integrator ICs/Internal IC'
//  '<S249>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/N Copy/Disabled'
//  '<S250>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/N Gain/Internal Parameters'
//  '<S251>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/P Copy/Disabled'
//  '<S252>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Parallel P Gain/Internal Parameters'
//  '<S253>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Reset Signal/Disabled'
//  '<S254>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Saturation/Enabled'
//  '<S255>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Saturation Fdbk/Disabled'
//  '<S256>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Sum/Sum_PID'
//  '<S257>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Sum Fdbk/Disabled'
//  '<S258>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Tracking Mode/Disabled'
//  '<S259>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Tracking Mode Sum/Passthrough'
//  '<S260>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Tsamp - Integral/TsSignalSpecification'
//  '<S261>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/Tsamp - Ngain/Passthrough'
//  '<S262>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/postSat Signal/Forward_Path'
//  '<S263>' : 'FlightController/Controller/Position & Altitude controller/PID_vx/preSat Signal/Forward_Path'
//  '<S264>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Anti-windup'
//  '<S265>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/D Gain'
//  '<S266>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Filter'
//  '<S267>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Filter ICs'
//  '<S268>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/I Gain'
//  '<S269>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Ideal P Gain'
//  '<S270>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Ideal P Gain Fdbk'
//  '<S271>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Integrator'
//  '<S272>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Integrator ICs'
//  '<S273>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/N Copy'
//  '<S274>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/N Gain'
//  '<S275>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/P Copy'
//  '<S276>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Parallel P Gain'
//  '<S277>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Reset Signal'
//  '<S278>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Saturation'
//  '<S279>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Saturation Fdbk'
//  '<S280>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Sum'
//  '<S281>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Sum Fdbk'
//  '<S282>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Tracking Mode'
//  '<S283>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Tracking Mode Sum'
//  '<S284>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Tsamp - Integral'
//  '<S285>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Tsamp - Ngain'
//  '<S286>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/postSat Signal'
//  '<S287>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/preSat Signal'
//  '<S288>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Anti-windup/Passthrough'
//  '<S289>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/D Gain/Internal Parameters'
//  '<S290>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Filter/Disc. Forward Euler Filter'
//  '<S291>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Filter ICs/Internal IC - Filter'
//  '<S292>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/I Gain/Internal Parameters'
//  '<S293>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Ideal P Gain/Passthrough'
//  '<S294>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Ideal P Gain Fdbk/Disabled'
//  '<S295>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Integrator/Discrete'
//  '<S296>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Integrator ICs/Internal IC'
//  '<S297>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/N Copy/Disabled'
//  '<S298>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/N Gain/Internal Parameters'
//  '<S299>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/P Copy/Disabled'
//  '<S300>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Parallel P Gain/Internal Parameters'
//  '<S301>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Reset Signal/Disabled'
//  '<S302>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Saturation/Enabled'
//  '<S303>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Saturation Fdbk/Disabled'
//  '<S304>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Sum/Sum_PID'
//  '<S305>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Sum Fdbk/Disabled'
//  '<S306>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Tracking Mode/Disabled'
//  '<S307>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Tracking Mode Sum/Passthrough'
//  '<S308>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Tsamp - Integral/TsSignalSpecification'
//  '<S309>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/Tsamp - Ngain/Passthrough'
//  '<S310>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/postSat Signal/Forward_Path'
//  '<S311>' : 'FlightController/Controller/Position & Altitude controller/PID_vy/preSat Signal/Forward_Path'
//  '<S312>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Anti-windup'
//  '<S313>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/D Gain'
//  '<S314>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Filter'
//  '<S315>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Filter ICs'
//  '<S316>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/I Gain'
//  '<S317>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Ideal P Gain'
//  '<S318>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Ideal P Gain Fdbk'
//  '<S319>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Integrator'
//  '<S320>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Integrator ICs'
//  '<S321>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/N Copy'
//  '<S322>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/N Gain'
//  '<S323>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/P Copy'
//  '<S324>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Parallel P Gain'
//  '<S325>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Reset Signal'
//  '<S326>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Saturation'
//  '<S327>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Saturation Fdbk'
//  '<S328>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Sum'
//  '<S329>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Sum Fdbk'
//  '<S330>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Tracking Mode'
//  '<S331>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Tracking Mode Sum'
//  '<S332>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Tsamp - Integral'
//  '<S333>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Tsamp - Ngain'
//  '<S334>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/postSat Signal'
//  '<S335>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/preSat Signal'
//  '<S336>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Anti-windup/Passthrough'
//  '<S337>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/D Gain/Internal Parameters'
//  '<S338>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Filter/Disc. Forward Euler Filter'
//  '<S339>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Filter ICs/Internal IC - Filter'
//  '<S340>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/I Gain/Internal Parameters'
//  '<S341>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Ideal P Gain/Passthrough'
//  '<S342>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Ideal P Gain Fdbk/Disabled'
//  '<S343>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Integrator/Discrete'
//  '<S344>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Integrator ICs/Internal IC'
//  '<S345>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/N Copy/Disabled'
//  '<S346>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/N Gain/Internal Parameters'
//  '<S347>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/P Copy/Disabled'
//  '<S348>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Parallel P Gain/Internal Parameters'
//  '<S349>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Reset Signal/Disabled'
//  '<S350>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Saturation/Enabled'
//  '<S351>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Saturation Fdbk/Disabled'
//  '<S352>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Sum/Sum_PID'
//  '<S353>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Sum Fdbk/Disabled'
//  '<S354>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Tracking Mode/Disabled'
//  '<S355>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Tracking Mode Sum/Passthrough'
//  '<S356>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Tsamp - Integral/TsSignalSpecification'
//  '<S357>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/Tsamp - Ngain/Passthrough'
//  '<S358>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/postSat Signal/Forward_Path'
//  '<S359>' : 'FlightController/Controller/Position & Altitude controller/PID_vz/preSat Signal/Forward_Path'
//  '<S360>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Anti-windup'
//  '<S361>' : 'FlightController/Controller/Position & Altitude controller/PID_x/D Gain'
//  '<S362>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Filter'
//  '<S363>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Filter ICs'
//  '<S364>' : 'FlightController/Controller/Position & Altitude controller/PID_x/I Gain'
//  '<S365>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Ideal P Gain'
//  '<S366>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Ideal P Gain Fdbk'
//  '<S367>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Integrator'
//  '<S368>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Integrator ICs'
//  '<S369>' : 'FlightController/Controller/Position & Altitude controller/PID_x/N Copy'
//  '<S370>' : 'FlightController/Controller/Position & Altitude controller/PID_x/N Gain'
//  '<S371>' : 'FlightController/Controller/Position & Altitude controller/PID_x/P Copy'
//  '<S372>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Parallel P Gain'
//  '<S373>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Reset Signal'
//  '<S374>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Saturation'
//  '<S375>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Saturation Fdbk'
//  '<S376>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Sum'
//  '<S377>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Sum Fdbk'
//  '<S378>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Tracking Mode'
//  '<S379>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Tracking Mode Sum'
//  '<S380>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Tsamp - Integral'
//  '<S381>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Tsamp - Ngain'
//  '<S382>' : 'FlightController/Controller/Position & Altitude controller/PID_x/postSat Signal'
//  '<S383>' : 'FlightController/Controller/Position & Altitude controller/PID_x/preSat Signal'
//  '<S384>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Anti-windup/Disc. Clamping Parallel'
//  '<S385>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S386>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S387>' : 'FlightController/Controller/Position & Altitude controller/PID_x/D Gain/Internal Parameters'
//  '<S388>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Filter/Disc. Forward Euler Filter'
//  '<S389>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Filter ICs/Internal IC - Filter'
//  '<S390>' : 'FlightController/Controller/Position & Altitude controller/PID_x/I Gain/Internal Parameters'
//  '<S391>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Ideal P Gain/Passthrough'
//  '<S392>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Ideal P Gain Fdbk/Disabled'
//  '<S393>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Integrator/Discrete'
//  '<S394>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Integrator ICs/Internal IC'
//  '<S395>' : 'FlightController/Controller/Position & Altitude controller/PID_x/N Copy/Disabled'
//  '<S396>' : 'FlightController/Controller/Position & Altitude controller/PID_x/N Gain/Internal Parameters'
//  '<S397>' : 'FlightController/Controller/Position & Altitude controller/PID_x/P Copy/Disabled'
//  '<S398>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Parallel P Gain/Internal Parameters'
//  '<S399>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Reset Signal/Disabled'
//  '<S400>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Saturation/Enabled'
//  '<S401>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Saturation Fdbk/Disabled'
//  '<S402>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Sum/Sum_PID'
//  '<S403>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Sum Fdbk/Disabled'
//  '<S404>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Tracking Mode/Disabled'
//  '<S405>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Tracking Mode Sum/Passthrough'
//  '<S406>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Tsamp - Integral/TsSignalSpecification'
//  '<S407>' : 'FlightController/Controller/Position & Altitude controller/PID_x/Tsamp - Ngain/Passthrough'
//  '<S408>' : 'FlightController/Controller/Position & Altitude controller/PID_x/postSat Signal/Forward_Path'
//  '<S409>' : 'FlightController/Controller/Position & Altitude controller/PID_x/preSat Signal/Forward_Path'
//  '<S410>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Anti-windup'
//  '<S411>' : 'FlightController/Controller/Position & Altitude controller/PID_y/D Gain'
//  '<S412>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Filter'
//  '<S413>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Filter ICs'
//  '<S414>' : 'FlightController/Controller/Position & Altitude controller/PID_y/I Gain'
//  '<S415>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Ideal P Gain'
//  '<S416>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Ideal P Gain Fdbk'
//  '<S417>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Integrator'
//  '<S418>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Integrator ICs'
//  '<S419>' : 'FlightController/Controller/Position & Altitude controller/PID_y/N Copy'
//  '<S420>' : 'FlightController/Controller/Position & Altitude controller/PID_y/N Gain'
//  '<S421>' : 'FlightController/Controller/Position & Altitude controller/PID_y/P Copy'
//  '<S422>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Parallel P Gain'
//  '<S423>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Reset Signal'
//  '<S424>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Saturation'
//  '<S425>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Saturation Fdbk'
//  '<S426>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Sum'
//  '<S427>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Sum Fdbk'
//  '<S428>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Tracking Mode'
//  '<S429>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Tracking Mode Sum'
//  '<S430>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Tsamp - Integral'
//  '<S431>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Tsamp - Ngain'
//  '<S432>' : 'FlightController/Controller/Position & Altitude controller/PID_y/postSat Signal'
//  '<S433>' : 'FlightController/Controller/Position & Altitude controller/PID_y/preSat Signal'
//  '<S434>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Anti-windup/Disc. Clamping Parallel'
//  '<S435>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S436>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S437>' : 'FlightController/Controller/Position & Altitude controller/PID_y/D Gain/Internal Parameters'
//  '<S438>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Filter/Disc. Forward Euler Filter'
//  '<S439>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Filter ICs/Internal IC - Filter'
//  '<S440>' : 'FlightController/Controller/Position & Altitude controller/PID_y/I Gain/Internal Parameters'
//  '<S441>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Ideal P Gain/Passthrough'
//  '<S442>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Ideal P Gain Fdbk/Disabled'
//  '<S443>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Integrator/Discrete'
//  '<S444>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Integrator ICs/Internal IC'
//  '<S445>' : 'FlightController/Controller/Position & Altitude controller/PID_y/N Copy/Disabled'
//  '<S446>' : 'FlightController/Controller/Position & Altitude controller/PID_y/N Gain/Internal Parameters'
//  '<S447>' : 'FlightController/Controller/Position & Altitude controller/PID_y/P Copy/Disabled'
//  '<S448>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Parallel P Gain/Internal Parameters'
//  '<S449>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Reset Signal/Disabled'
//  '<S450>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Saturation/Enabled'
//  '<S451>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Saturation Fdbk/Disabled'
//  '<S452>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Sum/Sum_PID'
//  '<S453>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Sum Fdbk/Disabled'
//  '<S454>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Tracking Mode/Disabled'
//  '<S455>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Tracking Mode Sum/Passthrough'
//  '<S456>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Tsamp - Integral/TsSignalSpecification'
//  '<S457>' : 'FlightController/Controller/Position & Altitude controller/PID_y/Tsamp - Ngain/Passthrough'
//  '<S458>' : 'FlightController/Controller/Position & Altitude controller/PID_y/postSat Signal/Forward_Path'
//  '<S459>' : 'FlightController/Controller/Position & Altitude controller/PID_y/preSat Signal/Forward_Path'
//  '<S460>' : 'FlightController/Signal Conditioning/XYZ from Vehicle Local Position'
//  '<S461>' : 'FlightController/Signal Conditioning/Y,P,R from Vehicle Attitude'
//  '<S462>' : 'FlightController/Signal Conditioning/dx,dy,dz from vehile_local_position'
//  '<S463>' : 'FlightController/Signal Conditioning/Y,P,R from Vehicle Attitude/Quaternions to Rotation Angles'
//  '<S464>' : 'FlightController/Signal Conditioning/Y,P,R from Vehicle Attitude/Quaternions to Rotation Angles/Angle Calculation'
//  '<S465>' : 'FlightController/Signal Conditioning/Y,P,R from Vehicle Attitude/Quaternions to Rotation Angles/Quaternion Normalize'
//  '<S466>' : 'FlightController/Signal Conditioning/Y,P,R from Vehicle Attitude/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
//  '<S467>' : 'FlightController/Signal Conditioning/Y,P,R from Vehicle Attitude/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
//  '<S468>' : 'FlightController/Signal Conditioning/Y,P,R from Vehicle Attitude/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
//  '<S469>' : 'FlightController/Signal Conditioning/Y,P,R from Vehicle Attitude/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
//  '<S470>' : 'FlightController/Signal Conditioning/Y,P,R from Vehicle Attitude/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
//  '<S471>' : 'FlightController/Signal Conditioning/Y,P,R from Vehicle Attitude/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'

#endif                                 // RTW_HEADER_FlightController_h_

//
// File trailer for generated code.
//
// [EOF]
//
