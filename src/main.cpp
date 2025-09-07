#include <Arduino.h>
#include "rymcu_esp32_s3_devkitc1.h"


void setup()
{
    pinMode(LED_D3_PIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_D3_PIN, HIGH);
    delay(1000);
    digitalWrite(LED_D3_PIN, LOW);
    delay(1000);
}
