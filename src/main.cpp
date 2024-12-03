/*
  Blink by Everything2067.
  Blinks an LED connected to the defined pin.
  By default, it will blink an LED connected to the built-in LED, however you can change this, and the on and off time as well.
*/

#include <Arduino.h>

// #define LED

#ifndef LED
  #ifdef UNO_R3
    #define LED 13
  #endif

  #ifdef NODEMCU_32S
    #define LED 2
  #endif
#endif

#define ON_TIME 1000
#define OFF_TIME 1000

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(ON_TIME);
  digitalWrite(LED, LOW);
  delay(OFF_TIME);
}