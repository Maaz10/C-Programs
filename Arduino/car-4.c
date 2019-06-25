void setup() {
Serial.begin(9600);
pinMode(6,INPUT);
pinMode(7,INPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);

}

void loop() {
 int x=digitalRead(6);
 int y=digitalRead(7);

 digitalWrite(9,LOW);
 digitalWrite(8,HIGH);
 digitalWrite(11,LOW);
 digitalWrite(10,HIGH);
 
 if(y == LOW)
 {
  Serial.println("obstacle");
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH); 
  delay(200); 
 }
 else
 if(x == LOW)
 {
  Serial.println("obstacle");
  digitalWrite(10,LOW);
  digitalWrite(11,LOW); 
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
   delay(200);
 }
 else
 {
  Serial.println("free");
 } 
 delay(300);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
}
