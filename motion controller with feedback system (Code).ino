#include<math.h>
#include <Servo.h>

int M;
int Pin = 0;
Servo s_9;

void setup()
{
  Serial.begin(9600);
  s_9.attach(9);
}
void loop()
{
  M = analogRead(Pin);
  M = map(M, 0, 1023, 0, 180);
  Serial.print(M);
  Serial.print(" , ");
  s_9.write(M);
  delay(2000);
}

