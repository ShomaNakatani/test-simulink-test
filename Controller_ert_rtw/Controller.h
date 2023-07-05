/*
 * File: Controller.h
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

#ifndef RTW_HEADER_Controller_h_
#define RTW_HEADER_Controller_h_
#ifndef Controller_COMMON_INCLUDES_
#define Controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Controller_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real32_T UnitDelay1_DSTATE;          /* '<S1>/Unit Delay1' */
  real32_T UnitDelay2_DSTATE;          /* '<S1>/Unit Delay2' */
  real32_T UnitDelay3_DSTATE;          /* '<S1>/Unit Delay3' */
} D_Work;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T In1;                        /* '<Root>/In1' */
} ExternalInputs;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Out1;                       /* '<Root>/Out1' */
} ExternalOutputs;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* Block signals and states (default storage) */
extern D_Work rtDWork;

/* External inputs (root inport signals with default storage) */
extern ExternalInputs rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExternalOutputs rtY;

/* Model entry point functions */
extern void Controller_initialize(void);
extern void Controller_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('SILBlock/Controller')    - opens subsystem SILBlock/Controller
 * hilite_system('SILBlock/Controller/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SILBlock'
 * '<S1>'   : 'SILBlock/Controller'
 */
#endif                                 /* RTW_HEADER_Controller_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
