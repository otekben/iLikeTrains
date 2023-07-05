#include "MeMegaPi.h"

int  LEFT_IR_SENSOR = A6; 
int  TOP_IR_SENSOR = A7;
int  RIGHT_IR_SENSOR = A8;
int  LEFT_IMPACT_SWITCH = A11;
int  RIGHT_IMPACT_SWITCH = A12;
int  RIGHT_LED = A14;
int  LEFT_LED = A13;
int  RIGHT_LINE_TRACKER = A10;
int  LEFT_LINE_TRACKER = A9;

MeMegaPiDCMotor FR_MOTOR(PORT1A);

MeMegaPiDCMotor BR_MOTOR(PORT1B);

MeMegaPiDCMotor FL_MOTOR(PORT2A);

MeMegaPiDCMotor BL_MOTOR(PORT2B);

void setup() {
  // put your setup code here, to run once:
  pinMode(LEFT_IR_SENSOR, INPUT);
  pinMode(RIGHT_IR_SENSOR, INPUT);
  pinMode(TOP_IR_SENSOR, INPUT);
  pinMode(LEFT_IMPACT_SWITCH, INPUT);
  pinMode(RIGHT_IMPACT_SWITCH, INPUT);
  pinMode(RIGHT_LED, OUTPUT);
  pinMode(LEFT_LED, OUTPUT);
  pinMode(RIGHT_LINE_TRACKER, INPUT);
  pinMode(LEFT_LINE_TRACKER, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
//  FR_MOTOR.run(100);
//  BR_MOTOR.run(100);
////  
//  delay(1000);
//  FR_MOTOR.stop();
//  BR_MOTOR.stop();
//  
//  FL_MOTOR.run(-100);
//  BL_MOTOR.run(-100);
//  
//  delay(1000);
//  FL_MOTOR.stop();
//  BL_MOTOR.stop();

}
