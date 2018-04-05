/*
  Automated Movement Triggered by Distance

  The students of this group had one common theme along their research, which was a bottom up approach to the morphogenesis of architecture. They were also interested in a form finding approach exploring different materials.
  Because of those characteristics, it was suggested to not do an object with an end of itself, but a tool to help them find the form they where looking.
  Similar to a random machine that creates impracticable outputs, two servos would rotate based on the distance read from a Infra-red distance sensor, which would be operated by the user. The servos would have laser-cut patterns attached which would rotate against a white fabric with different grains on top, that would rearrange themselves to the new geometry of the tensioned fabric.
  Concept of project done by  David Gonçalves, Yair Ben David, Eliran Buzaglo, and Maria Korpachev under the tuition of Orion Campos, at the Kinetic Structures Workshop, Bezalel Academy of Arts and Design, Department of Architecture.
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
*/

//insert library
#include <Servo.h>
//using the library <Servo.h> create two servo objects named 'servo1' and 'servo2'
//with this library is possible to create up until 12 Servos objects
Servo servo1;
Servo servo2;
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
  //declare variables without initial values
  int distanceValue;
  int servoposition1;
  int servoposition2;
  distanceValue = analogRead(distanceSensor); //store the sensor value
  servoposition1 = map(distanceValue, 560, 60, 0, 180); //remap the value of the sensor to the angles of the first Servo Motor
  servoposition1 = constrain(servoposition1, 0, 180); //constrain the values of the angles of the first Servo Motor to be within 0º and 180º
  servo1.write(servoposition1); //apply the  remapped value to the first Servo Motor
  servoposition2 = map(distanceValue, 60, 560, 0, 180); //remap the value of the sensor to the angles of the second Servo Motor
  servoposition2 = constrain(servoposition2, 0, 180); //constrain the values of the angles of the second Servo Motor to be within 0º and 180º
  servo2.write(servoposition2); //apply the  remapped value to the second Servo Motor
  //display the desired information on the Serial Monitor
  Serial.print("sensor value: ");
  Serial.print(distanceValue);
  Serial.print("    ");
  Serial.print("servo1: ");
  Serial.print(servoposition1);
  Serial.print("    ");
  Serial.print("servo2: ");
  Serial.println(servoposition2);
  //wait 200 milliseconds
  delay(200);
}
