#include <stdio.h>
#include <Arduino.h>
#include <LiquidCrystal.h>
#include "DHT.h"



int main(int argc, char **argv) {
  init();
  const int dhtPin = 12;
  const int backlight = 7;
  const int rs = 11, en = 10, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
  char buffer[20];
  pinMode(backlight, OUTPUT); 
  analogWrite(backlight, 128);
  DHT dht(dhtPin, DHT11);
  LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

  dht.begin();
  
  
  for(;;) {
    lcd.clear();
    float humidity = dht.readHumidity();
    float temp = dht.readTemperature(true);
    snprintf(buffer, sizeof(buffer), "Humidity: %d%%", (int)humidity);

    lcd.begin(16, 2);
    lcd.print(buffer);
    snprintf(buffer, sizeof(buffer), "Temperature: %dF", (int)temp);
    lcd.setCursor(0,1);
    lcd.print(buffer);
    delay(5000);
  }

}
