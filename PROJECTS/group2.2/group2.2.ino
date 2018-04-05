/*
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
*/

//connected pins
const int ledPin1 = 13;
const int ledPin2 = 12;
const int sensorPin1 = 0;
const int sensorPin2 = 1;
//variables
int sensorValue1 = 0;
int sensorMap1 = 0;
int sensorValue2 = 0;
int sensorMap2 = 0;

//the setup routine runs once
void setup()
{
  Serial.begin(9600); //begin serial communication at 9600 baud rate
}

// the loop routine runs over and over
void loop()
{
  sensorValue1 = analogRead(sensorPin1); //store the sensor value
  sensorMap1 = map(sensorValue1, 35, 450, 0, 255); //remap the value of the sensor to the value of the LED
  analogWrite(ledPin1, sensorMap1); //apply the  remapped value to the LED's
  sensorValue2 = analogRead(sensorPin2); //store the sensor value
  sensorMap2 = map(sensorValue2, 35, 450, 0, 255); //remap the value of the sensor to the value of the LED
  analogWrite(ledPin2, sensorMap2); //apply the  remapped value to the LED's
  //display the desired information on the Serial Monitor
  Serial.print("sensor value1: ");
  Serial.print(sensorValue1);
  Serial.print("    ");
  Serial.print("remapped value1: ");
  Serial.print(sensorMap1);
  Serial.print("    ");
  Serial.print("sensor value2: ");
  Serial.print(sensorValue2);
  Serial.print("    ");
  Serial.print("remapped value2: ");
  Serial.println(sensorMap2);
  //wait 200 milliseconds seconds
  delay(200);
}
