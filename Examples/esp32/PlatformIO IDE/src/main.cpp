#include <Arduino.h>
#include <movingaverage.h>

MovingAverage sensorMov(20);
MovingAverage sensorMov2(20);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  int sensorValue1 = analogRead(35);
  int sensorValue2 = analogRead(32); 
  float adc1 = sensorMov.mafunc(sensorValue1); // Overloading the Function 
  float adc2 = sensorMov2.mafunc(sensorValue2);
  Serial.print("Movingaverage1:");
  Serial.println(adc1);
  Serial.print("SensorvalueRawData1:");
  Serial.println(sensorValue1);
  Serial.print("Movingaverage2:");
  Serial.println(adc2);
  Serial.println("SensorvalueRawData2:");
  Serial.println(adc1);
  delay(1);
}