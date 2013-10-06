#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Motor,  mtr_S1_C1_1,     LeftMotors,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     RightMotors,   tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C2_1,    servo1,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)

#include "JoystickDriver.c"

void initializeRobot()
{
  return;
}

task main()
{
  initializeRobot();

  waitForStart();

  while (true)
  {
    getJoystickSettings(joystick);
      motor[RightMotors] = joystick.joy1_y1

      motor[LeftMotors] = joystick.joy1_y2
    }
  }
