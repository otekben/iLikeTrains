#include "MeMegaPi.h"
#include "BotClass.h"

// All pins, double check that leds are correct, I (Daniel) couldn't turn them on when I tried
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

Bot bot; // Initialize our bot

void setup() {
  // put your setup code here, to run once:
  bot.init(FR_MOTOR, FL_MOTOR, BR_MOTOR, BL_MOTOR);
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
  // random example code
  bot.moveForward(100);
  delay(1000);
  bot.moveBackward(100);
  delay(1000);
  bot.turnRight(0);
  delay(1000);
  bot.moveForward(100);
  delay(1000);

}
