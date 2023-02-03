int pinvalue;
void setup() {
 pinMode(12,OUTPUT); 
 pinMode(10,INPUT_PULLUP);
 }

void loop() {
pinvalue = digitalRead(10);
if(pinvalue==HIGH)
{
digitalWrite(12,1);
}
else
 {
digitalWrite(12,0);
}


}
