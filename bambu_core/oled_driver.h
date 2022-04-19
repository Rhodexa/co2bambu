/*
 SSD1306 OLED display driver for ESP8266, based on a modified version of Adafruit's lib. This file contains all we need to drive this display using a double buffer technique.
    Copyright (C) 2022 Rhodexa's Arts

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef OLED_DRV_H
#define OLED_DRV_H

namespace oled{
  /* Since our OLED display is only black and white with no gray scale, a simple bit map is enough. So we save 7168 bytes */
  byte frame_buffer[1024]; 
  
  void init();
  void update();
  void draw();
  void 
}

#endif
