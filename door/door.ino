int v1,v2,p=0;
void setup() {
  Serial.begin(9600);
  pinMode(10,INPUT);
  pinMode(11,INPUT);

}

void loop() {
  v1=digitalRead(10);
  v2=digitalRead(11);
  if(v1==1 && v2==0) 
  {
     v1=digitalRead(10);
  v2=digitalRead(11);
    while(v1==0 && v2==0)
    {
v1=digitalRead(10);
  v2=digitalRead(11);      
    }
  if(v2==1)  
  p++;
  }
 if(v1==0 && v2==1)
  {
     v1=digitalRead(10);
  v2=digitalRead(11);
    while(v1==0 && v2==0)
    {
       v1=digitalRead(10);
  v2=digitalRead(11);
    }
  if(v1==1)
  p--;
  Serial.println(p);
}
Serial.println(p);
}
  
  


