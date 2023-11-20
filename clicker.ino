#include "Keyboard.h"

const int leftButton = 3;
const int rightButton = 4;

void setup() { 
  pinMode(leftButton, INPUT);
  pinMode(rightButton, INPUT);

  Serial.begin(9600);
  Keyboard.begin();
}

int leftButtonState = LOW;
int rightButtonState = LOW;

void loop() {
  
  if (digitalRead(leftButton) != leftButtonState) {
    leftButtonState = !leftButtonState;
    if (leftButtonState == HIGH) {
      Keyboard.write(KEY_LEFT_ARROW);
    }
  }
  if (digitalRead(rightButton) != rightButtonState) {
    rightButtonState = !rightButtonState;
    if (rightButtonState == HIGH) {
      Keyboard.write(KEY_RIGHT_ARROW);
    }
  }
}
