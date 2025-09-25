#include <Arduino.h>
#include <bb_spi_lcd.h>

BB_SPI_LCD lcd;


void setup()
{
  lcd.begin(DISPLAY_WS_LCD_169);
  lcd.setRotation(90);
  // The default orientation is portrait. To set landscape mode use setRotation(270)
  lcd.fillScreen(TFT_BLACK); // the default is to not keep a local copy of the framebuffer since it's large
  lcd.setTextColor(TFT_GREEN); // all functions will send data to the display and be visible immediately
  lcd.setFont(FONT_12x16);
  lcd.println("Generic SPI display");
  lcd.println("Using bb_spi_lcd");
}

void loop()
{
}
