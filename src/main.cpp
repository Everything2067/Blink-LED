#include <Arduino.h>

#ifdef AVR_UNO_R3
  #define LED 13
#endif

#ifdef NODEMCU_32S
  #define LED 2
#endif

#define ON_TIME 1000
#define OFF_TIME 1000

void ledOn();
void ledOff();

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  ledOn();
  delay(ON_TIME);
  ledOff();
  delay(OFF_TIME);
}

void ledOn() {
  digitalWrite(LED, HIGH);
}

void ledOff() {
  digitalWrite(LED, LOW);
}