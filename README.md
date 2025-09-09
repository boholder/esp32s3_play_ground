# A test project for RYMCU-ESP32S3-DevKitC-1-N8R2

Information about this board:
1. https://docs.platformio.org/en/latest/boards/espressif32/rymcu-esp32-s3-devkitc-1.html#board-espressif32-rymcu-esp32-s3-devkitc-1
2. https://rymcu.com/product/2
3. https://docs.espressif.com/projects/esp-dev-kits/zh_CN/latest/esp32s3/esp32-s3-devkitc-1/user_guide_v1.1.html

## Resolve "Error: libusb_open() failed with LIBUSB_ERROR_NOT_FOUND"

I'm using Windows 10, [this answer](https://stackoverflow.com/a/77934154/23093084) works for me: download [zadig](https://zadig.akeo.ie/), replace the driver of `Interface 2` with `libusbK (v3.1.0.0)` instead of original `WinUSB`.

PS: You might need to install [esp-idf](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/get-started/windows-setup.html) first to install the `USB JTAG/serial debug unit (Interface 2)` driver.
PPS: For installing esp-idf, download offline installer from [GitHub](https://github.com/espressif/idf-installer/releases/) is way faster than using online installer.
