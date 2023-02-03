#include"CytronMotorDriver.h"
#include"CytronMotorDriver.h"
CytronMD motor2(PWM_PWM,6,9);
CytronMD motor1(PWM_PWM,10,11);
int v1,v2;
const int right=5;
const int left=3;
void setup(){
  Serial.begin(9600);
pinMode(right,INPUT);
pinMode(left,INPUT);

}

void loop() {
  v1=digitalRead(right);
  v2=digitalRead(left);
Serial.println(v1);
Serial.println(v2);
if(v1==0 && v2==0)
{
  motor2.setSpeed(50);
  motor1.setSpeed(50);
}
else 
{
motor2.setSpeed(-50);
motor1.setSpeed(-50);
delay(1500);
motor2.setSpeed(50);
motor1.setSpeed(-50);
delay(900);
}
}
