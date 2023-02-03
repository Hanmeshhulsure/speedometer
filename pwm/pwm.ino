char value;
void setup() {
Serial.begin(9600);
  // pinMode(A0,INPUT);
  pinMode(3,OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
// value=analogRead(A0);
// Serial.println(analogRead(A0));
// value=map(value, 0, 1023, 0, 255);
// analogWrite(3,value);
// for (i=0;i<256;i++) {
// analogWrite(3,i);
// }
// for(i=256;i>0;i--)
// {
// analogWrite(3,i);
// delay(10);
// i=0;
// while (i<256) {
// analogWrite(3,i);
// i++;
// delay(10);
// }
// while (i>0) {
// analogWrite(3,i);
// i--;
// delay(10);
// }
if(Serial.available()>=1){
value=Serial.read();
//  if(value=='0'){
// analogWrite(3,0);  
// }
//  else if(value=='1'){
// analogWrite(3,63);  
// }
// else if(value=='2'){
// analogWrite(3,127);  
// }
// else if(value=='3'){
// analogWrite(3,191);  
// }
// else if(value=="4"){
// analogWrite(3,255);  
// }
// }
switch (value) {
case '0':analogWrite(3,0);
break;
case '1':analogWrite(3,63);
break;
case '2':analogWrite(3,127);
break;
case '3':analogWrite(3,191);
break;
case '4':analogWrite(3,255);
break;
}
}
}
