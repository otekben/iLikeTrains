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
  
  Serial.begin(9600);

}

void loop() {
  // random example code
  bot.lineTracking();
}
