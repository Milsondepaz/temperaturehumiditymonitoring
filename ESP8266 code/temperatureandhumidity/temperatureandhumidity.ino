
#include "DHT.h"

#define DHTTYPE DHT11

// DHT Sensor
uint8_t DHTPin = 13; 
               
// Initialize DHT sensor.
DHT dht(DHTPin, DHTTYPE);                

float Temperature;
float Humidity;

//int greenLed = 13;
int redLed = 12;
void setup() {

 Serial.begin(9600);

 Serial.println("DHTxx test!");

 pinMode(DHTPin, INPUT);

 dht.begin();  

  
  //pinMode(greenLed, OUTPUT);     
  //pinMode(redLed, OUTPUT); 
}



void loop() {

  Temperature = dht.readTemperature();
  Humidity = dht.readHumidity(); 

   Serial.println(Temperature);
   Serial.println(Humidity);

   delay(2000);                      




  
  //digitalWrite(greenLed, LOW);  
  //digitalWrite(redLed, HIGH); 
  //delay(1000);                      
  //digitalWrite(greenLed, HIGH);  
  //digitalWrite(redLed, LOW); 
  //delay(2000);                      
}
