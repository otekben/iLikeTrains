#include "MeMegaPi.h"
class Bot { // Class to make accessing motors easier
      public: 
        MeMegaPiDCMotor fr_motor; // Directions are from the perspecitve of looking at the robot from the back
        MeMegaPiDCMotor fl_motor;
        MeMegaPiDCMotor br_motor;
        MeMegaPiDCMotor bl_motor;
        Bot() {}
        void init(MeMegaPiDCMotor fr_motor1, MeMegaPiDCMotor fl_motor1, MeMegaPiDCMotor br_motor1, MeMegaPiDCMotor bl_motor1) { // Constructor
          fr_motor = fr_motor1;
          fl_motor = fl_motor1;
          br_motor = br_motor1;
          bl_motor = bl_motor1;
        }
        void moveForward(int speed) { // Movement member functions
            fr_motor.run(speed);
            fl_motor.run(-1*speed);
            br_motor.run(speed);
            bl_motor.run(-1*speed);
          }
        void moveBackward(int speed) {
            fr_motor.run(-1*speed);
            fl_motor.run(speed);
            br_motor.run(-1*speed);
            bl_motor.run(speed);
          }

        void turnLeft(int degree) {
            fr_motor.run(100);
            br_motor.run(100);
          }
        void turnRight(int degree) {
            fl_motor.run(-1*100);
            bl_motor.run(-1*100);
          }

        void allStop(Bot bot) {
            fr_motor.stop();
            fl_motor.stop();
            br_motor.stop();
            bl_motor.stop();
          }
        
  };

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

Bot bot;

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
