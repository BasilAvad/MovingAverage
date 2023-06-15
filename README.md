<h1 align="center"> Moving Average in Cpp </h1>
<h1 align="center"> الوسط المتحرك </h1>

Filter your sensor data with moving average, making your system stable and easy to control.

## Explanation of moving average formula
 
```bash
- تعريف: الأوساط المتحركة تستخدم في توهين التعرجات الحادة في البيانات الرقمية بقصد معرفة الاتجاه العام لها..
لنفرض على سبيل المثال توافر البيانات التالية 
T [ 1 | 2 | 3 | 4  | 5 | 6  | 7 | 8  | 9  | 10| 11 | 12 | 13 ]
X [ 5 | 3 | 7 | 10 | 5 | 12 | 2 | 17 | 19 | 5 | 20 | 15 | 30 ]
حيث ترمز T للفترة الزمنية و X الى القيمة المقروءة من الحساس 

على سبيل المثال لو قمنا بحساب المتوسط للقيم الثلاث الأولى ثم الثلاث الثانية نحصل على السلسلة الآتية:
1-  ma(3) = (5 + 3 + 7 ) / 3 = 5.0000
2-  ma(3) = (3 + 7 + 10) / 3 = 6.6667
3-  ma(3) = (7 + 10 + 5) / 3 = 7.3333
.
.
.
.
10- ma(3) = (5 + 20 + 15) / 3 = 13.3333
11- ma(3) = (20 + 15 + 30) / 3 = 21.6667
كلما زاد عدد الفترات الداخلة في حساب المتوسط ازداد التوهين وقلت لاعوجاجات و الانكسارات في المنحنى الممثل ل الوسط المتحرك ال ان حساب الوسط المتحرك (3)ma يؤدي الى توهين النكسارات اكثر من (3)ma و (7)ma أكثر و أكثر....
```
-> Read More About: [Moving Average ](https://en.wikipedia.org/wiki/Moving_average).

## Explanation and distribution of projects
 * [Arduino](https://github.com/BasilAvad/MovingAverage/tree/main/Examples/arduino).
 ```bash
  1- Support all arduino boards contain ADC.
  2- Support all Node MCU boards contain ADC like (ESP8266).
 ```
 * [ESP32](https://github.com/BasilAvad/MovingAverage/tree/main/Examples/esp32).
 ```bash
  1- Support all ESP32 boards contain ADC.
 ```
## Installation
Use the Arduino IDE [Arduino IDE](https://www.arduino.cc/en/software) or PlatformIO IDE in VS Code [PlatformIO IDE](https://platformio.org) to update this code.
```bash

git clone https://github.com/BasilAvad/MovingAverage

```
## Usage
* Include and Call the header file in your project.
```cpp
#include <movingaverage.h>
```
* Create an object of MovingAverage using the constructor.
```cpp
MovingAverage sensor1(20);
```
*  Call a member function of the object in the loop function.
```cpp
void loop()
{
  int sensorValue1 = analogRead(MicrocontrollerADCPin);
  float result = sensor1.mafunc(sensorValue1);
  delay(2)
}
```
## Moving Average Test and Result
*  The blue line is sensor raw data.
*  The red line is the sensor data with a moving average.

![COM4 6_15_2023 2_03_10 PM](https://github.com/BasilAvad/MovingAverage/assets/69681817/bbe3f810-01bb-46a5-8662-a3d24ccba380)
* For more watch the video -> 
[Video](https://github.com/BasilAvad/MovingAverage/assets/69681817/a9d82036-8858-4e28-aa69-52e078575ddf)


## Contributing



Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.



Please make sure to update tests as appropriate.
