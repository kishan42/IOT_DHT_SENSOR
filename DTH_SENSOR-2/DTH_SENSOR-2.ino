#include "dht.h"
dht DHT;
void setup(){
  Serial.begin(9600);
  delay(500);
  Serial.println("HUMIDITY AND TEMPRATURE OF ATMOSPEARE :");
}

void loop()
{

  DHT.read11(A1);
  Serial.print("\ncurrent humidity :");
  Serial.print(DHT.humidity);
  Serial.print("%");
  Serial.print("\ttemrature :");
  Serial.print(DHT.temperature);
  Serial.print("C");
  delay(5000);
}
