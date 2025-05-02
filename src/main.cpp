#include <Arduino.h>

int interval = 1000; // the time interval 
unsigned long previous_millis = 0; // the last millis
int Led_pin = 2;
boolean Led_state = false;

void setup() {
  Serial.begin(9600);
  pinMode(Led_pin, OUTPUT);
}

void loop() {
  if (millis() - previous_millis > interval) {
    previous_millis = millis();
    
    if (Led_state) {
      Led_state = false;
    } else {
      Led_state = true;
    }

    digitalWrite(Led_pin, Led_state);
  }
}
