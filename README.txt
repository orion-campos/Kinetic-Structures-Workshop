----------------------------------------------
ABOUT
----------------------------------------------

Kinetic Structures Workshop, from January 7th to January 14th, 2018, at Bezalel Academy of Arts and Design, Department of Architecture, Jerusalem, Israel, in which 4th and 5th year students of Architecture where taught by Orion Campos, during a one week workshop, the basics on electronics and Arduino to create interactive models.

At the first two days, classes of basic Electronic, Arduino, Grasshopper 3D and Firefly took place. Teaching from the very beginning electronic concepts, the classes created a base for the participants to develop their own projects during the remain of the week.
At the second phase, the participants informed about their projects they were developing at school alone or in couples and the tutors guided them to possible outputs they could aim. They were divided into four groups with two projects per group. The division was made based on technical similarities among them i.e. both projects would use temperature sensors, both projects would use LEDÕs, both projects would use a distance sensor, both projects would use Firefly. This division was made in order to optimize the time to develop the code for each group and to assemble the electronics of each group, since both would use the same components and (almost) the same code. Grouping them by technical similarities would encourage the groups to develop the projects together and learn and help each other.
The final working prototypes were presented after 7 days, made from people who had none experience at electronics.

Conceptual development, organization, creation of classes and main tutoring by Orion Campos.
Organization and assistant tutoring by Ran Shabtay and Natanel Elfassy

GROUP 1.1 - Michal Weintraub and Doron Winter
GROUP 1.2 - Noa Guy and Mordechai Bachar
GROUP 2.1 - Sapir Dror and Eran Damari
GROUP 2.1 - Yuval Bar-Adon
GROUP 3.1 - David Goncalves, Yair Ben David, Eliran Buzaglo and Maria Korpachev
GROUP 3.2 - Chen Gabay and Nelly Panchenko
GROUP 3.3 - Tal Chiki
GROUP 4.1 - Itay Stoler

All the files of the Arduino codes, images, Rhinoceros 3D, Grasshopper 3D, etc. are available for download at GitHub: https://github.com/orion-campos/Kinetic-Structures-Workshop

This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.

https://vimeo.com/295022593

Orion Campos
www.orioncampos.com
linkedin.com/in/orioncampos
vimeo.com/orioncampos
github.com/orion-campos

----------------------------------------------
FILE MAP
----------------------------------------------

ARDUINO
	_1_blink
		_1_blink.ino
		1_blink.jpg
	_2_rgb
		_2_rgb.ino
		2_rgb.jpg
	_3_photoresistor
		_3_photoresistor.ino
		3_photoresistor.jpg
	_4_IRDS
		_4_IRDS.ino
		4_IRDS.jpg
	_5_temp_hum
		_5_temp_hum.ino
		5_temp_hum.jpg
	_6_servo
		_6_servo.ino
		6_servo.jpg
		6_servo_power.jpg
	_7_servo_IRDS
		_7_servo_IRDS.ino
		7_servo_IRDS.jpg
GRASSHOPPER3D
	turning_tower.3dm
	turning_tower.gh
	turning_tower.png
FIREFLY
	FIREFLY.ino
	FIREFLY.jpg
	firefly_turning_tower.3dm
	firefly_turning_tower.gh
	firefly_turning_tower.png
	110920_Firefly_Users_Guide.pdf
PROJECTS
	group1.1
		group1.1.ino
		group1.1.jpg
		group1.1.pdf
	group1.2
		group1.2.ino
		group1.2.jpg
		group1.2.pdf
	group2.1
		group2.1.ino
		group2.1.jpg
		group2.1.pdf
	group2.2
		group2.2.ino
		group2.2.jpg
		group2.2.pdf
	group3.1
		group3.1.ino
		group3.1.jpg
		group3.1.pdf
	group3.2
		group3.2.ino
		group3.2.jpg
	group4
		group4.ino
		group4.jpg
		group4.gh

----------------------------------------------
ARDUINO
----------------------------------------------

_1_blink

	Blink

	Turns on an LED on and off repeatedly.
	It is possible to use the on-board LED. Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO it is attached to digital pin 13.
	If desired, a 5mm LED can be used on digital pin 13. If so, it is not necessary to use a resistor, since the pin 13 allready has a resistor attached.

	Output:
	1x 5mm LED
	1x 560½ resistor (if the digital pin 13 is not used)

	modified May 8th, 2014
	by Scott Fitzgerald

	modified September 2nd, 2016
	by Arturo Guadalupi

	modified September 8th, 2016
	by Colby Newman

	modified December 24th, 2017
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

_2_rgb

	RGB LED

	Turn on an RGB LED with a series of predetermined colors, mixing values of red, green and blue light.

	Output:
	1x RGB LED
	3x 560K½ resistor

	created November 30th, 2012
	by Simon Monk <www.adafruit.com>

	modified December 24th, 2017
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

