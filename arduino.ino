#include <AFMotor.h>

AF_DCMotor Right_Motor(1);
AF_DCMotor Left_Motor(2);

#define Left_Sensor A2
#define Right_Sensor A3
#define Center_Sensor A0

void setup() {
  

  // turn on motor
  Right_Motor.setSpeed(255);
  Left_Motor.setSpeed(255);

  pinMode(Left_Sensor, INPUT);
  pinMode(Right_Sensor, INPUT);
  pinMode(Center_Sensor, INPUT);
 
  Right_Motor.run(RELEASE);
  Left_Motor.run(RELEASE);
  
}

void loop() {
  if (!digitalRead(Right_Sensor) && !digitalRead(Left_Sensor) && digitalRead(Center_Sensor)) {
    Right_Motor.run(FORWARD);
    Left_Motor.run(FORWARD);
    delay(100);
  }

  else if (digitalRead(Right_Sensor) && !digitalRead(Left_Sensor) && !digitalRead(Center_Sensor)) {
    Right_Motor.run(FORWARD);
     Left_Motor.run(RELEASE);
     delay(100);
  }
  
  else if (!digitalRead(Right_Sensor) && digitalRead(Left_Sensor) && !digitalRead(Center_Sensor)) {
    Right_Motor.run(RELEASE);
    Left_Motor.run(FORWARD);
    delay(100);
  }

  else if (digitalRead(Right_Sensor) && digitalRead(Left_Sensor) && digitalRead(Center_Sensor)) {
    Right_Motor.run(RELEASE);
    Left_Motor.run(RELEASE);
    delay(100);
  }

  else {
     Right_Motor.run(RELEASE);
    Left_Motor.run(RELEASE);
    delay(100);
  }
  
  }
