#include <CytronMotorDriver.h>

CytronMD motor2(PWM_PWM, 6, 9);
CytronMD motor1(PWM_PWM, 10, 11);

# define IR_array_left 2
# define MID_IR 4
# define IR_array_right 8

void setup() {
  
  Serial.begin(9600);
  
  pinMode(IR_array_left,INPUT);
  pinMode(MID_IR,INPUT);
  pinMode(IR_array_right,INPUT);
  
  // pinMode(lm1,OUTPUT);
  // pinMode(lm2,OUTPUT);
  // pinMode(rm1,OUTPUT);
  // pinMode(rm2,OUTPUT);

}

void loop() {

  char c,b,a;
  a = digitalRead(2);
  b = digitalRead(4);
  c = digitalRead(8);
Serial.println(b);
  
  if(b == 1) 
  ForWard();
  else if(a == 1)
  Left();
  else if(c == 1)
  Right();
  else if(a==1&& b==1 && c==1)
  Stop;
}

void ForWard()
 {
  motor2.setSpeed(30);
  motor1.setSpeed(30);
 } 
 void Left()
 {
  motor2.setSpeed(30);
  motor1.setSpeed(-30);
 } 
 void Right()
 {
  motor2.setSpeed(-30);
  motor1.setSpeed(30);
 } 
void Stop()
{
  motor2.setSpeed(0);
  motor1.setSpeed(0);
}