_3_photoresistor

	Photoresistor

	Turn a LED on by changing it brightness according to the values read by a photoresistor.
	Display the read values and the remapped values on the Serial Monitor.

	Input:
	1x Photo cell (CdS photoresistor)
	1x 10K½ resistor
	Output:
	1x 5mm LED
	1x 560½ resistor

	created December 24th, 2017
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

	This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

_4_IRDS

	Infrared Distance Sensor (IRDS)

	Control the brighteness of a LED according to the values read by an Infrared Distance Sensor (IRDS), turning the LED brighter if the distance sensor reads a higher value (closer object).
	Display the read values and the remapped values on the Serial Monitor.

	Input:
	1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
	Output:
	1x 5mm LED
	1x 220½ resistor

	created December 24th, 2017
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

	This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

_5_temp_hum

	Temperature and Humidity Sensor

	Connect the DHT-22, also named as AM2302, a relative humidity and temperature sensor to an Arduino, and turn on an LED with an 'IF' statement.
	In this code the LED turn on if the relative humidity is higher than 70%, which could be achieved by breathing very closely to the sensor.
	Display the read values on the Serial Monitor.

	Input:
	1x DHT-22 (AM2302)
	1x 10K½ resistor
	Output:
	1x 5mm LED
	1x 220½ resistor

	created July 1st, 2015
	by Michalis Vasilakis <www.ardumotive.com>

	modified December 24th, 2017
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

_6_servo

	Servo Motor Sweep

	Sweeps one Micro Servo Motor back and forth across 180 degrees using two 'FOR' statements.

	Output:
	1x Futaba S3003 Servo Motor

	created August 18th, 2015
	by SM <https://www.arduino.cc/en/Tutorial/Sweep>

	modified December 24th, 2017
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

_7_servo_IRDS

	Two Servo Motors and one Infrared Distance Sensor (IRDS)

	Control the angle of two Servo Motors according to the values read by an Infrared Distance Sensor (IRDS), turning the Servo Motors on oposite directions if the distance sensor reads a higher value (closer object).
	Display the read values and the remapped values on the Serial Monitor.

	Input:
	1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
	Output:
	2x Futaba S3003 Servo Motor
	1x 2.1mm DC barrel jack

	created December 24th, 2017
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

	This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

----------------------------------------------
GRASSHOPPER 3D
----------------------------------------------
(Rhinoceros 3D and Grasshopper 3D files)

turning_tower

	Turning Tower
	From a closed and planar curve created in Rhinoceros 3D, moved into the axis Z by a series of 100 values, rotated by a range of 100 values from 0º to 360º and scaled by a range of 100 values from 10% to 100%; the curves were then transformed into a lofted surface and a planar surface, representing a skyscraper skin and its floors.
	created May 4th, 2017
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

----------------------------------------------
FIREFLY
----------------------------------------------
(Rhinoceros 3D and Grasshopper 3D files)

firefly_turning_tower

	Turning Tower
	From a closed and planar curve created in Rhinoceros 3D, moved into the axis Z by a series of 100 values, rotated by a range of 100 values from 0º to a specific angle determined by the plug-in Firefly and scaled by a range of 100 values from 10% to 100%; the curves were then transformed into a lofted surface and a planar surface, representing a skyscraper skin and its floors.
	The maximum rotation angle of the floors are remaped values read from a potentiometer connected to an Arduino <https://www.arduino.cc/>, and communicating with Grasshopper3D with the plug-in Firefly <http://www.fireflyexperiments.com/>.
	created May 4th, 2017
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

----------------------------------------------
PROJECTS
----------------------------------------------

Group1.1

	Opening Mechanism Triggered by Humidity

	Create a module of an opening mechanism for a building facade, which would open if the internal humidity is higher than 60%, enabling the air circulation inside the building to improve the environment comfort, and closing if the internal humidity is less than 60% to preserve the interior atmosphere.
	For optimization of the materials and movable pieces, each module would be opened by only one strong servo (DF15 Metal Gear Servo - 15kg). This servo would rotate four cables at the same time, which would then open four different paper tentacles covered with a light and elastic white fabric that covers the paper tentacles and the cables,givingg structuralstrengthh to the module.
	Concept of project done by Michal Weintraub and Doron Winter under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture.
	Jerusalem, January 7th to 14th, 2018

	Input:
	1x DHT-22 (AM2302)
	1x 10K½ resistor
	Output:
	1x DF15 Metal Gear Servo (15kg)
	1x 2.1mm DC barrel jack
	1X Switching Power Supply - Selectable Output 3-12VDC 1000mA

	created January 10th, 2018
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

	This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

