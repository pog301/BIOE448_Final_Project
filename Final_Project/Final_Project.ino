// Code for Final Project for BIOE 448 
// Citations at the end

#include <Servo.h>
// #include "thingProperties.h"

Servo myservo;  // creates Servo object to control a servo
Servo myservo2;
Servo myservo3;
// int potpin = A0;  // analog pin used to connect the potentiometer
int val = 0;    // variable to read the value from the analog pin

const int ECG1_pin = A6;
int pulse_signal = 0;

//int threshold = ;
// String state = ; 

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  myservo.attach(6);  // attaches the servo on pin 6 (PWM) to the Servo object
  myservo2.attach(7);
  myservo3.attach(8);

}

void loop() {
  // put your main code here, to run repeatedly:
  // val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  // val = map(val, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)

  pulse_signal = analogRead(ECG1_pin);
  Serial.print(pulse_signal);
  delay(1);

  // if (pulse_signal > threshold) {  
    // val = ;
    // state = ;
  // } else {
    // val =
  // }

  //for (int i = 0; i <= 10; i++) {
    //val = map(val, 0, 1, 0, 180);     // scale it for use with the servo (value between 0 and 180)
    // myservo.write(val);                  // sets the servo position according to the scaled value
    // myservo2.write(val); 
    // myservo3.write(val); 
    //val = abs(val - 1);
    //delay(30);                           // waits for the servo to get there
    //Serial.print(val);
  //}

}

// CITATIONS: 
//1) Servo related code taken and modified from example 'Knob.ino' from the Servo library: 
    // https://github.com/arduino-libraries/Servo/blob/master/examples/Knob/Knob.ino (made by Michal Rinott and modified by Scott Fitzgerald)

