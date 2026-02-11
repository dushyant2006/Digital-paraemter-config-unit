#include <Arduino.h>
#include <Wire.h>
#include<Adafruit_GFX.h>
#include<Adafruit_SSD1306.h>

#define ScreenWidth 128
#define ScreenHeight 64
// oled I2c address(most common is 0*3c
#define oled_ADDR 0x3C

Adafruit_SSD1306 display(ScreenWidth, ScreenHeight,&Wire,-1);

void setup() {
Serial.begin(9600);
    if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR)) {
        Serial.println("OLED NOT FOUND");;
        while (true);
    }
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);

    // Display text
    display.setCursor(0, 0);
    display.println("Arduino UNO R4");
    display.println("OLED with I2C");
    display.println("Hello Students!");


void loop() {
// write your code here
}