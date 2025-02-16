#include <Arduino.h>

const int RGB_LED = 8;

void setup() {
}

void loop() {
    rgbLedWrite(RGB_LED, 255,0,0);
    delay(500);
    rgbLedWrite(RGB_LED, 0,0,0);
    delay(500);
}