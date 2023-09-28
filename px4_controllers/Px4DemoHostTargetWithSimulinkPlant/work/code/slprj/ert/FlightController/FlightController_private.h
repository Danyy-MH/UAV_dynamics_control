//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: FlightController_private.h
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
#ifndef RTW_HEADER_FlightController_private_h_
#define RTW_HEADER_FlightController_private_h_
#include "rtwtypes.h"
#include "FlightController.h"
#include "FlightController_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
#define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef FlightController_MDLREF_HIDE_CHILD_

extern P_FlightController_T FlightController_P_g;

#endif                                 //FlightController_MDLREF_HIDE_CHILD_
#endif                                // RTW_HEADER_FlightController_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
