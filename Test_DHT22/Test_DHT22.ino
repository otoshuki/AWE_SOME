//Testing DHT22/AM2302 Humidity Sensor
//On Arduino MEGA 2560 + ESP12 Board
//Guining Pertin - 16 Aug
//Humidity: 0-100%, 2-5% Accuracy
#include <DHT.h>

#define TYPE DHT22
#define PIN1 22
#define PIN2 23

DHT dht1(PIN1, TYPE);
DHT dht2(PIN2, TYPE);

float hum1;
float hum2;

void setup() {
  // put your setup code here, to run once:
//  pinMode(A0, INPUT);
  Serial.begin(115200);
  dht1.begin();
  dht2.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  hum1 = dht1.readHumidity();
  hum2 = dht2.readHumidity();
  Serial.print("Humidity values: ");
  Serial.print(hum1);
  Serial.print('\t');
  Serial.println(hum2);
  //Data can be collected every 2 seconds only
  delay(2000);
}
