# A test project for RYMCU-ESP32S3-DevKitC-1-N8R2

Information about this board:
1. https://docs.platformio.org/en/latest/boards/espressif32/rymcu-esp32-s3-devkitc-1.html#board-espressif32-rymcu-esp32-s3-devkitc-1
2. https://rymcu.com/product/2
3. https://docs.espressif.com/projects/esp-dev-kits/zh_CN/latest/esp32s3/esp32-s3-devkitc-1/user_guide_v1.1.html

## Resolve "Error: libusb_open() failed with LIBUSB_ERROR_NOT_FOUND"

I'm using Windows 10, [this answer](https://stackoverflow.com/a/77934154/23093084) works for me: download [zadig](https://zadig.akeo.ie/), replace the driver of `Interface 2` with `libusbK (v3.1.0.0)` instead of original `WinUSB`.

PS: You might need to install [esp-idf](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/get-started/windows-setup.html) first to install the `USB JTAG/serial debug unit (Interface 2)` driver.
PPS: For installing esp-idf, download offline installer from [GitHub](https://github.com/espressif/idf-installer/releases/) is way faster than using online installer.

## Once you use pioarduino espressif32

Install it with `platform = https://github.com/pioarduino/platform-espressif32/releases/download/stable/platform-espressif32.zip` in `platformio.ini` for Arduino 3.x support.

> Even if go back to `platform = espressif32`, pio still use pioarduino's framework. It (`platform = espressif32`) takes its place as the “highest installed platform version”. If you want to go back to PlatformIO’s (outdated) espressif32 version, you would have to specify them by version number. e.g., `platform = espressif32@6.11.0`.
> 
> -- https://community.platformio.org/t/bb-spi-lcd-missing-esp-psram-h/48019/10

## Switch to WSL2

After struggly figuring out that:

- [`pioarduino/platform-espressif32` is unhappy with Windows](https://github.com/pioarduino/platform-espressif32/issues/289#issuecomment-3288609760) (inner uv error: `Error: Failed to install Python dependencies into penv`)
- CLion on Windows [can't use platformio-core in WSL](https://youtrack.jetbrains.com/issue/CPP-46558/CLion-on-Windows-cant-use-platformio-core-in-WSL) with (JB's) official platformio plugin
- `lvgl` library doesn't work (without twisted) with MSYS2 [[1]](https://github.com/lvgl/lv_platformio/issues/60) [[2]](https://github.com/lvgl/lv_platformio/issues/75)

I decide to move everything (platformio-core, CLion, project files) into WSL2 and "remote develop" with JetBrains Gateway. Now everyone (me included) except my old laptop is happy and `platformio-core` can successfully reloads config (`pio project config`, `pio project metadata`) and builds project (`pio run`). Yes, the performance of CLion under WSL2 is terrible, hope JB developers can fix the plugin issue quickly.
