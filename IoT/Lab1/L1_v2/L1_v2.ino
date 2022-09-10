#include <stdio.h> 
#define button 2    // pin that the sensor is attached to
#define led 3       // pin that the LED is attached to
int buttonValue = 0;
int turned = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(led, LOW);  
}

void loop() {
  buttonValue = digitalRead(button);
  if(turned == 1){
    digitalWrite(led, HIGH);
    } else {
      digitalWrite(led,LOW);
      }
  // if the analog value is high enough, turn on the LED:
  if (buttonValue != 0) {
    if(turned == 0){
    turned = 1;
  } else if(turned == 1) {
    turned =0;
  }} 
}
