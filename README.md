# Moving Average in Cpp   الوسط المتحرك 
 
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

1-

## Installation
```bash

```
## Usage
```cpp
..

```
## Contributing



Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.



Please make sure to update tests as appropriate.
