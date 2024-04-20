// Code for Final Project for BIOE 448 
// Citations at the end

#include <Servo.h>
// #include "thingProperties.h"

const int ECG1_pin = A6; // Creates a constant integer with the signal input for the ECG sensor
Servo myservo;  // Comment taken from Servo code: creates Servo object to control servo 1
int servo_value = 0;
float pulse_signal = 0;
int threshold = 200; // Obtained from ECG values 
char state[7] = "     ";

void setup() {
  Serial.begin(9600);
  myservo.attach(6);  // Comment taken from Servo code: Attaches the servo on pin 6 (PWM) to the Servo object

  //delay(1500)
  //initproperties();

  //ArduinoCloud.begin(ArduinoIotPreferredConnection);
  //setDebugMessageLevel(2);
  //ArduinoCloud.printDebugInfo();

  //while (ArduinoCloud.connected() != 1) {
    //ArduinoCloud.update();
    //delay(500);
  //}

}

void loop() {
  pulse_signal = analogRead(ECG1_pin);
  //Serial.println(pulse_signal);
  delay(200);
  if (pulse_signal > threshold) {  
    servo_value = 180;  
    strcpy(state, "closed");
  } else {
    servo_value = 0;
    strcpy(state, "open  ");
  }
  //Serial.println(servo_value);
  Serial.println(state);
  delay(10);
  myservo.write(servo_value); 
  delay(20);

  //counter++;
  //if (counter > 100){
    //ArduinoCloud.update();
    //Serial.println(state);
    //counter = 0;
  //}

}


//for (servo_value = 0; servo_value <= 180; servo_value += 1) {
    //myservo.write(servo_value);
    //delay(15);
  //}




// CITATIONS: 
//1) Servo related code taken and modified from example 'Knob.ino' from the Arduino Servo library: 
    // https://github.com/arduino-libraries/Servo/blob/master/examples/Knob/Knob.ino (made by Michal Rinott and modified by Scott Fitzgerald)
//2) Also used the code from class (different labs)

