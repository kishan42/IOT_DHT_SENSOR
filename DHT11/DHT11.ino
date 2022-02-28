#include "dht.h"
//#define dht_apin A1 // Analog Pin sensor is connected to
dht DHT;
void setup()
{ 
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
}
void loop()
{
  //DHT.read11(dht_apin);
  DHT.read11(A1);
  Serial.print("Current humidity = ");
  Serial.print(DHT.humidity);
  Serial.print("%  ");
  Serial.print("temperature = ");
  Serial.print(DHT.temperature); 
  Serial.println("C  ");
  delay(5000); 
}
