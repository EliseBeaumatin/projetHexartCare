#include "cardio.h"
#define BAUDRATE 9600

void setup() {
  Serial.begin(BAUDRATE);
}


void loop() {
  returnCSV(timer(),pulse_alea());
  delay(1000);
}
  
