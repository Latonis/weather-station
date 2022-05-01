#include <Arduino.h>

int main(int argc, char **argv) {
  init();
  
  pinMode(6, OUTPUT);
  Serial.begin(9600);

  for(;;) {
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(6, LOW);
    delay(1000);
  }

}
