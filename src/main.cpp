#include "lvgl.h"
#include "../hal/sdl2/app_hal.h"

#include "demos/lv_demos.h"

#ifdef ARDUINO
#include <Arduino.h>

void setup() {
  lv_init();
  hal_setup();
  lv_demo_widgets();
}

void loop() {
  hal_loop();  /* Do not use while loop in this function */
}

#else

int main(void)
{
	lv_init();

	hal_setup();

  lv_demo_widgets();

	hal_loop();
}

#endif /*ARDUINO*/