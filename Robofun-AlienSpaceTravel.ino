#include <Servo.h>

Servo servo_2;

void setup()
{
  servo_2.attach(2);

  pinMode(6, OUTPUT);
  pinMode(4, OUTPUT);
}


void loop()
{
  servo_2.write(155);
  delay(1000);
  servo_2.write(-155);
  delay(1000);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);

}
