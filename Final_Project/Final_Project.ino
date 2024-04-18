// Code for Final Project for BIOE 448 
//Citations at the end

#include <Servo.h>

Servo myservo;  // creates Servo object to control a servo

// int potpin = A0;  // analog pin used to connect the potentiometer
int val = 0;    // variable to read the value from the analog pin

void setup() {
  // put your setup code here, to run once:
  myservo.attach(6);  // attaches the servo on pin 6 to the Servo object

}

void loop() {
  // put your main code here, to run repeatedly:
  // val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  // val = map(val, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)

  for (int i = 0; i <= 10; i++) {
    val = map(val, 0, 1, 0, 180);     // scale it for use with the servo (value between 0 and 180)
    myservo.write(val);                  // sets the servo position according to the scaled value
    //val = abs(val - 1);
    delay(30);                           // waits for the servo to get there
    Serial.print(val);
  }

}


// CITATIONS: 
//1) Servo related code taken and modified from example 'Knob.ino' from the Servo library: 
    // https://github.com/arduino-libraries/Servo/blob/master/examples/Knob/Knob.ino (made by Michal Rinott and modified by Scott Fitzgerald)


