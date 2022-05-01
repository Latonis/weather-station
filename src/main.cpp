#include <Arduino.h>
#include <LiquidCrystal.h>
#include "DHT.h"
#include <stdio.h>


int main(int argc, char **argv) {
  init();
  const int dhtPin = 12;
  const int rs = 11, en = 10, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

  DHT dht(dhtPin, DHT11);
  LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

  dht.begin();

  for(;;) {
    float humidity = dht.readHumidity();
    float temp = dht.readTemperature(true);

    Serial.print("Humidity:\t"); Serial.println(humidity);
    Serial.print("Temperature:\t"); Serial.println(temp);
    delay(5000);
  }

}
