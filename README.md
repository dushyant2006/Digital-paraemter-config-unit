# Project README

File: `README.md`  
Source: `src/main.cpp`

## Using CLion
- Open the project folder in `CLion 2025.3.2`.
- Configure toolchain and CMake as required by your Arduino workflow:
  - Option A: Use PlatformIO plugin / PlatformIO as external tool in CLion.
  - Option B: Use `arduino-cli` to build/upload, and run it from CLion Run/External Tools.
- Ensure the selected toolchain targets the Arduino board before upload (select correct board in PlatformIO or Arduino CLI).

## IDE Version
- Tested with `CLion 2025.3.2` on Windows.

## Code overview
- `src/main.cpp` initializes an SSD1306 128x64 I2C OLED and prints static lines:
  - Initializes serial at 9600.
  - Attempts to initialize the OLED at I2C address `0x3C`.
  - On success prints:
    - `Arduino UNO R4`
    - `OLED with I2C`
    - `Hello Students!`
  - Loop is empty (no runtime updates).

## Libraries
- `Adafruit_SSD1306` — driver for SSD1306 OLED displays.
- `Adafruit_GFX` — graphics primitives used by SSD1306 driver.
- `Wire` — Arduino I2C library (bundled with Arduino core).
- Arduino core for the target board (Arduino UNO R4 / AVR or R4 core as appropriate).
