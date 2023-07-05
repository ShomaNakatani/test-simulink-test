/*
 * File: Controller.c
 *
 * Code generated for Simulink model 'Controller'.
 *
 * Model version                  : 6.0
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Wed Jul  5 15:30:04 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Controller.h"
#include "rtwtypes.h"

/* Block signals and states (default storage) */
D_Work rtDWork;

/* External inputs (root inport signals with default storage) */
ExternalInputs rtU;

/* External outputs (root outports fed by signals with default storage) */
ExternalOutputs rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Controller_step(void)
{
  real32_T rtb_Sum2;
  real32_T rtb_UnitDelay1;
  real32_T rtb_UnitDelay2;

  /* Outputs for Atomic SubSystem: '<Root>/Controller' */
  /* UnitDelay: '<S1>/Unit Delay1' */
  rtb_UnitDelay1 = rtDWork.UnitDelay1_DSTATE;

  /* UnitDelay: '<S1>/Unit Delay2' */
  rtb_UnitDelay2 = rtDWork.UnitDelay2_DSTATE;

  /* Sum: '<S1>/Sum2' incorporates:
   *  Gain: '<S1>/Gain2'
   *  Gain: '<S1>/Gain3'
   *  Gain: '<S1>/Gain4'
   *  Sum: '<S1>/Sum3'
   *  UnitDelay: '<S1>/Unit Delay1'
   *  UnitDelay: '<S1>/Unit Delay2'
   *  UnitDelay: '<S1>/Unit Delay3'
   */
  rtb_Sum2 = (0.25F * rtDWork.UnitDelay3_DSTATE + 0.25F *
              rtDWork.UnitDelay2_DSTATE) + 0.25F * rtDWork.UnitDelay1_DSTATE;

  /* Update for UnitDelay: '<S1>/Unit Delay1' incorporates:
   *  Inport: '<Root>/In1'
   */
  rtDWork.UnitDelay1_DSTATE = rtU.In1;

  /* Update for UnitDelay: '<S1>/Unit Delay2' */
  rtDWork.UnitDelay2_DSTATE = rtb_UnitDelay1;

  /* Update for UnitDelay: '<S1>/Unit Delay3' */
  rtDWork.UnitDelay3_DSTATE = rtb_UnitDelay2;

  /* Outport: '<Root>/Out1' incorporates:
   *  Gain: '<S1>/Gain1'
   *  Inport: '<Root>/In1'
   *  Sum: '<S1>/Sum1'
   */
  rtY.Out1 = 0.25F * rtU.In1 + rtb_Sum2;

  /* End of Outputs for SubSystem: '<Root>/Controller' */
}

/* Model initialize function */
void Controller_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
