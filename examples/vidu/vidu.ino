#include "VLUAVG.h"
#include "DHT.h"

#define DHTPIN 2  //chân đọc dữ liệu của dht   
#define DHTTYPE DHT22 //kiểu cảm biến
DHT dht(DHTPIN, DHTTYPE); //khai báo dht

VLUAVG sensor;

void setup() {
  Serial.begin(9600);
}

void loop() {
  float temperature = readTemperature();
  float humidity = readHumidity();

  sensor.addReading(temperature, humidity);
  
  float avgTemp = sensor.getAverageTemperature();
  float avgHumidity = sensor.getAverageHumidity();
  Serial.print("Avg. Temperature: ");
  Serial.println(avgTemp);
  Serial.print("Avg. Humidity: ");
  Serial.println(avgHumidity);

}