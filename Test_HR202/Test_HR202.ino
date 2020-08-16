//Testing HR202 Humidity Sensor
//On Arduino MEGA 2560 + ESP12 Board
//Guining Pertin - 16 Aug
//Should've read before
//This sensor I have only gives digital readings!

void setup() {
  // put your setup code here, to run once:
//  pinMode(A0, INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A0));
  delay(100);
}
