//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: FlightController.cpp
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
#include "FlightController.h"
#include "rtwtypes.h"
#include "FlightController_private.h"
#include <math.h>
#include "rt_atan2d_snf.h"

extern "C"
{

#include "rt_nonfinite.h"

}

P_FlightController_T FlightController_P_g = {
  // Mask Parameter: PID_x_D
  //  Referenced by: '<S387>/Derivative Gain'

  0.0,

  // Mask Parameter: PID_y_D
  //  Referenced by: '<S437>/Derivative Gain'

  0.0,

  // Mask Parameter: PID_vx_D
  //  Referenced by: '<S241>/Derivative Gain'

  0.0,

  // Mask Parameter: PID_vy_D
  //  Referenced by: '<S289>/Derivative Gain'

  0.0,

  // Mask Parameter: PID_pitch_D
  //  Referenced by: '<S38>/Derivative Gain'

  0.0145948093220339,

  // Mask Parameter: PID_roll_D
  //  Referenced by: '<S86>/Derivative Gain'

  0.015,

  // Mask Parameter: PID_yaw_D
  //  Referenced by: '<S136>/Derivative Gain'

  0.075,

  // Mask Parameter: PID_Altitude_D
  //  Referenced by: '<S193>/Derivative Gain'

  0.0,

  // Mask Parameter: PID_vz_D
  //  Referenced by: '<S337>/Derivative Gain'

  0.0,

  // Mask Parameter: PID_pitch_I
  //  Referenced by: '<S41>/Integral Gain'

  0.005,

  // Mask Parameter: PID_roll_I
  //  Referenced by: '<S89>/Integral Gain'

  0.005,

  // Mask Parameter: PID_yaw_I
  //  Referenced by: '<S139>/Integral Gain'

  0.0001,

  // Mask Parameter: PID_Altitude_I
  //  Referenced by: '<S196>/Integral Gain'

  0.01,

  // Mask Parameter: PID_vx_I
  //  Referenced by: '<S244>/Integral Gain'

  0.01,

  // Mask Parameter: PID_vy_I
  //  Referenced by: '<S292>/Integral Gain'

  0.01,

  // Mask Parameter: PID_vz_I
  //  Referenced by: '<S340>/Integral Gain'

  0.01,

  // Mask Parameter: PID_x_I
  //  Referenced by: '<S390>/Integral Gain'

  0.0,

  // Mask Parameter: PID_y_I
  //  Referenced by: '<S440>/Integral Gain'

  0.0,

  // Mask Parameter: PID_x_InitialConditionForFilter
  //  Referenced by: '<S388>/Filter'

  0.0,

  // Mask Parameter: PID_y_InitialConditionForFilter
  //  Referenced by: '<S438>/Filter'

  0.0,

  // Mask Parameter: PID_vx_InitialConditionForFilte
  //  Referenced by: '<S242>/Filter'

  0.0,

  // Mask Parameter: PID_vy_InitialConditionForFilte
  //  Referenced by: '<S290>/Filter'

  0.0,

  // Mask Parameter: PID_pitch_InitialConditionForFi
  //  Referenced by: '<S39>/Filter'

  0.0,

  // Mask Parameter: PID_roll_InitialConditionForFil
  //  Referenced by: '<S87>/Filter'

  0.0,

  // Mask Parameter: PID_yaw_InitialConditionForFilt
  //  Referenced by: '<S137>/Filter'

  0.0,

  // Mask Parameter: PID_Altitude_InitialConditionFo
  //  Referenced by: '<S194>/Filter'

  0.0,

  // Mask Parameter: PID_vz_InitialConditionForFilte
  //  Referenced by: '<S338>/Filter'

  0.0,

  // Mask Parameter: PID_x_InitialConditionForIntegr
  //  Referenced by: '<S393>/Integrator'

  0.0,

  // Mask Parameter: PID_y_InitialConditionForIntegr
  //  Referenced by: '<S443>/Integrator'

  0.0,

  // Mask Parameter: PID_vx_InitialConditionForInteg
  //  Referenced by: '<S247>/Integrator'

  0.0,

  // Mask Parameter: PID_vy_InitialConditionForInteg
  //  Referenced by: '<S295>/Integrator'

  0.0,

  // Mask Parameter: PID_pitch_InitialConditionForIn
  //  Referenced by: '<S44>/Integrator'

  0.0,

  // Mask Parameter: PID_roll_InitialConditionForInt
  //  Referenced by: '<S92>/Integrator'

  0.0,

  // Mask Parameter: PID_yaw_InitialConditionForInte
  //  Referenced by: '<S142>/Integrator'

  0.0,

  // Mask Parameter: PID_Altitude_InitialCondition_p
  //  Referenced by: '<S199>/Integrator'

  0.0,

  // Mask Parameter: PID_vz_InitialConditionForInteg
  //  Referenced by: '<S343>/Integrator'

  0.0,

  // Mask Parameter: PID_x_LowerSaturationLimit
  //  Referenced by:
  //    '<S400>/Saturation'
  //    '<S386>/DeadZone'

  -20.0,

  // Mask Parameter: PID_y_LowerSaturationLimit
  //  Referenced by:
  //    '<S450>/Saturation'
  //    '<S436>/DeadZone'

  -20.0,

  // Mask Parameter: PID_vx_LowerSaturationLimit
  //  Referenced by: '<S254>/Saturation'

  -50.0,

  // Mask Parameter: PID_vy_LowerSaturationLimit
  //  Referenced by: '<S302>/Saturation'

  -50.0,

  // Mask Parameter: PID_pitch_LowerSaturationLimit
  //  Referenced by: '<S51>/Saturation'

  -0.05,

  // Mask Parameter: PID_roll_LowerSaturationLimit
  //  Referenced by: '<S99>/Saturation'

  -0.05,

  // Mask Parameter: PID_yaw_LowerSaturationLimit
  //  Referenced by:
  //    '<S149>/Saturation'
  //    '<S135>/DeadZone'

  -0.01,

  // Mask Parameter: PID_Altitude_LowerSaturationLim
  //  Referenced by:
  //    '<S206>/Saturation'
  //    '<S192>/DeadZone'

  -10.0,

  // Mask Parameter: PID_vz_LowerSaturationLimit
  //  Referenced by: '<S350>/Saturation'

  0.0,

  // Mask Parameter: PID_x_N
  //  Referenced by: '<S396>/Filter Coefficient'

  1.0,

  // Mask Parameter: PID_y_N
  //  Referenced by: '<S446>/Filter Coefficient'

  1.0,

  // Mask Parameter: PID_vx_N
  //  Referenced by: '<S250>/Filter Coefficient'

  1.0,

  // Mask Parameter: PID_vy_N
  //  Referenced by: '<S298>/Filter Coefficient'

  1.0,

  // Mask Parameter: PID_pitch_N
  //  Referenced by: '<S47>/Filter Coefficient'

  50.0,

  // Mask Parameter: PID_roll_N
  //  Referenced by: '<S95>/Filter Coefficient'

  100.0,

  // Mask Parameter: PID_yaw_N
  //  Referenced by: '<S145>/Filter Coefficient'

  10.0,

  // Mask Parameter: PID_Altitude_N
  //  Referenced by: '<S202>/Filter Coefficient'

  1.0,

  // Mask Parameter: PID_vz_N
  //  Referenced by: '<S346>/Filter Coefficient'

  1.0,

  // Mask Parameter: PID_x_P
  //  Referenced by: '<S398>/Proportional Gain'

  0.85800438596491224,

  // Mask Parameter: PID_y_P
  //  Referenced by: '<S448>/Proportional Gain'

  0.85,

  // Mask Parameter: PID_vx_P
  //  Referenced by: '<S252>/Proportional Gain'

  4.0,

  // Mask Parameter: PID_vy_P
  //  Referenced by: '<S300>/Proportional Gain'

  4.0,

  // Mask Parameter: PID_pitch_P
  //  Referenced by: '<S49>/Proportional Gain'

  0.027,

  // Mask Parameter: PID_roll_P
  //  Referenced by: '<S97>/Proportional Gain'

  0.03,

  // Mask Parameter: PID_yaw_P
  //  Referenced by: '<S147>/Proportional Gain'

  0.005,

  // Mask Parameter: PID_Altitude_P
  //  Referenced by: '<S204>/Proportional Gain'

  2.0016934801016091,

  // Mask Parameter: PID_vz_P
  //  Referenced by: '<S348>/Proportional Gain'

  1.0,

  // Mask Parameter: PID_x_UpperSaturationLimit
  //  Referenced by:
  //    '<S400>/Saturation'
  //    '<S386>/DeadZone'

  20.0,

  // Mask Parameter: PID_y_UpperSaturationLimit
  //  Referenced by:
  //    '<S450>/Saturation'
  //    '<S436>/DeadZone'

  20.0,

  // Mask Parameter: PID_vx_UpperSaturationLimit
  //  Referenced by: '<S254>/Saturation'

  50.0,

  // Mask Parameter: PID_vy_UpperSaturationLimit
  //  Referenced by: '<S302>/Saturation'

  50.0,

  // Mask Parameter: PID_pitch_UpperSaturationLimit
  //  Referenced by: '<S51>/Saturation'

  0.05,

  // Mask Parameter: PID_roll_UpperSaturationLimit
  //  Referenced by: '<S99>/Saturation'

  0.05,

  // Mask Parameter: PID_yaw_UpperSaturationLimit
  //  Referenced by:
  //    '<S149>/Saturation'
  //    '<S135>/DeadZone'

  0.01,

  // Mask Parameter: PID_Altitude_UpperSaturationLim
  //  Referenced by:
  //    '<S206>/Saturation'
  //    '<S192>/DeadZone'

  10.0,

  // Mask Parameter: PID_vz_UpperSaturationLimit
  //  Referenced by: '<S350>/Saturation'

  1.0,

  // Expression: 1
  //  Referenced by: '<S467>/Constant'

  1.0,

  // Expression: 1
  //  Referenced by: '<S468>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S133>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S190>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S384>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S434>/Constant1'

  0.0,

  // Expression: pi/180
  //  Referenced by: '<S7>/Gain1'

  0.017453292519943295,

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S393>/Integrator'

  0.008,

  // Computed Parameter: Filter_gainval
  //  Referenced by: '<S388>/Filter'

  0.008,

  // Computed Parameter: Integrator_gainval_n
  //  Referenced by: '<S443>/Integrator'

  0.008,

  // Computed Parameter: Filter_gainval_i
  //  Referenced by: '<S438>/Filter'

  0.008,

  // Computed Parameter: Integrator_gainval_j
  //  Referenced by: '<S247>/Integrator'

  0.008,

  // Computed Parameter: Filter_gainval_l
  //  Referenced by: '<S242>/Filter'

  0.008,

  // Expression: pi/180
  //  Referenced by: '<S8>/Gain1'

  0.017453292519943295,

  // Computed Parameter: Integrator_gainval_o
  //  Referenced by: '<S295>/Integrator'

  0.008,

  // Computed Parameter: Filter_gainval_j
  //  Referenced by: '<S290>/Filter'

  0.008,

  // Expression: -1
  //  Referenced by: '<S5>/Gain'

  -1.0,

  // Expression: pi/180
  //  Referenced by: '<S9>/Gain1'

  0.017453292519943295,

  // Computed Parameter: Filter_gainval_a
  //  Referenced by: '<S39>/Filter'

  0.008,

  // Computed Parameter: Integrator_gainval_p
  //  Referenced by: '<S44>/Integrator'

  0.008,

  // Computed Parameter: Filter_gainval_k
  //  Referenced by: '<S87>/Filter'

  0.008,

  // Computed Parameter: Integrator_gainval_b
  //  Referenced by: '<S92>/Integrator'

  0.008,

  // Expression: 0
  //  Referenced by: '<S133>/Clamping_zero'

  0.0,

  // Computed Parameter: Filter_gainval_jn
  //  Referenced by: '<S137>/Filter'

  0.008,

  // Computed Parameter: Integrator_gainval_oi
  //  Referenced by: '<S142>/Integrator'

  0.008,

  // Expression: 0
  //  Referenced by: '<S190>/Clamping_zero'

  0.0,

  // Computed Parameter: Filter_gainval_iw
  //  Referenced by: '<S194>/Filter'

  0.008,

  // Computed Parameter: Integrator_gainval_jh
  //  Referenced by: '<S199>/Integrator'

  0.008,

  // Computed Parameter: Filter_gainval_at
  //  Referenced by: '<S338>/Filter'

  0.008,

  // Computed Parameter: Integrator_gainval_a
  //  Referenced by: '<S343>/Integrator'

  0.008,

  // Expression: 0
  //  Referenced by: '<S384>/Clamping_zero'

  0.0,

  // Expression: 0
  //  Referenced by: '<S434>/Clamping_zero'

  0.0,

  // Expression: [1 -1 1 1;1 1 -1 1;1 -1 -1 -1;1 1 1 -1]
  //  Referenced by: '<S6>/Mixer matrix'

  { 1.0, 1.0, 1.0, 1.0, -1.0, 1.0, -1.0, 1.0, 1.0, -1.0, -1.0, 1.0, 1.0, 1.0,
    -1.0, -1.0 },

  // Expression: 1
  //  Referenced by: '<S6>/Saturation'

  1.0,

  // Expression: 0
  //  Referenced by: '<S6>/Saturation'

  0.0,

  // Expression: 1000
  //  Referenced by: '<S2>/Constant'

  1000.0,

  // Expression: 1000
  //  Referenced by: '<S2>/Gain'

  1000.0,

  // Computed Parameter: Constant_Value_e
  //  Referenced by: '<Root>/Constant'

  true,

  // Computed Parameter: Constant_Value_l
  //  Referenced by: '<S133>/Constant'

  1,

  // Computed Parameter: Constant2_Value
  //  Referenced by: '<S133>/Constant2'

  -1,

  // Computed Parameter: Constant3_Value
  //  Referenced by: '<S133>/Constant3'

  1,

  // Computed Parameter: Constant4_Value
  //  Referenced by: '<S133>/Constant4'

  -1,

  // Computed Parameter: Constant_Value_c
  //  Referenced by: '<S190>/Constant'

  1,

  // Computed Parameter: Constant2_Value_h
  //  Referenced by: '<S190>/Constant2'

  -1,

  // Computed Parameter: Constant3_Value_f
  //  Referenced by: '<S190>/Constant3'

  1,

  // Computed Parameter: Constant4_Value_h
  //  Referenced by: '<S190>/Constant4'

  -1,

  // Computed Parameter: Constant_Value_j
  //  Referenced by: '<S384>/Constant'

  1,

  // Computed Parameter: Constant2_Value_o
  //  Referenced by: '<S384>/Constant2'

  -1,

  // Computed Parameter: Constant3_Value_p
  //  Referenced by: '<S384>/Constant3'

  1,

  // Computed Parameter: Constant4_Value_c
  //  Referenced by: '<S384>/Constant4'

  -1,

  // Computed Parameter: Constant_Value_l0
  //  Referenced by: '<S434>/Constant'

  1,

  // Computed Parameter: Constant2_Value_n
  //  Referenced by: '<S434>/Constant2'

  -1,

  // Computed Parameter: Constant3_Value_c
  //  Referenced by: '<S434>/Constant3'

  1,

  // Computed Parameter: Constant4_Value_i
  //  Referenced by: '<S434>/Constant4'

  -1
};

