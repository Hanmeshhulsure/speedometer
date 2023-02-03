
char c;
float distance=0 ,duration=0;
int echo=2,trigger=4;
float dis()
{
digitalWrite(trigger,LOW);
delayMicroseconds(2);
digitalWrite(trigger,HIGH);
delayMicroseconds(10);
digitalWrite(trigger,LOW);
duration=pulseIn(echo,HIGH);
distance=(0.0343*duration)/2;
return distance;
}
#include "CytronMotorDriver.h"
CytronMD motor2(PWM_PWM,6,9);
CytronMD motor1(PWM_PWM,10,11);
void setup(){
  Serial.begin(9600);
pinMode(echo,INPUT);
pinMode(trigger,OUTPUT);
}
void loop(){ 
  if(Serial.available()>1){
    c = Serial.read();
    Serial.println(c);
  }
  
if(dis()< 20){
  switch(c){
         case 'B' : 
        motor2.setSpeed(-200);
        motor1.setSpeed(-200);
        break;
      case 'R':
        motor2.setSpeed(200);
        motor1.setSpeed(-200);
        break;
      case 'L':
        motor2.setSpeed(-200);
        motor1.setSpeed(200);
        break;
      case 'S' :
        motor2.setSpeed(0);
        motor1.setSpeed(0);
        break;
      default :
        Serial.println("Not specified");
  }
}
else{
  switch(c){
      case 'F':
        motor2.setSpeed(200);
        motor1.setSpeed(200);
        break;
      case 'B' : 
        motor2.setSpeed(-200);
        motor1.setSpeed(-200);
        break;
      case 'R':
        motor2.setSpeed(200);
        motor1.setSpeed(-200);
        break;
      case 'L':
        motor2.setSpeed(-200);
        motor1.setSpeed(200);
        break;
      case 'S' :
        motor2.setSpeed(0);
        motor1.setSpeed(0);
        break;
      default :
        Serial.println("Not specified");
    
  }
  
}

    
}
