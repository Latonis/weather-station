#include <Arduino.h>
#include "DHT.h"

int main(int argc, char **argv) {
  init();

  DHT dht(6, DHT11);
  dht.begin();
  Serial.begin(9600);

  for(;;) {
    float humidity = dht.readHumidity();
    float temp = dht.readTemperature(true);

    Serial.print("Humidity:\t"); Serial.println(humidity);
    Serial.print("Temperature:\t"); Serial.println(temp);
    Serial.println("=========\n");
    delay(5000);
  }

}
