#include "cardio.h"
#include <Arduino.h>

int pulse_alea(){
  int pulse = random(60,90);
  return pulse;
}

long timer() {
  uint32_t temps = micros() / 1000;
  return temps;
}


void returnCSV(long times, int pulse){
  Serial.print(pulse);
  Serial.print(";");
  Serial.print(times);
  Serial.println('$');
}
