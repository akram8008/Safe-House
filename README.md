# Safe-House
We live in a modern world where most of our equipment has electronic circuits. But we don't always care about some cheap equipment that can somehow saveour live. In this project, we examined four dangerous situations that can be avoided with certain gadgets:
1.	Most people's homes can be entered by a thief when they are not at home. He will steal all the property and precious things. This event can cause a lot of damage to the homeowner.
2.	During a leakage in the sink, if the water leaks down to the floor, it can come in contact with electricity, it can become charged. This may lead to dangerous circumstances, such as a person walking into the kitchen with no knowledge of the water and getting shocked by electricity.
3.	If there is a gas leakage in the house, gas will flow out and many gases will react with electricity, causing an explosion.
4.	In many countries, during winter, a large amount of snow falls and gathers on the roof. They can either remain as snow or turn into icicles. Standing under these can prove dangerous, as there is always a risk of it sliding down.
To prevent these dangers, we have a home model with a control system using an Arduino Uno microcontroller and several sensors and detectors, including gas and smoke detectors, fuel deposits, heat insulation, a water pump, water level detection and heating. In the project, we used equipment to eliminate the four above risks:
- For the first situation, to protect the house from thieves, we put a sensor that measures the weight of the item and puts it near to the walls of the house. When the thief enters the house and clicks on the sensor, the signal will be sent to the Arduino. And the Arduino checks when the weight exceeds 30kg, then the Arduino turns on all ligh of the yard and siren to announce about thieve. The homeowner will receive a message on the screen and a message with voices.-
- For the second situation, we can use the detector to check the water level, and if a large amount of water is collected, the signal will be sent to the Arduino - control system. And Arduino closes the source of water and cuts off all electricity. The homeowner will receive a message on the screen and a message with voices.-
-	For the third situation, during a gas leakage, a signal is sent to the Arduino. Then, the Arduino will lock off all electronics and gas pipes. The homeowner will receive a message on the screen and a message with voices.
-	For the fourth situation, we use precipitation sensors for rain and snow, temperature sensor for measuring  temperature in celsius degrees and thermal sensors for heating roof. Only if there is rain or snow on the roof and the temperature is below 0 degrees, then signal be sent to the Arduino. After receiving the signal, the Arduino will activate the roof heating to avoid snow piling up on the roof. However, to save electricity, it will only activate the heating when there is snow, and not during rainfall. The homeowner will receive a message on the screen and a message with voices.


#  Безопасный  Дом 
Мы живем в современном мире, где большая часть нашего оборудования имеет электронные схемы. Но мы не всегда заботимся о каком-то недорогом оборудовании, которое может каким-то образом спасти жизни. В этом проекте мы рассмотрели четыре опасные ситуации, которые можно предотвратить с помощью отдельного оборудования.
1. Во многих случаях воры используют отсутствие владельцы домов. Они заходят внутрь и крадут их товары и драгоценные вещи. Это событие наносит большой ущерб домовладельцу.
2. Он может быть подключен к электричеству в случае разбрызгивания воды в ванной или на кухне, а также в случае накопления слишком большого количества воды. Это может быть очень опасная ситуация, например, если человек идет на кухню или в ванную, и если поставить свою ногу во влажное положение, это может быть связано с электричеством и ставит под угрозу свою жизнь.
3. Если в дом впрыскивается газовая турбина, газ будет вытекать, и многие газы будут реагировать с электричеством, вызывая взрыв.
4. Во многих странах зимой на крыше скапливается сильный снегопад. Они могут быть погружены в лед или сосулька льда . Ходить или стоять под ними опасно.
Чтобы предотвратить эти опасности, у нас есть домашняя модель с системой управления, использующей микроконтроллер Arduino Uno и несколько датчиков и детекторов, включая детекторы газа и дыма, осадки топлива, теплоизоляцию, водяной насос, обнаружение уровня воды и нагрев. В проекте мы использовали оборудование для устранения трех указанных выше рисков:
  a) В первом случае, чтобы защитить дом от воров, мы ввели систему чувствительность  тяжести, когда  вес человека или животного  находится в системе, лампы  вокруг дома и сигнализация, установленная в помещении, будут включены.
  b) Во втором случае мы можем использовать детектор для проверки уровня воды, и если будет собрано большое количество воды, сигнал Arduino будет отправлен в систему управления. А Ардуино закрывает источник воды и отключает все электричество. Домовладелец получит сообщение на том же экране
  c) Во третьем случае, когда выделяется жидкий газ, датчик обнаружения газа отправляется на Arduino. А Arduino закрывает магистральный газопровод, и в целях безопасности отключается электричество. Домовладелец получит сообщение на том же экране.
  d) В четвёртом случае, мы использовали датчик дождя, оборудование для обогрева крыши и датчик температуры. В случае снега датчик посылает сигнал в Arduino, который нагревает крышу, чтобы предотвратить накопление снега.
