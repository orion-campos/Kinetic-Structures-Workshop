/*
  Servo Motor Sweep

  Sweeps one Micro Servo Motor back and forth across 180 degrees using two 'FOR' statements.

  Output:
  1x Futaba S3003 Servo Motor

  created August 18th, 2015
  by SM <https://www.arduino.cc/en/Tutorial/Sweep>

  modified December 24th, 2017
  by Orion Campos <www.orioncampos.com> <https://github.com/orion-campos>
*/

//insert library
#include <Servo.h>
//connected pins
int servoPin1 = 9;
//using the library <Servo.h> create a servo object named 'servo'
//with this library is possible to create up until 12 Servos objects
Servo servo1;
//variables
int angle = 0;

//the setup routine runs once
void setup()
{
  servo1.attach(servoPin1); //because of this specific library, it is necessary to inform that the servo is attached at the previous declared pin
}

// the loop routine runs over and over
void loop()
{
  for (angle = 0; angle < 180; angle++) //the function begins with value 0, counting from 0 to 179, adding one each cycle until it reaches 180
    servo1.write(angle); //apply the current angle, until reaches its limit
  delay(10); //wait 10 milliseconds seconds
for (angle = 180; angle > 0; angle--) //the function begins with value 180, counting from 180 to 1, subtracting one each cycle until it reaches 0
  servo1.write(angle); //apply the current angle, until reaches its limit
  delay(10); //wait 10 milliseconds seconds
}
}
