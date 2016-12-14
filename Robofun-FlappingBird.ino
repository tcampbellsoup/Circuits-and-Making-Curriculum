#include <Servo.h>

Servo servo_2;
const int buzzer = 9; 

void setup()
{
  servo_2.attach(2);
  pinMode(buzzer, OUTPUT); 
}


void loop()
{
  servo_2.write(155);
   tone(buzzer, 1000);
  delay(1000);
  servo_2.write(-155);
  noTone(buzzer);     
  delay(1000);
}
