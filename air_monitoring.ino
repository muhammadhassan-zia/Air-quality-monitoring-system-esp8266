#include <ESP8266WiFi.h>
#include <DHT.h>

// ----------- Pin Definitions -----------
#define DHTPIN D4        // DHT11 data pin
#define DHTTYPE DHT11
#define MQ135_PIN A0     // Analog pin for MQ-135

// ----------- Initialize Sensors -----------
DHT dht(DHTPIN, DHTTYPE);

// ----------- Variables -----------
float temperature;
float humidity;
int airQuality;

// ----------- Setup -----------
void setup() {
  Serial.begin(9600);
  dht.begin();

  Serial.println("Air Quality Monitoring System Started...");
}

// ----------- Loop -----------
void loop() {
  // Read DHT11
  humidity = dht.readHumidity();
  temperature = dht.readTemperature();

  // Read MQ-135
  airQuality = analogRead(MQ135_PIN);

  // Check if DHT reading failed
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Display Readings
  Serial.println("----- Sensor Data -----");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.print("Air Quality (Analog): ");
  Serial.println(airQuality);

  // Basic Air Quality Status
  if (airQuality < 300) {
    Serial.println("Air Quality: GOOD");
  } 
  else if (airQuality < 600) {
    Serial.println("Air Quality: MODERATE");
  } 
  else {
    Serial.println("Air Quality: POOR");
  }

  Serial.println("------------------------\n");

  delay(2000); // 2 sec delay
}
