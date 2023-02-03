int value;
void setup() {
  pinMode(10,INPUT);
Serial.begin(9600);
}

void loop() {
  value=digitalRead(10);
Serial.println(value);
}
