#include "MeMegaPi.h"
class Bot { // Class to make accessing motors easier
      public: 
        MeMegaPiDCMotor fr_motor; // Directions are from the perspecitve of looking at the robot from the back
        MeMegaPiDCMotor fl_motor;
        MeMegaPiDCMotor br_motor;
        MeMegaPiDCMotor bl_motor;
        int  LEFT_IR_SENSOR;  
        int  TOP_IR_SENSOR; 
        int  RIGHT_IR_SENSOR; 
        int  LEFT_IMPACT_SWITCH; 
        int  RIGHT_IMPACT_SWITCH;
        int  RIGHT_LED; 
        int  LEFT_LED; 
        int  RIGHT_LINE_TRACKER; 
        int  LEFT_LINE_TRACKER; 
        Bot() {}
        void init(MeMegaPiDCMotor fr_motor1, MeMegaPiDCMotor fl_motor1, MeMegaPiDCMotor br_motor1, MeMegaPiDCMotor bl_motor1) { // Constructor
          fr_motor = fr_motor1;
          fl_motor = fl_motor1;
          br_motor = br_motor1;
          bl_motor = bl_motor1;
          LEFT_IR_SENSOR = A6; 
          TOP_IR_SENSOR = A7;
          RIGHT_IR_SENSOR = A8;
          LEFT_IMPACT_SWITCH = A11;
          RIGHT_IMPACT_SWITCH = A12;
          RIGHT_LED = A14;
          LEFT_LED = A13;
          RIGHT_LINE_TRACKER = A10;
          LEFT_LINE_TRACKER = A9;

          pinMode(LEFT_IR_SENSOR, INPUT);
          pinMode(RIGHT_IR_SENSOR, INPUT);
          pinMode(TOP_IR_SENSOR, INPUT);
          pinMode(LEFT_IMPACT_SWITCH, INPUT);
          pinMode(RIGHT_IMPACT_SWITCH, INPUT);
          pinMode(RIGHT_LED, OUTPUT);
          pinMode(LEFT_LED, OUTPUT);
          pinMode(RIGHT_LINE_TRACKER, INPUT);
          pinMode(LEFT_LINE_TRACKER, INPUT);
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

        void turnLeft(int degree) { // Ability to turn x degrees still needs to be implemented.
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
        void lineTracking() { // To be ran in a loop multiple times
          right_line_sensor = digitalRead(RIGHT_LINE_TRACKER);
          left_line_sensor = digitalRead(LEFT_LINE_TRACKER);

          if (right_line_sensor == 0) { // detects black
            allStop();
            turnRight(0);
          }  else if (left_line_sensor == 0) {
            allStop();
            turnLeft(0);
          } else {
            moveForward(100);
          }

        }

        // Need some sort of obstacle detection as well

        
  };