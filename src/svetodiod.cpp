#include <Arduino.h>

const int led1 = 2;  
const int led2 = 4;  
const int led3 = 18; 
const int led4 = 19;

void setup() {
    pinMode(led1, OUTPUT); 
    pinMode(led2, OUTPUT);  
    pinMode(led3, OUTPUT); 
    pinMode(led4, OUTPUT);
}

void loop() {
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(500);   

    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(500);  

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    delay(500);  

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(500);  
    
} 