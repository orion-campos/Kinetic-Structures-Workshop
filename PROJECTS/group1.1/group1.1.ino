/*
  Opening Mechanism Triggered by Humidity

  Create a module of an opening mechanism for a building facade, which would open if the internal humidity is higher than 60%, enabling the air circulation inside the building to improve the environment comfort, and closing if the internal humidity is less than 60% to preserve the interior atmosphere.
  For optimization of the materials and movable pieces, each module would be opened by only one strong servo (DF15 Metal Gear Servo - 15kg). This servo would rotate four cables at the same time, which would then open four different paper tentacles covered with a light and elastic white fabric that covers the paper tentacles and the cables,givingg structuralstrengthh to the module.
  Concept of project done by Michal Weintraub and Doron Winter under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture.
  Jerusalem, January 7th to 14th, 2018

  Input:
  1x DHT-22 (AM2302)
  1x 10KΩ resistor
  Output:
  1x DF15 Metal Gear Servo (15kg)
  1x 2.1mm DC barrel jack
  1X Switching Power Supply - Selectable Output 3-12VDC 1000mA

  created January 10th, 2018
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

  This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
*/

//insert library Servo
#include <Servo.h>
//using the library <Servo.h> create two servo objects named 'servo1' and 'servo2'
//with this library is possible to create up until 12 Servos objects
Servo servo1;
Servo servo2;
//insert library DHT22
#include <dht.h>
dht DHT;
#define DHT22_PIN 2
float hum;

//variables
const int distanceSensor = 0;

//the setup routine runs once
void setup()
{
  Serial.begin(9600); //begin serial communication at 9600 baud rate
  //because of this specific library, it is necessary to inform that the servo is attached at the previous declared pins
  servo1.attach(9);
}

// the loop routine runs over and over
void loop()
{
  int chk = DHT.read22(DHT22_PIN);
  hum = DHT.humidity;
  temp = DHT.temperature;
  if (hum > 60) //if the sensor reads a humidity higher than 60%
  {
    servo1.write(180); //the sensor turn 180 degrees
  }
  else
  {
    servo1.write(0); //if not, the servo remains at initial position
  }
  //display the desired information on the Serial Monitor
  Serial.print("humidity");
  Serial.print(hum);
  Serial.println("%");
  //wait 1 second
  delay(1000);
}
