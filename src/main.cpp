/*
  BlinkLED by Everything2067.
  Blinks an LED connected to the defined pin.
  By default, it will blink an LED connected to the built-in LED, however you can change this, and the on and off time as well.
*/

// Uncomment this if you want to define a specific pin.
// #define LED_PIN 13

#ifndef LED_PIN
  #ifdef ARDUINO_BOARD
    #define LED_PIN 13
  #endif
  #ifdef NODEMCU_32S
    #define LED_PIN 2
  #endif
#endif

// Including the required library.
#include <Arduino.h>

// Defining delays. You can change this as per your need.
#define ON_TIME  1000
#define OFF_TIME 1000

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(ON_TIME);

  digitalWrite(LED_PIN, LOW);
  delay(OFF_TIME);
}