#ifndef OLED_DRV_H
#define OLED_DRV_H

// SSD1306 OLED display driver for ESP8266, based on a modified version of Adafruit's lib. This file contains all we need to drive this display using a double buffer technique.
namespace oled{
  /* Since our OLED display is only black and white with no gray scale, a simple bit map is enough. So we save 7168 bytes */
  byte frame_buffer[1024]; 
  
  void init();
  void update();
  void draw();
  void 
}

#endif
