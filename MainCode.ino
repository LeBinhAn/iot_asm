//Including libaries for reading sensor data
/*****/
#include <DHT_U.h>
#include <DHT.h>
/*****/

//Define pins
/*****/
#define DHTPIN 2
/*****/

//Define DHT type
/*****/
#define DHTTYPE DHT11
/*****/

//Init dht reader
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // define data variables
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  //Print data
  Serial.println("Start reading!");
  Serial.print(" Current temperature: ");
  Serial.println(t);
  Serial.print("Current humidity: ");
  Serial.println(h);
  
  Serial.println("");

  delay(1000);
  
  

}
