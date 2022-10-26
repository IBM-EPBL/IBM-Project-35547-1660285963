#include <Servo.h> 
Servo s;
void setup()
{ pinMode(4, 
OUTPUT); pinMode(2, 
INPUT);
s.attach(3); 
}
void loop()
{
s.write(0);
int pir = digitalRead(2); double a = 
analogRead(A0); double t = (((a / 
1024) * 5) - 0.5) * 100;
if(pir){
s.write(180); 
delay(5000);
}
if(t > 35)
digitalWrite(4, 0);
else
digitalWrite(4, 1);
}
