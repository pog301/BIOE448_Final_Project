// Code for Final Project for BIOE 448 
// Citations at the end

#include <Servo.h>

Servo myservo;  // Comment taken from Servo code: creates Servo object to control servo 1
int servo_value = 0;

void setup() {
  Serial.begin(9600);
  myservo.attach(6);  // Comment taken from Servo code: Attaches the servo on pin 6 (PWM) to the Servo object
}

void loop() {
  //myservo.write(servo_value); 
  //delay(10);
 
}

