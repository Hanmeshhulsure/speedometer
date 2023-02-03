float distance=0 ,duration=0;
int echo=7,trigger=8;
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
void setup() {
Serial.begin(9600);
pinMode(echo,INPUT);
pinMode(trigger,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
// digitalWrite(trigger,LOW);
// delayMicroseconds(2);
// digitalWrite(trigger,HIGH);
// delayMicroseconds(10);
// digitalWrite(trigger,LOW);
// duration=pulseIn(echo,HIGH);
// distance=(0.0343*duration)/2;
// Serial.print("distance is:");
// Serial.print(distance);
// Serial.println("cms");
// delay(500);
distance=dis();
Serial.println(distance);
delay(500);
if(distance<60)
digitalWrite(13,LOW);
else
 digitalWrite(13,HIGH);
}