MdlrefDW_FlightController_T FlightController_MdlrefDW;

// Block signals (default storage)
B_FlightController_c_T FlightController_B;

// Block states (default storage)
DW_FlightController_f_T FlightController_DW;

// System initialize for referenced model: 'FlightController'
void FlightController_Init(boolean_T *rty_Arming)
{
  // Start for Constant: '<Root>/Constant'
  *rty_Arming = FlightController_P_g.Constant_Value_e;

  // InitializeConditions for DiscreteIntegrator: '<S393>/Integrator'
  FlightController_DW.Integrator_DSTATE =
    FlightController_P_g.PID_x_InitialConditionForIntegr;

  // InitializeConditions for DiscreteIntegrator: '<S388>/Filter'
  FlightController_DW.Filter_DSTATE =
    FlightController_P_g.PID_x_InitialConditionForFilter;

  // InitializeConditions for DiscreteIntegrator: '<S443>/Integrator'
  FlightController_DW.Integrator_DSTATE_n =
    FlightController_P_g.PID_y_InitialConditionForIntegr;

  // InitializeConditions for DiscreteIntegrator: '<S438>/Filter'
  FlightController_DW.Filter_DSTATE_c =
    FlightController_P_g.PID_y_InitialConditionForFilter;

  // InitializeConditions for DiscreteIntegrator: '<S247>/Integrator'
  FlightController_DW.Integrator_DSTATE_b =
    FlightController_P_g.PID_vx_InitialConditionForInteg;

  // InitializeConditions for DiscreteIntegrator: '<S242>/Filter'
  FlightController_DW.Filter_DSTATE_a =
    FlightController_P_g.PID_vx_InitialConditionForFilte;

  // InitializeConditions for DiscreteIntegrator: '<S295>/Integrator'
  FlightController_DW.Integrator_DSTATE_p =
    FlightController_P_g.PID_vy_InitialConditionForInteg;

  // InitializeConditions for DiscreteIntegrator: '<S290>/Filter'
  FlightController_DW.Filter_DSTATE_l =
    FlightController_P_g.PID_vy_InitialConditionForFilte;

  // InitializeConditions for DiscreteIntegrator: '<S39>/Filter'
  FlightController_DW.Filter_DSTATE_i =
    FlightController_P_g.PID_pitch_InitialConditionForFi;

  // InitializeConditions for DiscreteIntegrator: '<S44>/Integrator'
  FlightController_DW.Integrator_DSTATE_c =
    FlightController_P_g.PID_pitch_InitialConditionForIn;

  // InitializeConditions for DiscreteIntegrator: '<S87>/Filter'
  FlightController_DW.Filter_DSTATE_d =
    FlightController_P_g.PID_roll_InitialConditionForFil;

  // InitializeConditions for DiscreteIntegrator: '<S92>/Integrator'
  FlightController_DW.Integrator_DSTATE_m =
    FlightController_P_g.PID_roll_InitialConditionForInt;

  // InitializeConditions for DiscreteIntegrator: '<S137>/Filter'
  FlightController_DW.Filter_DSTATE_ag =
    FlightController_P_g.PID_yaw_InitialConditionForFilt;

  // InitializeConditions for DiscreteIntegrator: '<S142>/Integrator'
  FlightController_DW.Integrator_DSTATE_pm =
    FlightController_P_g.PID_yaw_InitialConditionForInte;

  // InitializeConditions for DiscreteIntegrator: '<S194>/Filter'
  FlightController_DW.Filter_DSTATE_g =
    FlightController_P_g.PID_Altitude_InitialConditionFo;

  // InitializeConditions for DiscreteIntegrator: '<S199>/Integrator'
  FlightController_DW.Integrator_DSTATE_i =
    FlightController_P_g.PID_Altitude_InitialCondition_p;

  // InitializeConditions for DiscreteIntegrator: '<S338>/Filter'
  FlightController_DW.Filter_DSTATE_e =
    FlightController_P_g.PID_vz_InitialConditionForFilte;

  // InitializeConditions for DiscreteIntegrator: '<S343>/Integrator'
  FlightController_DW.Integrator_DSTATE_pj =
    FlightController_P_g.PID_vz_InitialConditionForInteg;
}

