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

 	int thresholdP = 5;
  int thresholdN = -5;
	int MAX_JOY_VAL1 = 161.29;
	int MAX_JOY_VAL2 = -161.29;
  while (true)
  {
    getJoystickSettings(joystick);
    if((joystick.joy1_y1) > thresholdP)
    {
      motor[RightMotors] = (((joystick.joy1_y1) * (joystick.joy1_y1)) / MAX_JOY_VAL1 );
    }
    if((joystick.joy1_y1) < thresholdN)
    {
      motor[RightMotors] = (((joystick.joy1_y1) * (joystick.joy1_y1)) / MAX_JOY_VAL2);
    }
    if((joystick.joy1_y2) > thresholdP)
    {
      motor[LeftMotors] = (((joystick.joy1_y2) * (joystick.joy1_y2)) / MAX_JOY_VAL1);
    }
    if((joystick.joy1_y2) < thresholdN)
    {
      motor[LeftMotors] = (((joystick.joy1_y2) * (joystick.joy1_y2)) / MAX_JOY_VAL2);
  }
}
}
