#ifndef FASTLED_H
#define FASTLED_H

#include <FastLED.h>

// 定义 WS2812 灯带连接的 GPIO 引脚
#define LED_PIN     38
// 定义灯珠数量
#define NUM_LEDS    1

// 定义 FastLED 数组
extern CRGB leds[NUM_LEDS];

void init_fastled();
void fastled();

#endif //FASTLED_H
