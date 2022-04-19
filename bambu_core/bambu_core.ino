#include "sensor_driver.h"
#include "oled_driver.h"

void setup(){
  Serial.begin(115200);
  oled::init();
  sensor::init();
}

void loop(){
  
}
