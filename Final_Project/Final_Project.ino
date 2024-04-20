// Code for Final Project for BIOE 448 //ADDED
// Citations at the end //ADDED

#include <Servo.h> //ADDED
// #include "thingProperties.h"

Servo myservo;  //ADDED // Comment taken from Servo code: creates Servo object to control servo 1
//Servo myservo2; // Comment taken from Servo code: creates Servo object to control servo 2
//Servo myservo3; // Comment taken from Servo code: creates Servo object to control servo 3
const int ECG1_pin = A6; // Creates a constant integer with the signal input for the ECG sensor
int pulse_signal = 0;
int servo_value = 0; //ADDED
int threshold = 30; // change! 
char Str6[15] = "start"; 

void setup() {
  Serial.begin(9600); //ADDED
  myservo.attach(6);//ADDED  // Comment taken from Servo code: Attaches the servo on pin 6 (PWM) to the Servo object
  //myservo2.attach(7); // Comment taken from Servo code: Attaches the servo on pin 7 (PWM) to the Servo object
  //myservo3.attach(8); // Comment taken from Servo code: Attaches the servo on pin 8 (PWM) to the Servo object
  
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
  delay(100);
  pulse_signal = analogRead(ECG1_pin);
  Serial.print(pulse_signal);
  delay(10);
  if (pulse_signal > threshold) {  
    servo_value = 0;  
  } else {
    servo_value = 180;
  }
  Serial.print(servo_value);
  myservo.write(servo_value); //ADDED
  delay(10); //ADDED
  //myservo2.write(servo_value); 
  //delay(10);
  //myservo3.write(servo_value);
  //delay(10);  
  
  //if (servo_value == 180) {
    // state =  "";
  //} else if (servo_value == 0) {
    // state = "";
  //}

  //counter++;
  //if (counter > 100){
    //ArduinoCloud.update();
    //Serial.println(state);
    //counter = 0;
  //}


  // ------

  //for (int i = 0; i <= 10; i++) {
    //myservo3.write(servo_value); 
    // val = abs(val - 1);          
  // }

}

// CITATIONS: 
//1) Servo related code taken and modified from example 'Knob.ino' from the Arduino Servo library: 
    // https://github.com/arduino-libraries/Servo/blob/master/examples/Knob/Knob.ino (made by Michal Rinott and modified by Scott Fitzgerald)
//2) Also used the code from class (different labs)


