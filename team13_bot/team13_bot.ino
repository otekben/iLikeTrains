int  LEFT_IR_SENSOR = A6; 
int  TOP_IR_SENSOR = A7;
int  RIGHT_IR_SENSOR = A8;
int  LEFT_IMPACT_SWITCH = A11;
int  RIGHT_IMPACT_SWITCH = A12;
int  RIGHT_LED = A14;
int  LEFT_LED = A13;
int  RIGHT_LINE_TRACKER = A10;
int  LEFT_LINE_TRACKER = A9;
//int  FR_MOTOR = 1A;
//int  BR_MOTOR = 1B;
//int  FL_MOTOR = 2B;
//int  BL_MOTOR = 2A;

MeMegaPiDCMotor FR_MOTOR(PORT1A);

MeMegaPiDCMotor BR_MOTOR(PORT1B);

MeMegaPiDCMotor FL_MOTOR(PORT2A);

MeMegaPiDCMotor BL_MOTOR(PORT2B);

void setup() {
  // put your setup code here, to run once:
 

}

void loop() {
  // put your main code here, to run repeatedly:
  FR_MOTOR.run(100);
  BL_MOTOR.run(100);

}
