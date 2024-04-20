// Code for Final Project for BIOE 448 
// Citations at the end

#include <Servo.h>
// #include "thingProperties.h"

Servo myservo;  // Comment taken from Servo code: creates Servo object to control servo 1
Servo myservo2; // Comment taken from Servo code: creates Servo object to control servo 2
Servo myservo3; // Comment taken from Servo code: creates Servo object to control servo 3
const int ECG1_pin = A6; // Creates a constant integer with the signal input for the ECG sensor
int pulse_signal = 0;
int servo_value = 0; 
int threshold = 30; // change! 
char Str6[15] = "start"; 

void setup() {
  Serial.begin(9600);
  myservo.attach(6);  // Comment taken from Servo code: Attaches the servo on pin 6 (PWM) to the Servo object
  myservo2.attach(7); // Comment taken from Servo code: Attaches the servo on pin 7 (PWM) to the Servo object
  myservo3.attach(8); // Comment taken from Servo code: Attaches the servo on pin 8 (PWM) to the Servo object
}

void loop() {
  pulse_signal = analogRead(ECG1_pin);
  Serial.print(pulse_signal);
  delay(1);
  if (pulse_signal > threshold) {  
    servo_value = 0;  
  } else {
    servo_value = 180;
  }
  Serial.print(servo_value);
  myservo.write(servo_value); 
  myservo2.write(servo_value); 
  myservo3.write(servo_value);
  delay(10);  
  //if () {
    //state = '';
  //} else {

  //}


  //for (int i = 0; i <= 10; i++) {
    //myservo3.write(servo_value); 
    // val = abs(val - 1);          
  // }

}

// CITATIONS: 
//1) Servo related code taken and modified from example 'Knob.ino' from the Servo library: 
    // https://github.com/arduino-libraries/Servo/blob/master/examples/Knob/Knob.ino (made by Michal Rinott and modified by Scott Fitzgerald)


