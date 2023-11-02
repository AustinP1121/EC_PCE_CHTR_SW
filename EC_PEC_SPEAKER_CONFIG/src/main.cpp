#include <Arduino.h>

void SetTone(int, int);

void setup() {
  Serial.begin(9600); 

  
}

void loop() {
  tone(3, 0); 
}

void SetTone(int toneFreq, int toneDuration)
{

}