// Output and update for referenced model: 'FlightController'
void FlightController(const real_T rtu_Des_command[4], const real32_T
                      *rtu_uorb_vehicle_local_position, const real32_T
                      *rtu_uorb_vehicle_local_positi_c, const real32_T
                      *rtu_uorb_vehicle_local_positi_e, const real32_T
                      *rtu_uorb_vehicle_local_positi_n, const real32_T
                      *rtu_uorb_vehicle_local_positi_f, const real32_T
                      *rtu_uorb_vehicle_local_positi_k, const real32_T
                      rtu_uorb_vehicle_attitude_q[4], boolean_T *rty_Arming,
                      uint16_T rty_Actuators[4])
{
  real_T rtb_DataTypeConversion_k_idx_0;
  real_T rtb_DataTypeConversion_k_idx_1;
  real_T rtb_DataTypeConversion_k_idx_2;
  real_T rtb_DataTypeConversion_p_idx_2;
  real_T rtb_VectorConcatenate_idx_0;
  real_T rtb_VectorConcatenate_idx_2;
  int32_T i;
  int8_T tmp;
  int8_T tmp_0;

  // Constant: '<Root>/Constant'
  *rty_Arming = FlightController_P_g.Constant_Value_e;

  // Sqrt: '<S470>/sqrt' incorporates:
  //   DataTypeConversion: '<S461>/Data Type Conversion1'
  //   Product: '<S471>/Product'
  //   Product: '<S471>/Product1'
  //   Product: '<S471>/Product2'
  //   Product: '<S471>/Product3'
  //   Sum: '<S471>/Sum'

  FlightController_B.IntegralGain_jd = sqrt(((static_cast<real_T>
    (rtu_uorb_vehicle_attitude_q[0]) * static_cast<real_T>
    (rtu_uorb_vehicle_attitude_q[0]) + static_cast<real_T>
    (rtu_uorb_vehicle_attitude_q[1]) * static_cast<real_T>
    (rtu_uorb_vehicle_attitude_q[1])) + static_cast<real_T>
    (rtu_uorb_vehicle_attitude_q[2]) * static_cast<real_T>
    (rtu_uorb_vehicle_attitude_q[2])) + static_cast<real_T>
    (rtu_uorb_vehicle_attitude_q[3]) * static_cast<real_T>
    (rtu_uorb_vehicle_attitude_q[3]));

  // Product: '<S465>/Product' incorporates:
  //   DataTypeConversion: '<S461>/Data Type Conversion1'

  FlightController_B.Filter_m = static_cast<real_T>(rtu_uorb_vehicle_attitude_q
    [0]) / FlightController_B.IntegralGain_jd;

  // Product: '<S465>/Product1' incorporates:
  //   DataTypeConversion: '<S461>/Data Type Conversion1'

  FlightController_B.DeadZone_o = static_cast<real_T>
    (rtu_uorb_vehicle_attitude_q[1]) / FlightController_B.IntegralGain_jd;

  // Product: '<S465>/Product2' incorporates:
  //   DataTypeConversion: '<S461>/Data Type Conversion1'

  FlightController_B.Integrator_g = static_cast<real_T>
    (rtu_uorb_vehicle_attitude_q[2]) / FlightController_B.IntegralGain_jd;

  // Product: '<S465>/Product3' incorporates:
  //   DataTypeConversion: '<S461>/Data Type Conversion1'

  FlightController_B.IntegralGain_jd = static_cast<real_T>
    (rtu_uorb_vehicle_attitude_q[3]) / FlightController_B.IntegralGain_jd;

  // Fcn: '<S463>/fcn2' incorporates:
  //   Fcn: '<S463>/fcn5'

  FlightController_B.FilterCoefficient_o = FlightController_B.Filter_m *
    FlightController_B.Filter_m;
  FlightController_B.DeadZone = FlightController_B.DeadZone_o *
    FlightController_B.DeadZone_o;
  FlightController_B.vz_error = FlightController_B.Integrator_g *
    FlightController_B.Integrator_g;
  rtb_DataTypeConversion_p_idx_2 = FlightController_B.IntegralGain_jd *
    FlightController_B.IntegralGain_jd;

  // Trigonometry: '<S464>/Trigonometric Function1' incorporates:
  //   Fcn: '<S463>/fcn1'
  //   Fcn: '<S463>/fcn2'

  rtb_VectorConcatenate_idx_0 = rt_atan2d_snf((FlightController_B.DeadZone_o *
    FlightController_B.Integrator_g + FlightController_B.Filter_m *
    FlightController_B.IntegralGain_jd) * 2.0,
    ((FlightController_B.FilterCoefficient_o + FlightController_B.DeadZone) -
     FlightController_B.vz_error) - rtb_DataTypeConversion_p_idx_2);

  // Fcn: '<S463>/fcn3'
  FlightController_B.fcn3 = (FlightController_B.DeadZone_o *
    FlightController_B.IntegralGain_jd - FlightController_B.Filter_m *
    FlightController_B.Integrator_g) * -2.0;

  // Trigonometry: '<S464>/Trigonometric Function3' incorporates:
  //   Fcn: '<S463>/fcn4'
  //   Fcn: '<S463>/fcn5'

  rtb_VectorConcatenate_idx_2 = rt_atan2d_snf((FlightController_B.Integrator_g *
    FlightController_B.IntegralGain_jd + FlightController_B.Filter_m *
    FlightController_B.DeadZone_o) * 2.0,
    ((FlightController_B.FilterCoefficient_o - FlightController_B.DeadZone) -
     FlightController_B.vz_error) + rtb_DataTypeConversion_p_idx_2);

  // Sum: '<S4>/Add1' incorporates:
  //   Gain: '<S7>/Gain1'

  FlightController_B.vz_error = FlightController_P_g.Gain1_Gain *
    rtu_Des_command[3] - rtb_VectorConcatenate_idx_0;

  // DataTypeConversion: '<S460>/Data Type Conversion'
  FlightController_B.DeadZone_o = static_cast<real_T>
    (*rtu_uorb_vehicle_local_position);
  FlightController_B.IntegralGain_jd = static_cast<real_T>
    (*rtu_uorb_vehicle_local_positi_c);
  rtb_DataTypeConversion_p_idx_2 = static_cast<real_T>
    (*rtu_uorb_vehicle_local_positi_e);

  // Sum: '<S5>/Subtract1'
  FlightController_B.Filter_m = rtu_Des_command[0] -
    FlightController_B.DeadZone_o;

  // Gain: '<S396>/Filter Coefficient' incorporates:
  //   DiscreteIntegrator: '<S388>/Filter'
  //   Gain: '<S387>/Derivative Gain'
  //   Sum: '<S388>/SumD'

  FlightController_B.Integrator_g = (FlightController_P_g.PID_x_D *
    FlightController_B.Filter_m - FlightController_DW.Filter_DSTATE) *
    FlightController_P_g.PID_x_N;

  // Sum: '<S402>/Sum' incorporates:
  //   DiscreteIntegrator: '<S393>/Integrator'
  //   Gain: '<S398>/Proportional Gain'

  FlightController_B.DeadZone_o = (FlightController_P_g.PID_x_P *
    FlightController_B.Filter_m + FlightController_DW.Integrator_DSTATE) +
    FlightController_B.Integrator_g;

  // Sum: '<S5>/Subtract2'
  FlightController_B.IntegralGain_jd = rtu_Des_command[1] -
    FlightController_B.IntegralGain_jd;

  // Gain: '<S446>/Filter Coefficient' incorporates:
  //   DiscreteIntegrator: '<S438>/Filter'
  //   Gain: '<S437>/Derivative Gain'
  //   Sum: '<S438>/SumD'

  FlightController_B.FilterCoefficient_o = (FlightController_P_g.PID_y_D *
    FlightController_B.IntegralGain_jd - FlightController_DW.Filter_DSTATE_c) *
    FlightController_P_g.PID_y_N;

  // Sum: '<S452>/Sum' incorporates:
  //   DiscreteIntegrator: '<S443>/Integrator'
  //   Gain: '<S448>/Proportional Gain'

  FlightController_B.DeadZone = (FlightController_P_g.PID_y_P *
    FlightController_B.IntegralGain_jd + FlightController_DW.Integrator_DSTATE_n)
    + FlightController_B.FilterCoefficient_o;

  // DataTypeConversion: '<S462>/Data Type Conversion'
  rtb_DataTypeConversion_k_idx_0 = static_cast<real_T>
    (*rtu_uorb_vehicle_local_positi_n);
  rtb_DataTypeConversion_k_idx_1 = static_cast<real_T>
    (*rtu_uorb_vehicle_local_positi_f);
  rtb_DataTypeConversion_k_idx_2 = static_cast<real_T>
    (*rtu_uorb_vehicle_local_positi_k);

  // MATLAB Function: '<S5>/Rotation mat '
  FlightController_B.Saturation_n = sin(rtb_VectorConcatenate_idx_0);
  FlightController_B.FilterCoefficient_cs = cos(rtb_VectorConcatenate_idx_0);

  // Saturate: '<S400>/Saturation'
  if (FlightController_B.DeadZone_o >
      FlightController_P_g.PID_x_UpperSaturationLimit) {
    FlightController_B.Saturation_i =
      FlightController_P_g.PID_x_UpperSaturationLimit;
  } else if (FlightController_B.DeadZone_o <
             FlightController_P_g.PID_x_LowerSaturationLimit) {
    FlightController_B.Saturation_i =
      FlightController_P_g.PID_x_LowerSaturationLimit;
  } else {
    FlightController_B.Saturation_i = FlightController_B.DeadZone_o;
  }

  // Sum: '<S5>/Subtract' incorporates:
  //   Saturate: '<S400>/Saturation'

  rtb_DataTypeConversion_k_idx_0 -= FlightController_B.Saturation_i;

  // Saturate: '<S450>/Saturation'
  if (FlightController_B.DeadZone >
      FlightController_P_g.PID_y_UpperSaturationLimit) {
    FlightController_B.Saturation_i =
      FlightController_P_g.PID_y_UpperSaturationLimit;
  } else if (FlightController_B.DeadZone <
             FlightController_P_g.PID_y_LowerSaturationLimit) {
    FlightController_B.Saturation_i =
      FlightController_P_g.PID_y_LowerSaturationLimit;
  } else {
    FlightController_B.Saturation_i = FlightController_B.DeadZone;
  }

  // Sum: '<S5>/Subtract' incorporates:
  //   Saturate: '<S450>/Saturation'

  rtb_DataTypeConversion_k_idx_1 -= FlightController_B.Saturation_i;

  // Product: '<S5>/MatrixMultiply' incorporates:
  //   MATLAB Function: '<S5>/Rotation mat '

  rtb_VectorConcatenate_idx_0 = FlightController_B.FilterCoefficient_cs *
    rtb_DataTypeConversion_k_idx_0 + FlightController_B.Saturation_n *
    rtb_DataTypeConversion_k_idx_1;
  rtb_DataTypeConversion_k_idx_0 = -FlightController_B.Saturation_n *
    rtb_DataTypeConversion_k_idx_0 + FlightController_B.FilterCoefficient_cs *
    rtb_DataTypeConversion_k_idx_1;

  // Gain: '<S250>/Filter Coefficient' incorporates:
  //   DiscreteIntegrator: '<S242>/Filter'
  //   Gain: '<S241>/Derivative Gain'
  //   Product: '<S5>/MatrixMultiply'
  //   Sum: '<S242>/SumD'

  rtb_DataTypeConversion_k_idx_1 = (FlightController_P_g.PID_vx_D *
    rtb_VectorConcatenate_idx_0 - FlightController_DW.Filter_DSTATE_a) *
    FlightController_P_g.PID_vx_N;

  // If: '<S466>/If' incorporates:
  //   Constant: '<S467>/Constant'
  //   Constant: '<S468>/Constant'

  if (FlightController_B.fcn3 > 1.0) {
    FlightController_B.fcn3 = FlightController_P_g.Constant_Value;
  } else if (FlightController_B.fcn3 < -1.0) {
    FlightController_B.fcn3 = FlightController_P_g.Constant_Value_p;
  }

  // Sum: '<S256>/Sum' incorporates:
  //   DiscreteIntegrator: '<S247>/Integrator'
  //   Gain: '<S252>/Proportional Gain'
  //   Product: '<S5>/MatrixMultiply'

  FlightController_B.Saturation_n = (FlightController_P_g.PID_vx_P *
    rtb_VectorConcatenate_idx_0 + FlightController_DW.Integrator_DSTATE_b) +
    rtb_DataTypeConversion_k_idx_1;

  // If: '<S466>/If' incorporates:
  //   Trigonometry: '<S464>/trigFcn'

  if (FlightController_B.fcn3 > 1.0) {
    FlightController_B.fcn3 = 1.0;
  } else if (FlightController_B.fcn3 < -1.0) {
    FlightController_B.fcn3 = -1.0;
  }

  // Saturate: '<S254>/Saturation'
  if (FlightController_B.Saturation_n >
      FlightController_P_g.PID_vx_UpperSaturationLimit) {
    FlightController_B.Saturation_n =
      FlightController_P_g.PID_vx_UpperSaturationLimit;
  } else if (FlightController_B.Saturation_n <
             FlightController_P_g.PID_vx_LowerSaturationLimit) {
    FlightController_B.Saturation_n =
      FlightController_P_g.PID_vx_LowerSaturationLimit;
  }

  // Sum: '<S4>/Add2' incorporates:
  //   Gain: '<S8>/Gain1'
  //   Saturate: '<S254>/Saturation'
  //   Trigonometry: '<S464>/trigFcn'

  FlightController_B.Saturation_e = asin(FlightController_B.fcn3) -
    FlightController_P_g.Gain1_Gain_l * FlightController_B.Saturation_n;

  // Gain: '<S298>/Filter Coefficient' incorporates:
  //   DiscreteIntegrator: '<S290>/Filter'
  //   Gain: '<S289>/Derivative Gain'
  //   Product: '<S5>/MatrixMultiply'
  //   Sum: '<S290>/SumD'

  FlightController_B.fcn3 = (FlightController_P_g.PID_vy_D *
    rtb_DataTypeConversion_k_idx_0 - FlightController_DW.Filter_DSTATE_l) *
    FlightController_P_g.PID_vy_N;

  // Sum: '<S304>/Sum' incorporates:
  //   DiscreteIntegrator: '<S295>/Integrator'
  //   Gain: '<S300>/Proportional Gain'
  //   Product: '<S5>/MatrixMultiply'

  FlightController_B.Saturation_n = (FlightController_P_g.PID_vy_P *
    rtb_DataTypeConversion_k_idx_0 + FlightController_DW.Integrator_DSTATE_p) +
    FlightController_B.fcn3;

  // Saturate: '<S302>/Saturation'
  if (FlightController_B.Saturation_n >
      FlightController_P_g.PID_vy_UpperSaturationLimit) {
    FlightController_B.Saturation_n =
      FlightController_P_g.PID_vy_UpperSaturationLimit;
  } else if (FlightController_B.Saturation_n <
             FlightController_P_g.PID_vy_LowerSaturationLimit) {
    FlightController_B.Saturation_n =
      FlightController_P_g.PID_vy_LowerSaturationLimit;
  }

  // Sum: '<S4>/Add3' incorporates:
  //   Gain: '<S5>/Gain'
  //   Gain: '<S9>/Gain1'
  //   Saturate: '<S302>/Saturation'

  FlightController_B.Saturation_h = rtb_VectorConcatenate_idx_2 -
    FlightController_P_g.Gain_Gain * FlightController_B.Saturation_n *
    FlightController_P_g.Gain1_Gain_d;

  // DiscreteIntegrator: '<S44>/Integrator' incorporates:
  //   Gain: '<S41>/Integral Gain'

  FlightController_DW.Integrator_DSTATE_c += FlightController_P_g.PID_pitch_I *
    FlightController_B.Saturation_e * FlightController_P_g.Integrator_gainval_p;

  // Gain: '<S47>/Filter Coefficient' incorporates:
  //   DiscreteIntegrator: '<S39>/Filter'
  //   Gain: '<S38>/Derivative Gain'
  //   Sum: '<S39>/SumD'

  rtb_VectorConcatenate_idx_2 = (FlightController_P_g.PID_pitch_D *
    FlightController_B.Saturation_e - FlightController_DW.Filter_DSTATE_i) *
    FlightController_P_g.PID_pitch_N;

  // DiscreteIntegrator: '<S92>/Integrator' incorporates:
  //   Gain: '<S89>/Integral Gain'

  FlightController_DW.Integrator_DSTATE_m += FlightController_P_g.PID_roll_I *
    FlightController_B.Saturation_h * FlightController_P_g.Integrator_gainval_b;

  // Gain: '<S95>/Filter Coefficient' incorporates:
  //   DiscreteIntegrator: '<S87>/Filter'
  //   Gain: '<S86>/Derivative Gain'
  //   Sum: '<S87>/SumD'

  FlightController_B.FilterCoefficient_cs = (FlightController_P_g.PID_roll_D *
    FlightController_B.Saturation_h - FlightController_DW.Filter_DSTATE_d) *
    FlightController_P_g.PID_roll_N;

  // Gain: '<S147>/Proportional Gain'
  FlightController_B.Saturation_i = FlightController_P_g.PID_yaw_P *
    FlightController_B.vz_error;

  // Gain: '<S145>/Filter Coefficient' incorporates:
  //   DiscreteIntegrator: '<S137>/Filter'
  //   Gain: '<S136>/Derivative Gain'
  //   Sum: '<S137>/SumD'

  FlightController_B.FilterCoefficient_j = (FlightController_P_g.PID_yaw_D *
    FlightController_B.vz_error - FlightController_DW.Filter_DSTATE_ag) *
    FlightController_P_g.PID_yaw_N;

  // Sum: '<S152>/Sum Fdbk'
  FlightController_B.Saturation_n = (FlightController_B.Saturation_i +
    FlightController_DW.Integrator_DSTATE_pm) +
    FlightController_B.FilterCoefficient_j;

  // DeadZone: '<S135>/DeadZone'
  if (FlightController_B.Saturation_n >
      FlightController_P_g.PID_yaw_UpperSaturationLimit) {
    FlightController_B.Saturation_n -=
      FlightController_P_g.PID_yaw_UpperSaturationLimit;
  } else if (FlightController_B.Saturation_n >=
             FlightController_P_g.PID_yaw_LowerSaturationLimit) {
    FlightController_B.Saturation_n = 0.0;
  } else {
    FlightController_B.Saturation_n -=
      FlightController_P_g.PID_yaw_LowerSaturationLimit;
  }

  // End of DeadZone: '<S135>/DeadZone'

  // Gain: '<S139>/Integral Gain'
  FlightController_B.vz_error *= FlightController_P_g.PID_yaw_I;

  // Switch: '<S133>/Switch1' incorporates:
  //   Constant: '<S133>/Clamping_zero'
  //   Constant: '<S133>/Constant'
  //   Constant: '<S133>/Constant2'
  //   RelationalOperator: '<S133>/fix for DT propagation issue'

  if (FlightController_B.Saturation_n > FlightController_P_g.Clamping_zero_Value)
  {
    tmp = FlightController_P_g.Constant_Value_l;
  } else {
    tmp = FlightController_P_g.Constant2_Value;
  }

  // Switch: '<S133>/Switch2' incorporates:
  //   Constant: '<S133>/Clamping_zero'
  //   Constant: '<S133>/Constant3'
  //   Constant: '<S133>/Constant4'
  //   RelationalOperator: '<S133>/fix for DT propagation issue1'

  if (FlightController_B.vz_error > FlightController_P_g.Clamping_zero_Value) {
    tmp_0 = FlightController_P_g.Constant3_Value;
  } else {
    tmp_0 = FlightController_P_g.Constant4_Value;
  }

  // Switch: '<S133>/Switch' incorporates:
  //   Constant: '<S133>/Clamping_zero'
  //   Constant: '<S133>/Constant1'
  //   Logic: '<S133>/AND3'
  //   RelationalOperator: '<S133>/Equal1'
  //   RelationalOperator: '<S133>/Relational Operator'
  //   Switch: '<S133>/Switch1'
  //   Switch: '<S133>/Switch2'

  if ((FlightController_P_g.Clamping_zero_Value !=
       FlightController_B.Saturation_n) && (static_cast<int32_T>(tmp) ==
       static_cast<int32_T>(tmp_0))) {
    FlightController_B.vz_error = FlightController_P_g.Constant1_Value;
  }

  // DiscreteIntegrator: '<S142>/Integrator' incorporates:
  //   Switch: '<S133>/Switch'

  FlightController_DW.Integrator_DSTATE_pm +=
    FlightController_P_g.Integrator_gainval_oi * FlightController_B.vz_error;

  // Sum: '<S5>/Add'
  FlightController_B.Saturation_n = rtu_Des_command[2] -
    rtb_DataTypeConversion_p_idx_2;

  // Gain: '<S204>/Proportional Gain'
  FlightController_B.vz_error = FlightController_P_g.PID_Altitude_P *
    FlightController_B.Saturation_n;

  // Gain: '<S202>/Filter Coefficient' incorporates:
  //   DiscreteIntegrator: '<S194>/Filter'
  //   Gain: '<S193>/Derivative Gain'
  //   Sum: '<S194>/SumD'

  rtb_DataTypeConversion_p_idx_2 = (FlightController_P_g.PID_Altitude_D *
    FlightController_B.Saturation_n - FlightController_DW.Filter_DSTATE_g) *
    FlightController_P_g.PID_Altitude_N;

  // Sum: '<S209>/Sum Fdbk'
  FlightController_B.Filter_e0 = (FlightController_B.vz_error +
    FlightController_DW.Integrator_DSTATE_i) + rtb_DataTypeConversion_p_idx_2;

  // DeadZone: '<S192>/DeadZone'
  if (FlightController_B.Filter_e0 >
      FlightController_P_g.PID_Altitude_UpperSaturationLim) {
    FlightController_B.Filter_e0 -=
      FlightController_P_g.PID_Altitude_UpperSaturationLim;
  } else if (FlightController_B.Filter_e0 >=
             FlightController_P_g.PID_Altitude_LowerSaturationLim) {
    FlightController_B.Filter_e0 = 0.0;
  } else {
    FlightController_B.Filter_e0 -=
      FlightController_P_g.PID_Altitude_LowerSaturationLim;
  }

  // End of DeadZone: '<S192>/DeadZone'

  // Gain: '<S196>/Integral Gain'
  FlightController_B.Saturation_n *= FlightController_P_g.PID_Altitude_I;

  // Switch: '<S190>/Switch1' incorporates:
  //   Constant: '<S190>/Clamping_zero'
  //   Constant: '<S190>/Constant'
  //   Constant: '<S190>/Constant2'
  //   RelationalOperator: '<S190>/fix for DT propagation issue'

  if (FlightController_B.Filter_e0 > FlightController_P_g.Clamping_zero_Value_l)
  {
    tmp = FlightController_P_g.Constant_Value_c;
  } else {
    tmp = FlightController_P_g.Constant2_Value_h;
  }

  // Switch: '<S190>/Switch2' incorporates:
  //   Constant: '<S190>/Clamping_zero'
  //   Constant: '<S190>/Constant3'
  //   Constant: '<S190>/Constant4'
  //   RelationalOperator: '<S190>/fix for DT propagation issue1'

  if (FlightController_B.Saturation_n >
      FlightController_P_g.Clamping_zero_Value_l) {
    tmp_0 = FlightController_P_g.Constant3_Value_f;
  } else {
    tmp_0 = FlightController_P_g.Constant4_Value_h;
  }

  // Switch: '<S190>/Switch' incorporates:
  //   Constant: '<S190>/Clamping_zero'
  //   Constant: '<S190>/Constant1'
  //   Logic: '<S190>/AND3'
  //   RelationalOperator: '<S190>/Equal1'
  //   RelationalOperator: '<S190>/Relational Operator'
  //   Switch: '<S190>/Switch1'
  //   Switch: '<S190>/Switch2'

  if ((FlightController_P_g.Clamping_zero_Value_l !=
       FlightController_B.Filter_e0) && (static_cast<int32_T>(tmp) ==
       static_cast<int32_T>(tmp_0))) {
    FlightController_B.Saturation_n = FlightController_P_g.Constant1_Value_n;
  }

  // DiscreteIntegrator: '<S199>/Integrator' incorporates:
  //   Switch: '<S190>/Switch'

  FlightController_DW.Integrator_DSTATE_i +=
    FlightController_P_g.Integrator_gainval_jh * FlightController_B.Saturation_n;

  // Sum: '<S208>/Sum'
  FlightController_B.Saturation_n = (FlightController_B.vz_error +
    FlightController_DW.Integrator_DSTATE_i) + rtb_DataTypeConversion_p_idx_2;

  // Saturate: '<S206>/Saturation'
  if (FlightController_B.Saturation_n >
      FlightController_P_g.PID_Altitude_UpperSaturationLim) {
    FlightController_B.Saturation_n =
      FlightController_P_g.PID_Altitude_UpperSaturationLim;
  } else if (FlightController_B.Saturation_n <
             FlightController_P_g.PID_Altitude_LowerSaturationLim) {
    FlightController_B.Saturation_n =
      FlightController_P_g.PID_Altitude_LowerSaturationLim;
  }

  // Sum: '<S5>/Add1' incorporates:
  //   Saturate: '<S206>/Saturation'

  FlightController_B.vz_error = rtb_DataTypeConversion_k_idx_2 -
    FlightController_B.Saturation_n;

  // DiscreteIntegrator: '<S343>/Integrator' incorporates:
  //   Gain: '<S340>/Integral Gain'

  FlightController_DW.Integrator_DSTATE_pj += FlightController_P_g.PID_vz_I *
    FlightController_B.vz_error * FlightController_P_g.Integrator_gainval_a;

  // Gain: '<S346>/Filter Coefficient' incorporates:
  //   DiscreteIntegrator: '<S338>/Filter'
  //   Gain: '<S337>/Derivative Gain'
  //   Sum: '<S338>/SumD'

  rtb_DataTypeConversion_k_idx_2 = (FlightController_P_g.PID_vz_D *
    FlightController_B.vz_error - FlightController_DW.Filter_DSTATE_e) *
    FlightController_P_g.PID_vz_N;

  // DeadZone: '<S386>/DeadZone'
  if (FlightController_B.DeadZone_o >
      FlightController_P_g.PID_x_UpperSaturationLimit) {
    FlightController_B.DeadZone_o -=
      FlightController_P_g.PID_x_UpperSaturationLimit;
  } else if (FlightController_B.DeadZone_o >=
             FlightController_P_g.PID_x_LowerSaturationLimit) {
    FlightController_B.DeadZone_o = 0.0;
  } else {
    FlightController_B.DeadZone_o -=
      FlightController_P_g.PID_x_LowerSaturationLimit;
  }

  // End of DeadZone: '<S386>/DeadZone'

  // Gain: '<S390>/Integral Gain'
  FlightController_B.Filter_m *= FlightController_P_g.PID_x_I;

  // DeadZone: '<S436>/DeadZone'
  if (FlightController_B.DeadZone >
      FlightController_P_g.PID_y_UpperSaturationLimit) {
    FlightController_B.DeadZone -=
      FlightController_P_g.PID_y_UpperSaturationLimit;
  } else if (FlightController_B.DeadZone >=
             FlightController_P_g.PID_y_LowerSaturationLimit) {
    FlightController_B.DeadZone = 0.0;
  } else {
    FlightController_B.DeadZone -=
      FlightController_P_g.PID_y_LowerSaturationLimit;
  }

  // End of DeadZone: '<S436>/DeadZone'

  // Gain: '<S440>/Integral Gain'
  FlightController_B.IntegralGain_jd *= FlightController_P_g.PID_y_I;

  // Sum: '<S352>/Sum' incorporates:
  //   Gain: '<S348>/Proportional Gain'

  FlightController_B.Saturation_n = (FlightController_P_g.PID_vz_P *
    FlightController_B.vz_error + FlightController_DW.Integrator_DSTATE_pj) +
    rtb_DataTypeConversion_k_idx_2;

  // Saturate: '<S350>/Saturation'
  if (FlightController_B.Saturation_n >
      FlightController_P_g.PID_vz_UpperSaturationLimit) {
    FlightController_B.Saturation_n =
      FlightController_P_g.PID_vz_UpperSaturationLimit;
  } else if (FlightController_B.Saturation_n <
             FlightController_P_g.PID_vz_LowerSaturationLimit) {
    FlightController_B.Saturation_n =
      FlightController_P_g.PID_vz_LowerSaturationLimit;
  }

  // Sum: '<S53>/Sum' incorporates:
  //   Gain: '<S49>/Proportional Gain'

  FlightController_B.vz_error = (FlightController_P_g.PID_pitch_P *
    FlightController_B.Saturation_e + FlightController_DW.Integrator_DSTATE_c) +
    rtb_VectorConcatenate_idx_2;

  // Saturate: '<S51>/Saturation'
  if (FlightController_B.vz_error >
      FlightController_P_g.PID_pitch_UpperSaturationLimit) {
    FlightController_B.vz_error =
      FlightController_P_g.PID_pitch_UpperSaturationLimit;
  } else if (FlightController_B.vz_error <
             FlightController_P_g.PID_pitch_LowerSaturationLimit) {
    FlightController_B.vz_error =
      FlightController_P_g.PID_pitch_LowerSaturationLimit;
  }

  // Sum: '<S101>/Sum' incorporates:
  //   Gain: '<S97>/Proportional Gain'

  FlightController_B.Saturation_e = (FlightController_P_g.PID_roll_P *
    FlightController_B.Saturation_h + FlightController_DW.Integrator_DSTATE_m) +
    FlightController_B.FilterCoefficient_cs;

  // Saturate: '<S99>/Saturation'
  if (FlightController_B.Saturation_e >
      FlightController_P_g.PID_roll_UpperSaturationLimit) {
    FlightController_B.Saturation_e =
      FlightController_P_g.PID_roll_UpperSaturationLimit;
  } else if (FlightController_B.Saturation_e <
             FlightController_P_g.PID_roll_LowerSaturationLimit) {
    FlightController_B.Saturation_e =
      FlightController_P_g.PID_roll_LowerSaturationLimit;
  }

  // Sum: '<S151>/Sum'
  FlightController_B.Saturation_h = (FlightController_B.Saturation_i +
    FlightController_DW.Integrator_DSTATE_pm) +
    FlightController_B.FilterCoefficient_j;

  // Saturate: '<S149>/Saturation'
  if (FlightController_B.Saturation_h >
      FlightController_P_g.PID_yaw_UpperSaturationLimit) {
    FlightController_B.Saturation_h =
      FlightController_P_g.PID_yaw_UpperSaturationLimit;
  } else if (FlightController_B.Saturation_h <
             FlightController_P_g.PID_yaw_LowerSaturationLimit) {
    FlightController_B.Saturation_h =
      FlightController_P_g.PID_yaw_LowerSaturationLimit;
  }

  for (i = 0; i < 4; i++) {
    // Product: '<S6>/Product1' incorporates:
    //   Constant: '<S6>/Mixer matrix'
    //   Saturate: '<S149>/Saturation'
    //   Saturate: '<S350>/Saturation'
    //   Saturate: '<S51>/Saturation'
    //   Saturate: '<S99>/Saturation'

    FlightController_B.Saturation_i = ((FlightController_P_g.Mixermatrix_Value[
      static_cast<int32_T>(i + 4)] * FlightController_B.vz_error +
      FlightController_P_g.Mixermatrix_Value[i] *
      FlightController_B.Saturation_n) + FlightController_P_g.Mixermatrix_Value[
      static_cast<int32_T>(i + 8)] * FlightController_B.Saturation_e) +
      FlightController_P_g.Mixermatrix_Value[static_cast<int32_T>(i + 12)] *
      FlightController_B.Saturation_h;

    // Saturate: '<S6>/Saturation' incorporates:
    //   Product: '<S6>/Product1'

    if (FlightController_B.Saturation_i >
        FlightController_P_g.Saturation_UpperSat) {
      FlightController_B.Saturation_i = FlightController_P_g.Saturation_UpperSat;
    } else if (FlightController_B.Saturation_i <
               FlightController_P_g.Saturation_LowerSat) {
      FlightController_B.Saturation_i = FlightController_P_g.Saturation_LowerSat;
    }

    // DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
    //   Constant: '<S2>/Constant'
    //   Gain: '<S2>/Gain'
    //   Saturate: '<S6>/Saturation'
    //   Sum: '<S2>/Sum'

    FlightController_B.Saturation_i = floor(FlightController_P_g.Gain_Gain_h *
      FlightController_B.Saturation_i + FlightController_P_g.Constant_Value_h);
    if (rtIsNaN(FlightController_B.Saturation_i) || rtIsInf
        (FlightController_B.Saturation_i)) {
      FlightController_B.Saturation_i = 0.0;
    } else {
      FlightController_B.Saturation_i = fmod(FlightController_B.Saturation_i,
        65536.0);
    }

    rty_Actuators[i] = static_cast<uint16_T>(FlightController_B.Saturation_i <
      0.0 ? static_cast<int32_T>(static_cast<uint16_T>(static_cast<int32_T>(-
      static_cast<int32_T>(static_cast<int16_T>(static_cast<uint16_T>
      (-FlightController_B.Saturation_i)))))) : static_cast<int32_T>(
      static_cast<uint16_T>(FlightController_B.Saturation_i)));

    // End of DataTypeConversion: '<S2>/Data Type Conversion'
  }

  // Switch: '<S384>/Switch1' incorporates:
  //   Constant: '<S384>/Clamping_zero'
  //   Constant: '<S384>/Constant'
  //   Constant: '<S384>/Constant2'
  //   RelationalOperator: '<S384>/fix for DT propagation issue'

  if (FlightController_B.DeadZone_o > FlightController_P_g.Clamping_zero_Value_n)
  {
    tmp = FlightController_P_g.Constant_Value_j;
  } else {
    tmp = FlightController_P_g.Constant2_Value_o;
  }

  // Switch: '<S384>/Switch2' incorporates:
  //   Constant: '<S384>/Clamping_zero'
  //   Constant: '<S384>/Constant3'
  //   Constant: '<S384>/Constant4'
  //   RelationalOperator: '<S384>/fix for DT propagation issue1'

  if (FlightController_B.Filter_m > FlightController_P_g.Clamping_zero_Value_n)
  {
    tmp_0 = FlightController_P_g.Constant3_Value_p;
  } else {
    tmp_0 = FlightController_P_g.Constant4_Value_c;
  }

  // Switch: '<S384>/Switch' incorporates:
  //   Constant: '<S384>/Clamping_zero'
  //   Constant: '<S384>/Constant1'
  //   Logic: '<S384>/AND3'
  //   RelationalOperator: '<S384>/Equal1'
  //   RelationalOperator: '<S384>/Relational Operator'
  //   Switch: '<S384>/Switch1'
  //   Switch: '<S384>/Switch2'

  if ((FlightController_P_g.Clamping_zero_Value_n !=
       FlightController_B.DeadZone_o) && (static_cast<int32_T>(tmp) ==
       static_cast<int32_T>(tmp_0))) {
    FlightController_B.Filter_m = FlightController_P_g.Constant1_Value_f;
  }

  // Update for DiscreteIntegrator: '<S393>/Integrator' incorporates:
  //   Switch: '<S384>/Switch'

  FlightController_DW.Integrator_DSTATE +=
    FlightController_P_g.Integrator_gainval * FlightController_B.Filter_m;

  // Update for DiscreteIntegrator: '<S388>/Filter'
  FlightController_DW.Filter_DSTATE += FlightController_P_g.Filter_gainval *
    FlightController_B.Integrator_g;

  // Switch: '<S434>/Switch1' incorporates:
  //   Constant: '<S434>/Clamping_zero'
  //   Constant: '<S434>/Constant'
  //   Constant: '<S434>/Constant2'
  //   RelationalOperator: '<S434>/fix for DT propagation issue'

  if (FlightController_B.DeadZone > FlightController_P_g.Clamping_zero_Value_a)
  {
    tmp = FlightController_P_g.Constant_Value_l0;
  } else {
    tmp = FlightController_P_g.Constant2_Value_n;
  }

  // Switch: '<S434>/Switch2' incorporates:
  //   Constant: '<S434>/Clamping_zero'
  //   Constant: '<S434>/Constant3'
  //   Constant: '<S434>/Constant4'
  //   RelationalOperator: '<S434>/fix for DT propagation issue1'

  if (FlightController_B.IntegralGain_jd >
      FlightController_P_g.Clamping_zero_Value_a) {
    tmp_0 = FlightController_P_g.Constant3_Value_c;
  } else {
    tmp_0 = FlightController_P_g.Constant4_Value_i;
  }

  // Switch: '<S434>/Switch' incorporates:
  //   Constant: '<S434>/Clamping_zero'
  //   Constant: '<S434>/Constant1'
  //   Logic: '<S434>/AND3'
  //   RelationalOperator: '<S434>/Equal1'
  //   RelationalOperator: '<S434>/Relational Operator'
  //   Switch: '<S434>/Switch1'
  //   Switch: '<S434>/Switch2'

  if ((FlightController_P_g.Clamping_zero_Value_a != FlightController_B.DeadZone)
      && (static_cast<int32_T>(tmp) == static_cast<int32_T>(tmp_0))) {
    FlightController_B.IntegralGain_jd = FlightController_P_g.Constant1_Value_a;
  }

  // Update for DiscreteIntegrator: '<S443>/Integrator' incorporates:
  //   Switch: '<S434>/Switch'

  FlightController_DW.Integrator_DSTATE_n +=
    FlightController_P_g.Integrator_gainval_n *
    FlightController_B.IntegralGain_jd;

  // Update for DiscreteIntegrator: '<S438>/Filter'
  FlightController_DW.Filter_DSTATE_c += FlightController_P_g.Filter_gainval_i *
    FlightController_B.FilterCoefficient_o;

  // Update for DiscreteIntegrator: '<S247>/Integrator' incorporates:
  //   Gain: '<S244>/Integral Gain'
  //   Product: '<S5>/MatrixMultiply'

  FlightController_DW.Integrator_DSTATE_b += FlightController_P_g.PID_vx_I *
    rtb_VectorConcatenate_idx_0 * FlightController_P_g.Integrator_gainval_j;

  // Update for DiscreteIntegrator: '<S242>/Filter'
  FlightController_DW.Filter_DSTATE_a += FlightController_P_g.Filter_gainval_l *
    rtb_DataTypeConversion_k_idx_1;

  // Update for DiscreteIntegrator: '<S295>/Integrator' incorporates:
  //   Gain: '<S292>/Integral Gain'
  //   Product: '<S5>/MatrixMultiply'

  FlightController_DW.Integrator_DSTATE_p += FlightController_P_g.PID_vy_I *
    rtb_DataTypeConversion_k_idx_0 * FlightController_P_g.Integrator_gainval_o;

  // Update for DiscreteIntegrator: '<S290>/Filter'
  FlightController_DW.Filter_DSTATE_l += FlightController_P_g.Filter_gainval_j *
    FlightController_B.fcn3;

  // Update for DiscreteIntegrator: '<S39>/Filter'
  FlightController_DW.Filter_DSTATE_i += FlightController_P_g.Filter_gainval_a *
    rtb_VectorConcatenate_idx_2;

  // Update for DiscreteIntegrator: '<S87>/Filter'
  FlightController_DW.Filter_DSTATE_d += FlightController_P_g.Filter_gainval_k *
    FlightController_B.FilterCoefficient_cs;

  // Update for DiscreteIntegrator: '<S137>/Filter'
  FlightController_DW.Filter_DSTATE_ag += FlightController_P_g.Filter_gainval_jn
    * FlightController_B.FilterCoefficient_j;

  // Update for DiscreteIntegrator: '<S194>/Filter'
  FlightController_DW.Filter_DSTATE_g += FlightController_P_g.Filter_gainval_iw *
    rtb_DataTypeConversion_p_idx_2;

  // Update for DiscreteIntegrator: '<S338>/Filter'
  FlightController_DW.Filter_DSTATE_e += FlightController_P_g.Filter_gainval_at *
    rtb_DataTypeConversion_k_idx_2;
}

// Model initialize function
void FlightController_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_FlightController_T *const FlightController_M =
    &(FlightController_MdlrefDW.rtm);

  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize error status
  rtmSetErrorStatusPointer(FlightController_M, rt_errorStatus);
}

//
// File trailer for generated code.
//
// [EOF]
//
