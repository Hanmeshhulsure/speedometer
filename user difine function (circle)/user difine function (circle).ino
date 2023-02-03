float r,a,c;
float area(int x)
{
return 3.14*r*r;
}
float circumference(int x)
{
return 2*3.14*r;
}
void setup(){
Serial.begin(9600);
}

void loop() {
  if(Serial.available()>1)
  {
    r=Serial.parseInt();
    a=area(r);
    Serial.println(a);
    c=circumference(r);
    Serial.println(c);
  }
}
