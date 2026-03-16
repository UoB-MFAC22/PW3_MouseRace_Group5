void setup() {
  pinMode(A3, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A3));
  delay(100);     

}
