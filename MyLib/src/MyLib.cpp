#include "Amber.h"
#include <Arduino.h>

void MyLib::setup () {
  Serial.begin(9600);

  Serial.println("start setup");
  m_member = 42;
  Serial.println("setup completed");
}

void MyLib::loop () {
  helloWorld();
}

void MyLib::helloWorld () {
  ++m_member;
  Serial.println("hello world:");
  Serial.println(m_member);
}
