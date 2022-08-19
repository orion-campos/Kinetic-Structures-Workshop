# ABOUT

Kinetic Structures Workshop, from January 7th to January 14th, 2018, at Bezalel Academy of Arts and Design, Department of Architecture, Jerusalem, Israel, in which 4th and 5th year students of Architecture where taught by Orion Campos, during a one week workshop, the basics on electronics and Arduino to create interactive models.<br>

At the first two days, classes of basic Electronic, Arduino, Grasshopper 3D and Firefly took place. Teaching from the very beginning electronic concepts, the classes created a base for the participants to develop their own projects during the remain of the week.<br>
At the second phase, the participants informed about their projects they were developing at school alone or in couples and the tutors guided them to possible outputs they could aim. They were divided into four groups with two projects per group. The division was made based on technical similarities among them i.e. both projects would use temperature sensors, both projects would use LEDÕs, both projects would use a distance sensor, both projects would use Firefly. This division was made in order to optimize the time to develop the code for each group and to assemble the electronics of each group, since both would use the same components and (almost) the same code. Grouping them by technical similarities would encourage the groups to develop the projects together and learn and help each other.<br>
The final working prototypes were presented after 7 days, made from people who had none experience at electronics.<br>

Conceptual development, organization, creation of classes and main tutoring by [Orion Campos](orioncampos@proton.me)<br>
Organization and assistant tutoring by Ran Shabtay and Natanel Elfassy<br>

- **GROUP 1.1** Michal Weintraub and Doron Winter
- **GROUP 1.2** Noa Guy and Mordechai Bachar
- **GROUP 2.1** Sapir Dror and Eran Damari
- **GROUP 2.1** Yuval Bar-Adon
- **GROUP 3.1** David Goncalves, Yair Ben David, Eliran Buzaglo and Maria Korpachev
- **GROUP 3.2** Chen Gabay and Nelly Panchenko
- **GROUP 3.3** Tal Chiki
- **GROUP 4.1** Itay Stoler

