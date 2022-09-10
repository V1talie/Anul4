#include <stdio.h> 
const int button = 2;    // pin that the sensor is attached to
const int led = 3;       // pin that the LED is attached to
int buttonValue = 0;
int ledValue = 0;
void setup() {
  // initialize the LED pin as an output:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(led, LOW);
  
}

void loop() {
  // read the value of the potentiometer:
  buttonValue = digitalRead(button);
  ledValue = digitalRead(led);

  // if the analog value is high enough, turn on the LED:
  if (buttonValue != 0) {
    if(ledValue == LOW){
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }} 
}
