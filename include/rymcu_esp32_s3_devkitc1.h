#ifndef RYMCU_ESP32_S3_DEVKITC1_H
#define RYMCU_ESP32_S3_DEVKITC1_H

#define LED_D3_PIN 18 // 主板上有个额外的LED灯，标为D3，根据电路图得知，与GPIO18连接

// 所有GPIO
// ref: https://docs.espressif.com/projects/esp-dev-kits/zh_CN/latest/esp32s3/esp32-s3-devkitc-1/user_guide_v1.1.html
#define GPIO_PIN_LIST {\
    4, 5, 6, 7, 15, 16, 17, 18, 8, 3, 46, 9, 10, 11, 12, 13, 14, \
    43, 44, 1, 2, 42, 41, 40, 39, 38, 37, 36, 35, 0, 45, 48, 47, 21, 20, 19 \
}

#endif //RYMCU_ESP32_S3_DEVKITC1_H
