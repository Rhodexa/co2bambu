#ifndef OLED_DRV_H
#define OLED_DRV_H

namespace oled{
  /* Since our OLED display is only black and white with no gray scale, a simple bit map is enough. So we save 7168 bytes */
  byte frame_buffer[1024]; 
  
  void init();
  
}

#endif
