#include <Arduino.h>

#include "rymcu_esp32_s3_devkitc1.h"


void setup()
{
    for (const int i : GPIO_PIN_LIST)
    {
        pinMode(i, OUTPUT);
    }
}

void loop()
{
    for (const int i : GPIO_PIN_LIST)
    {
        digitalWrite(i, HIGH);;
    }
}
