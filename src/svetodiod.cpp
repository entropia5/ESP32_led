#include <Arduino.h>

const int leds_array[] = {2, 4, 18, 19, 22, 23, 26, 27};
const int num_leds = sizeof(leds_array) / sizeof(leds_array[0]); 
const int delayTime = 1000;

void setup() {
    for (int a = 0; a < num_leds; a++) {
        pinMode(leds_array[a], OUTPUT);
    }
}

void loop() {
    for (int a = 0; a < num_leds; a++) {
        for (int b = 0; b < num_leds; b++) {
            digitalWrite(leds_array[b], (a == b) ? HIGH : LOW); 
        }
        delay(delayTime);
    }
}