#include <Arduino.h>
int LEDpin=7, delaytime = 2000;
void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDpin,HIGH);
  Serial.println("LED On");
  delay(delaytime);
  digitalWrite(LEDpin,LOW);
  Serial.println("LED Off");
  delay(delaytime);
}

