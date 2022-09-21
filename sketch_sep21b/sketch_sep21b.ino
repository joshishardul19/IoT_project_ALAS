#include<Servo.h>
Servo myServo;
int readValue=0;
int servoValue=0;

void setup() {
  // put your setup code here, to run once: 
  myServo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:

   readValue=analogRead(A0);
   servoValue=map(readValue, 0, 1023, 0, 179);
   myServo.write(servoValue);
  delay(15);
  }
