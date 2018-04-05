/*
  Grasshopper triggered by Light

  Create a physical model of a crystal made of laser-cut thick paper, which geometry was also modeled parametrically using Grasshopper 3D.
  At 4 faces of the crystal, were installed 4 photoresistors that read the amount of light through an Arduino <https://www.arduino.cc/>. Grasshopper receives this value through the Firefly pluggin  <http://www.fireflyexperiments.com/>, which translates through the code to colors at a virtual model of the same physical crystal model.
  Concept of project done by Itay Stoler under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture. Jerusalem, January 7th to 14th, 2018

  Input:
  4x Photo cell (CdS photoresistor)
  4x 10KΩ resistor

  created January 10th, 2018
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>

  This work is licensed under Creative Commons <https://creativecommons.org/licenses/by-nc-sa/4.0/> Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)
*/

//connected pins
const int ledPin = 13;
const int sensorPin1 = 0;
const int sensorPin2 = 1;
const int sensorPin3 = 2;
const int sensorPin4 = 3;
//variables
int sensorValue1 = 0;
int sensorValue2 = 0;
int sensorValue3 = 0;
int sensorValue4 = 0;

//the setup routine runs once
void setup()
{
  Serial.begin(115200); //begin serial communication at 115200 baud rate
}

// the loop routine runs over and over
void loop()
{
  sensorValue1 = analogRead(sensorPin1); //store the sensor value
  // Serial.print("sensor value1: ");
  Serial.print(sensorValue1);
  Serial.print("-");
  sensorValue2 = analogRead(sensorPin2); //store the sensor value
  // Serial.print("sensor value2: ");
  Serial.print(sensorValue2);
  Serial.print("-");
  sensorValue3 = analogRead(sensorPin3); //store the sensor value
  // Serial.print("sensor value3: ");
  Serial.print(sensorValue3);
  Serial.print("-");
  sensorValue4 = analogRead(sensorPin4); //store the sensor value
  //Serial.print("sensor value4: ");
  Serial.println(sensorValue4);
  //  Serial.println("-");
  //wait 200 milliseconds seconds
  delay(200);
}
