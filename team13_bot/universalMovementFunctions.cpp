#include <iostream.h>
#include <universalMovementFunctions.h>
#include <MeMegaPi.h>

class Bot {
    public:
      MeMegaPiDCMotor fr_motor;
      MeMegaPiDCMotor fl_motor;
      MeMegaPiDCMotor br_motor;
      MeMegaPiDCMotor bl_motor;

      Bot(fr_motor1, fl_motor1, br_motor1, bl_motor1) {
          fr_motor = fr_motor1;
          fl_motor = fl_motor1;
          br_motor = br_motor1;
          bl_motor = bl_motor1;
        }
  };
void moveForward(Bot bot, int speed) {
  }
void moveBackward(Bot bot, int speed) {
  }

void turnLeft(Bot bot, int degree) {
  
  }
void turnRight(Bot bot, int degree) {}

void allStop(Bot bot) {}
