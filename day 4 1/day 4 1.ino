#include<Servo.h>
Servo myservo;
int a=0,i=0,pos=0;
void setup() {
myservo.attach(10);
Serial.begin(9600);

}

void loop() {
  while(Serial.available()>0)
  {
   a=Serial.parseInt();
if  (a>=pos)
{ for(i=pos;i<=a;i++)
  {
  myservo.write(i);
  delay(5);
pos=i;
Serial.println(i);
}
}
else {
 for(i=pos;i>=a;i--)
  {
  myservo.write(i);
  delay(5);
pos=i;
Serial.println(i);
  }
}

}
}