//Testing DLM35D Temperature Sensor
//On Arduino MEGA 2560 + ESP12 Board
//Guining Pertin - 17 Aug
//0 to +100 C
//Linear output voltage at 10mV per degree Celsius

#define sen1 A0
#define sen2 A1

float val_sen1;
float temp1;
float val_sen2;
float temp2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  val_sen1 = analogRead(sen1);
  val_sen2 = analogRead(sen2);
  //Since voltage increases by 10mV for every degree Celsius
  //Total temp that can be represented is 5/10m C = 500 C
  //This is the variation along 1024 units
  //So for each unit, the temp is 500/1024 C
  temp1 = val_sen1*500.0/1024.0;
  temp2 = val_sen2*500.0/1024.0;
  Serial.print("Temperatures: ");
  Serial.print(temp1);
  Serial.print('\t');
  Serial.println(temp2);
  delay(1000);
}