[Video of the workshop results](https://vimeo.com/295022593)

- All the files of the Arduino codes, images, Rhinoceros 3D, Grasshopper 3D, etc. are available for download at [GitHub](https://github.com/orion-campos/Kinetic-Structures-Workshop)

- This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. [![creative](https://img.shields.io/badge/Creative%20Commons-EF9421?style=for-the-badge&logo=creativecommons&logoColor=white)](https://creativecommons.org/)

---
# FILE MAP

### ARDUINO
- 1_blink
	- 1_blink.ino
	- blink.jpg
- 2_rgb
	- 2_rgb.ino
	- 2_rgb.jpg
- 3_photoresistor
	- 3_photoresistor.ino
	- 3_photoresistor.jpg
- 4_IRDS
	- 4_IRDS.ino
	- 4_IRDS.jpg
- 5_temp_hum
	- 5_temp_hum.ino
	- 5_temp_hum.jpg
- 6_servo
	- 6_servo.ino
	- 6_servo.jpg
	- 6_servo_power.jpg
- 7_servo_IRDS
	- 7_servo_IRDS.ino
	- 7_servo_IRDS.jpg

### GRASSHOPPER3D
- turning_tower.3dm
- turning_tower.gh
- turning_tower.png

### FIREFLY
- FIREFLY.ino
- FIREFLY.jpg
- firefly_turning_tower.3dm
- firefly_turning_tower.gh
- firefly_turning_tower.png
- 110920_Firefly_Users_Guide.pdf

### PROJECTS
- group1.1
	- group1.1.ino
	- group1.1.jpg
	- group1.1.pdf
- group1.2
	- group1.2.ino
	- group1.2.jpg
	- group1.2.pdf
- group2.1
	- group2.1.ino
	- group2.1.jpg
	- group2.1.pdf
- group2.2
	- group2.2.ino
	- group2.2.jpg
	- group2.2.pdf
- group3.1
	- group3.1.ino
	- group3.1.jpg
	- group3.1.pdf
- group3.2
	- group3.2.ino
	- group3.2.jpg
- group4
	- group4.ino
	- group4.jpg
	- group4.gh

### README
---
# ARDUINO

### 1_blink
Blink<br>
Turns on an LED on and off repeatedly.<br>
It is possible to use the on-board LED. Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO it is attached to digital pin 13.
If desired, a 5mm LED can be used on digital pin 13. If so, it is not necessary to use a resistor, since the pin 13 allready has a resistor attached.<br>
Output:<br>
1x 5mm LED<br>
1x 220O resistor (if the digital pin 13 is not used)<br>
- modified May 8th, 2014 by Scott Fitzgerald<br>
- modified September 2nd, 2016 by Arturo Guadalupi<br>
- modified September 8th, 2016 by Colby Newman<br>
- modified May 4th, 2017 by [Orion Campos](https://github.com/orion-campos)<br>

### 2_rgb
RGB LED<br>
Turn on an RGB LED with a series of predetermined colors, mixing values of red, green and blue light.<br>
Output:<br>
1x RGB LED<br>
3x 560KO resistor<br>
- created November 30th, 2012 by [Simon Monk](www.adafruit.com)<br>
- modified May 4th, 2017 by [Orion Campos](https://github.com/orion-campos)<br>

### 3_photoresistor
Photoresistor<br>
Turn a LED on by changing it brightness according to the values read by a photoresistor.<br>
Display the read values and the remapped values on the Serial Monitor.<br>
Input:<br>
1x Photo cell (CdS photoresistor)<br>
1x 10KO resistor<br>
Output:<br>
1x 5mm LED<br>
1x 220O resistor<br>
- created May 4th, 2017 by [Orion Campos](https://github.com/orion-campos)<br>

### 4_IRDS
Infrared Distance Sensor (IRDS)<br>
Control the brighteness of a LED according to the values read by an Infrared Distance Sensor (IRDS), turning the LED brighter if the distance sensor reads a higher value (closer object).<br>
Display the read values and the remapped values on the Serial Monitor.<br>
Input:<br>
1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)<br>
Output:<br>
1x 5mm LED<br>
1x 220O resistor<br>
- created May 4th, 2017 by [Orion Campos](https://github.com/orion-campos)<br>

### 5_temp_hum
Temperature and Humidity Sensor<br>
Connect the DHT-22, also named as AM2302, a relative humidity and temperature sensor to an Arduino, and turn on an LED with an 'IF' statement.<br>
In this code the LED turn on if the relative humidity is higher than 70%, which could be achieved by breathing very closely to the sensor.<br>
Display the read values on the Serial Monitor.<br>
Input:<br>
1x DHT-22 (AM2302)<br>
1x 10KO resistor<br>
Output:<br>
1x 5mm LED<br>
1x 220O resistor<br>
- created July 1st, 2015 by [Michalis Vasilakis](www.ardumotive.com)<br>
- edited May 4th, 2017 by [Orion Campos](https://github.com/orion-campos)<br>

### 6_servo
Servo Motor Sweep<br>
Sweeps one Micro Servo Motor back and forth across 180 degrees using two 'FOR' statements.<br>
Output:<br>
1x HXT900 Micro Servo 1.6kg / 0.12sec / 9g<br>
- created August 18th, 2015 by [SM](https://www.arduino.cc/en/Tutorial/Sweep)<br>
- modified May 4th, 2017 by [Orion Campos](https://github.com/orion-campos)<br>

### 7_servo_IRDS
Two Servo Motors and one Infrared Distance Sensor (IRDS)<br>
Control the angle of two Servo Motors according to the values read by an Infrared Distance Sensor (IRDS), turning the Servo Motors on oposite directions if the distance sensor reads a higher value (closer object).<br>
Display the read values and the remapped values on the Serial Monitor.<br>
Input:<br>
1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)<br>
Output:<br>
2x HXT900 Micro Servo 1.6kg / 0.12sec / 9g<br>
1x 2.1mm DC barrel jack<br>
- created May 4th, 2017 by [Orion Campos](https://github.com/orion-campos)<br>

---

# GRASSHOPPER 3D

### turning_tower
Turning Tower<br>
From a closed and planar curve created in Rhinoceros 3D, moved into the axis Z by a series of 100 values, rotated by a range of 100 values from 0º to 360º and scaled by a range of 100 values from 10% to 100%; the curves were then transformed into a lofted surface and a planar surface, representing a skyscraper skin and its floors.<br>
- created May 4th, 2017 by [Orion Campos](https://github.com/orion-campos)<br>

---
# FIREFLY

### firefly_turning_tower
Turning Tower<br>
From a closed and planar curve created in Rhinoceros 3D, moved into the axis Z by a series of 100 values, rotated by a range of 100 values from 0º to a specific angle determined by the plug-in Firefly and scaled by a range of 100 values from 10% to 100%; the curves were then transformed into a lofted surface and a planar surface, representing a skyscraper skin and its floors.<br>
The maximum rotation angle of the floors are remaped values read from a potentiometer connected to an Arduino <https://www.arduino.cc/>, and communicating with Grasshopper3D with the plug-in [Firefly](http://www.fireflyexperiments.com/).<br>
- created May 4th, 2017 by [Orion Campos](https://github.com/orion-campos)<br>

---
# PROJECTS

## Group1.1
**Opening Mechanism Triggered by Humidity**
Create a module of an opening mechanism for a building facade, which would open if the internal humidity is higher than 60%, enabling the air circulation inside the building to improve the environment comfort, and closing if the internal humidity is less than 60% to preserve the interior atmosphere.<br>
For optimization of the materials and movable pieces, each module would be opened by only one strong servo (DF15 Metal Gear Servo - 15kg). This servo would rotate four cables at the same time, which would then open four different paper tentacles covered with a light and elastic white fabric that covers the paper tentacles and the cables,givingg structuralstrengthh to the module.<br>
Concept of project done by Michal Weintraub and Doron Winter under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture.<br>
Jerusalem, January 7th to 14th, 2018<br>
**Input:**
- 1x DHT-22 (AM2302)
- 1x 10K½ resistor
**Output:**
- 1x DF15 Metal Gear Servo (15kg)
- 1x 2.1mm DC barrel jack
- 1X Switching Power Supply - Selectable Output 3-12VDC 1000mA

created January 10th, 2018 by [Orion Campos](https://github.com/orion-campos)
This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. [![creative](https://img.shields.io/badge/Creative%20Commons-EF9421?style=for-the-badge&logo=creativecommons&logoColor=white)](https://creativecommons.org/)

## Group1.2
**Automated Thermoplastic Triggered by Temperature**
Create a device that twist a piece of Thermoplastic inside a bowl of hot water.<br>
The Thermoplastic would be inside a glass bowl and when this bowl would be filled with hot water, the Thermoplastic would be twisted by a series of cables and metal wires attached to two servos.<br>
The servos would execute a series of predetermined movements and would it be triggered by a temperature sensor. When the water reaches a specific temperature, the servos start to rotate.<br>
Concept of project done by Noa Guy and Mordechai Bachar under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture.<br>
Jerusalem, January 7th to 14th, 2018<br>
**Input:**
- 1x DHT-22 (AM2302)
- 1x 10K½ resistor
**Output:**
- 2x Futaba S3003 Servo Motor
- 1x 2.1mm DC barrel jack
- 1X Switching Power Supply - Selectable Output 3-7VDC 1000mA

created January 10th, 2018 by [Orion Campos](https://github.com/orion-campos)
This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. [![creative](https://img.shields.io/badge/Creative%20Commons-EF9421?style=for-the-badge&logo=creativecommons&logoColor=white)](https://creativecommons.org/)

## Group2.1
**Lightning System Triggered by Light**
The architectural project consisted of a canopy for a public street. To give the function of a streetlight to the element, it was thought a lightning system that would be attached to this canopy, giving it an additional function.<br>
The lights would be turned on automatically after evening, by a series of light sensors reading the environment light.<br>
Concept of project done by Sapir Dror and Eran Damari under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture.<br>
Jerusalem, January 7th to 14th, 2018<br>
**Input:**
- 1x Photo cell (CdS photoresistor)
- 1x 10K½ resistor
**Output:**
- 4x 5mm LED

created January 10th, 2018 by [Orion Campos](https://github.com/orion-campos)
This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. [![creative](https://img.shields.io/badge/Creative%20Commons-EF9421?style=for-the-badge&logo=creativecommons&logoColor=white)](https://creativecommons.org/)

## Group2.2
**Visual Representation Triggered by Distance**
Based on a research done by the student, using a drone to collect data from a terrain, the project developed as a representation of the information collected by the drone as if it was analyzing the terrain with two infra-red distance sensors.<br>
For the project, two SHARP IR distance sensor read the distance of a user (it's hand) and translate this information turning on or off four very bright 3W RGB LED's.<br>
Those bright RGB's are attached to layers of acrylic, engraved with a graphical representation of the studied terrain. By refraction of the light, the engraved lines on the acrylic surface are illuminated.<br>
Concept of project done by Yuval Bar-Adon under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture.<br>
Jerusalem, January 7th to 14th, 2018<br>
**Input:**
- 1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
**Output:**
- 4x F3W-9W RGB LED
- 1x 2.1mm DC barrel jack
- 1X Switching Power Supply - Selectable Output 3-7VDC 1000mA

created January 10th, 2018 by [Orion Campos](https://github.com/orion-campos)
This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. [![creative](https://img.shields.io/badge/Creative%20Commons-EF9421?style=for-the-badge&logo=creativecommons&logoColor=white)](https://creativecommons.org/)

## Group3.1
**Automated Movement Triggered by Distance**
The students of this group had one common theme along their research, which was a bottom up approach to the morphogenesis of architecture. They were also interested in a form finding approach exploring different materials.<br>
Because of those characteristics, it was suggested to not do an object with an end of itself, but a tool to help them find the form they where looking.<br>
Similar to a random machine that creates impracticable outputs, two servos would rotate based on the distance read from a Infra-red distance sensor, which would be operated by the user. The servos would have laser-cut patterns attached which would rotate against a white fabric with different grains on top, that would rearrange themselves to the new geometry of the tensioned fabric.<br>
Concept of project done by  David Gonalves, Yair Ben David, Eliran Buzaglo, and Maria Korpachev under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture.<br>
Jerusalem, January 7th to 14th, 2018<br>
**Input:**
- 1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
**Output:**
- 2x Futaba S3003 Servo Motor
- 1x 2.1mm DC barrel jack
- 1X Switching Power Supply - Selectable Output 3-7VDC 1000mA

created January 10th, 2018 by [Orion Campos](https://github.com/orion-campos)
This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. [![creative](https://img.shields.io/badge/Creative%20Commons-EF9421?style=for-the-badge&logo=creativecommons&logoColor=white)](https://creativecommons.org/)

## Group3.2
**Opening Mechanism Triggered by Distance**
Create a device that push two layers of Lycra in different directions by a series of cables attached to servos, which are then rotated in the opposite direction, releasing the Lycra to it's original position.<br>
The servos would rotate an angle proportional to the distance read by an Infra-red distance sensor, that would be operated by the user.<br>
Concept of project done by  Tal Chiki under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture.<br>
Jerusalem, January 7th to 14th, 2018<br>
**Input:**
- 1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
**Output:**
- 2x Futaba S3003 Servo Motor
- 1x 2.1mm DC barrel jack
- 1X Switching Power Supply - Selectable Output 3-7VDC 1000mA

created January 10th, 2018 by [Orion Campos](https://github.com/orion-campos)
This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. [![creative](https://img.shields.io/badge/Creative%20Commons-EF9421?style=for-the-badge&logo=creativecommons&logoColor=white)](https://creativecommons.org/)

## Group4
**Grasshopper triggered by Light**
Create a physical model of a crystal made of laser-cut thick paper, which geometry was also modeled parametrically using Grasshopper 3D.<br>
At 4 faces of the crystal, were installed 4 photoresistors that read the amount of light through an [Arduino](https://www.arduino.cc/). Grasshopper receives this value through the [Firefly pluggin](http://www.fireflyexperiments.com/), which translates through the code to colors at a virtual model of the same physical crystal model.<br>
Concept of project done by Itay Stoler under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture. Jerusalem, January 7th to 14th, 2018<br>
**Input:**
- 4x Photo cell (CdS photoresistor)
- 4x 10K½ resistor

created January 10th, 2018 by [Orion Campos](https://github.com/orion-campos)
This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. [![creative](https://img.shields.io/badge/Creative%20Commons-EF9421?style=for-the-badge&logo=creativecommons&logoColor=white)](https://creativecommons.org/)

