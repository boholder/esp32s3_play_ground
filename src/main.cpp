#include "lvgl.h"
#include "demos/lv_demos.h"

#ifdef PIO_ENV
#if PIO_ENV == sim
#include "../hal/sdl2/app_hal.h"
#elif PIO_ENV == board
#include "../hal/esp32/app_hal.h"
#endif
#endif

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