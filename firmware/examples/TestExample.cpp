#include "BlingButton.h"
#include "ButtonConfig.h"

BlingButton b = BlingButton();

void setup() {
  Serial.begin(9600);
  b.begin();
}

void loop() {
  // Use the library's initialized objects and functions
  b.listen();
  b.vibrate(200);
}