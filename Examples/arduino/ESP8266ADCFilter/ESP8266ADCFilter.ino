#include <Arduino.h>
#include <C:\Users\basil\OneDrive\Belgeler\GitHub\MovingAverage\Examples\arduino\movingaverage.h>

MovingAverage sensorMov(20);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  int sensorValue1 = analogRead(A0);
  float adc1 = sensorMov.mafunc(sensorValue1);
  Serial.print("Movingaverage1:");
  Serial.println(adc1);
  Serial.print("SensorvalueRawData:");
  Serial.println(sensorValue1);
  delay(1);
}