/*
  Automated Thermoplastic Triggered by Temperature

  Create a device that twist a piece of Thermoplastic inside a bowl of hot water.
  The Thermoplastic would be inside a glass bowl and when this bowl would be filled with hot water, the Thermoplastic would be twisted by a series of cables and metal wires attached to two servos.
  The servos would execute a series of predetermined movements and would it be triggered by a temperature sensor. When the water reaches a specific temperature, the servos start to rotate.
  Concept of project done by Noa Guy and Mordechai Bachar under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture.
  Jerusalem, January 7th to 14th, 2018

  Input:
  1x DHT-22 (AM2302)
  1x 10KΩ resistor
  Output:
  2x Futaba S3003 Servo Motor
  1x 2.1mm DC barrel jack
  1X Switching Power Supply - Selectable Output 3-7VDC 1000mA

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
float temp;

//variables
const int distanceSensor = 0;

//the setup routine runs once
void setup()
{
  Serial.begin(9600); //begin serial communication at 9600 baud rate
  //because of this specific library, it is necessary to inform that the servo is attached at the previous declared pins
  servo1.attach(9);
  servo2.attach(10);
}

// the loop routine runs over and over
void loop()
{
  int chk = DHT.read22(DHT22_PIN);
  hum = DHT.humidity;
  temp = DHT.temperature;
  if (temp > 26) //if the sensor reads a temperature higher than 26º Celsius, the servos executes a series of predetermined movements
  {
    servo1.write(0);
    delay(1000);
    servo1.write(90);
    delay(1000);
    servo1.write(60);
    delay(1000);
    servo2.write(0);
    delay(1000);
    servo2.write(30);
    delay(1000);
    servo2.write(60);
    delay(1000);
  }
  if (temp < 26) //if the sensor reads a temperature higher than 26º Celsius, the servos remains at initial position
  {
    servo1.write(180);
    servo2.write(180);
  }
  //display the desired information on the Serial Monitor
  Serial.print("temperature");
  Serial.print(temp);
  Serial.println("celsius");
  //wait 1 second
  delay(1000);
}
