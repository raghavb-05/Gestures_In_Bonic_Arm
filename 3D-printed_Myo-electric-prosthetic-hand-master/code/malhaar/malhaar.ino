
int a,b,c;
void setup() {
pinMode(A3, INPUT);
for(int i = 0; i<3; i++){
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
}
Serial.begin(9600);


}

void loop() {
  
  a = analogRead(A3)/3;
  delay(10);
  b = analogRead(A3)/3;
  delay(10);
  c = analogRead(A3)/3;
  delay(10);
  Serial.println(a+b+c);
  a=0;
  b=0;
  c=0;
}
