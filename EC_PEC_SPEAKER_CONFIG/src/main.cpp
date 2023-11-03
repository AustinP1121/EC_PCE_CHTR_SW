#include <Arduino.h>
#include <time.h>

void StartSpeaker();
void Start30kHz();
void Start35kHz();
void Start40kHz();
void Start43kHz();
void Start45kHz();
void Start50kHz();
void Start55kHz();
void Start60kHz();
void setup() {
  //set pin 3 (DAC) for the speaker 
  pinMode(3, OUTPUT);

  Serial.begin(9600);

  Serial.write("\nSetting up speaker...");
}

void loop() {
  StartSpeaker();
}

void StartSpeaker()
{
  Start30kHz();
  Start35kHz();
  Start40kHz();
  Start43kHz();
  Start45kHz();
  Start50kHz();
  Start55kHz();
  Start60kHz();
}

void Start30kHz()
{
  Serial.write("\nStarting speaker at 30 kHz...\n");
  tone(3, 30000, 20000);
  delay(19998);
  Serial.write("\nEnding 30 kHz...\n");
}

void Start35kHz()
{
  Serial.write("\nStarting speaker at 35 kHz...\n");
  tone(3, 35000, 20000);
  delay(19998);
  Serial.write("\nEnding 30 kHz...\n");
}

void Start40kHz()
{
  Serial.write("\nStarting speaker at 40 kHz...\n");
  tone(3, 40000, 20000);
  delay(19998);
  Serial.write("\nEnding 40 kHz...\n");
}

void Start43kHz()
{
  Serial.write("\nStarting speaker at 43 kHz...\n");
  tone(3, 43000, 20000);
  delay(19998);
  Serial.write("\nEnding 43 kHz...\n");
}

void Start45kHz()
{
  Serial.write("\nStarting speaker at 45 kHz...\n");
  tone(3, 45000, 20000);
  delay(19998);
  Serial.write("\nEnding 45 kHz...\n");
}

void Start50kHz()
{
  Serial.write("\nStarting speaker at 50 kHz...\n");
  tone(3, 50000, 20000);
  delay(19998);
  Serial.write("\nEnding 50 kHz...\n");
}

void Start55kHz()
{
  Serial.write("\nStarting speaker at 55 kHz...\n");
  tone(3, 55000, 20000);
  delay(19998);
  Serial.write("\nEnding 55 kHz...\n");
}

void Start60kHz()
{
  Serial.write("\nStarting speaker at 60 kHz...\n");
  tone(3, 60000, 20000);
  delay(19998);
  Serial.write("\nEnding 60 kHz...\n");
}
