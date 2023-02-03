#define m1a 6
#define m1b 9
#define m2a 10
#define m2b 11
int i=0;
void setup() {
pinMode(m1a,OUTPUT);
pinMode(m1b,OUTPUT);
pinMode(m2a,OUTPUT);
pinMode(m2b,OUTPUT);
}

void loop() {
//  digitalWrite(m1a,HIGH);
//  digitalWrite(m1b,LOW);
//  digitalWrite(m2a,HIGH);
//  digitalWrite(m2b,LOW);
// analogWrite(m1a,50);
// analogWrite(m1b,0);
// analogWrite(m2a,50);
// analogWrite(m2b,0);
// delay(3000);

analogWrite(m1a,0);
analogWrite(m1b,50);
analogWrite(m2a,0);
analogWrite(m2b,50);
 delay(3000);
// analogWrite(m1a,50);
// analogWrite(m1b,0);
// analogWrite(m2a,0);
// analogWrite(m2b,50);
// delay(900); 

}
