#include <Arduino.h>

#ifdef VM_DEBUG_GDB
#include "GDBStub.h"
#endif

#define ESP8266_LED 2

void setup() 
{
#ifdef VM_DEBUG_GDB
  Serial.begin(921600);
  gdbstub_init();
  // Add/extend the below delay if you want to debug the setup code
  delay(3000);
#endif
  pinMode(ESP8266_LED, OUTPUT);
}

void loop() 
{
  digitalWrite(ESP8266_LED, HIGH);
  delay(500);
  digitalWrite(ESP8266_LED, LOW);
  delay(500);
}