Group1.2

	Automated Thermoplastic Triggered by Temperature

	Create a device that twist a piece of Thermoplastic inside a bowl of hot water.
	The Thermoplastic would be inside a glass bowl and when this bowl would be filled with hot water, the Thermoplastic would be twisted by a series of cables and metal wires attached to two servos.
	The servos would execute a series of predetermined movements and would it be triggered by a temperature sensor. When the water reaches a specific temperature, the servos start to rotate.
	Concept of project done by Noa Guy and Mordechai Bachar under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture.
	Jerusalem, January 7th to 14th, 2018

	Input:
	1x DHT-22 (AM2302)
	1x 10K½ resistor
	Output:
	2x Futaba S3003 Servo Motor
	1x 2.1mm DC barrel jack
	1X Switching Power Supply - Selectable Output 3-7VDC 1000mA

	created January 10th, 2018
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

	This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

Group2.1

	Lightning System Triggered by 

	The architectural project consisted of a canopy for a public street. To give the function of a streetlight to the element, it was thought a lightning system that would be attached to this canopy, giving it an additional function.
	The lights would be turned on automatically after evening, by a series of light sensors reading the environment light.
	Concept of project done by Sapir Dror and Eran Damari under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture.
	Jerusalem, January 7th to 14th, 2018
  
	Input:
	1x Photo cell (CdS photoresistor)
	1x 10K½ resistor
	Output:
	4x 5mm LED

	created January 10th, 2018
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

	This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

Group2.2

	Visual Representation Triggered by Distance

	Based on a research done by the student, using a drone to collect data from a terrain, the project developed as a representation of the information collected by the drone as if it was analyzing the terrain with two infra-red distance sensors.
	For the project, two SHARP IR distance sensor read the distance of a user (it's hand) and translate this information turning on or off four very bright 3W RGB LED's.
	Those bright RGB's are attached to layers of acrylic, engraved with a graphical representation of the studied terrain. By refraction of the light, the engraved lines on the acrylic surface are illuminated.
	Concept of project done by Yuval Bar-Adon under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture.
	Jerusalem, January 7th to 14th, 2018

	Input:
	1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
	Output:
	4x F3W-9W RGB LED
	1x 2.1mm DC barrel jack
	1X Switching Power Supply - Selectable Output 3-7VDC 1000mA

	created January 10th, 2018
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

	This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

Group3.1

	Automated Movement Triggered by Distance

	The students of this group had one common theme along their research, which was a bottom up approach to the morphogenesis of architecture. They were also interested in a form finding approach exploring different materials.
	Because of those characteristics, it was suggested to not do an object with an end of itself, but a tool to help them find the form they where looking.
	Similar to a random machine that creates impracticable outputs, two servos would rotate based on the distance read from a Infra-red distance sensor, which would be operated by the user. The servos would have laser-cut patterns attached which would rotate against a white fabric with different grains on top, that would rearrange themselves to the new geometry of the tensioned fabric.
	Concept of project done by  David Gonalves, Yair Ben David, Eliran Buzaglo, and Maria Korpachev under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture.
	Jerusalem, January 7th to 14th, 2018

	Input:
	1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
	Output:
	2x Futaba S3003 Servo Motor
	1x 2.1mm DC barrel jack
	1X Switching Power Supply - Selectable Output 3-7VDC 1000mA

	created January 10th, 2018
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

	This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

Group3.2

	Opening Mechanism Triggered by Distance

	Create a device that push two layers of Lycra in different directions by a series of cables attached to servos, which are then rotated in the opposite direction, releasing the Lycra to it's original position.
	The servos would rotate an angle proportional to the distance read by an Infra-red distance sensor, that would be operated by the user.
	Concept of project done by  Tal Chiki under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture.
	Jerusalem, January 7th to 14th, 2018

	Input:
	1x SHARP IR distance sensor (GP2Y0A21YK0F - 10 to 80cm range, GP2Y0A02YK - 20 to 150cm range, GP2Y0A710K0F - 100 to 500cm)
	Output:
	2x Futaba S3003 Servo Motor
	1x 2.1mm DC barrel jack
	1X Switching Power Supply - Selectable Output 3-7VDC 1000mA

	created January 10th, 2018
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

	This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

Group4

	Grasshopper triggered by Light

	Create a physical model of a crystal made of laser-cut thick paper, which geometry was also modeled parametrically using Grasshopper 3D.
	At 4 faces of the crystal, were installed 4 photoresistors that read the amount of light through an Arduino <https://www.arduino.cc/>. Grasshopper receives this value through the Firefly pluggin  <http://www.fireflyexperiments.com/>, which translates through the code to colors at a virtual model of the same physical crystal model.
	Concept of project done by Itay Stoler under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture. Jerusalem, January 7th to 14th, 2018

	Input:
	4x Photo cell (CdS photoresistor)
	4x 10K½ resistor

	created January 10th, 2018
	by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

	This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)

