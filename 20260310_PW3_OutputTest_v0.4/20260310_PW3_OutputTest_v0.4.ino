void setup() {
 pinMode(D2, OUTPUT);
 pinMode(D3, OUTPUT);
 Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:  
  analogWrite(D2, 100); //forward slow
  analogWrite(D3, 100);
 // analogWrite(D2, 150); //right turn
 // analogWrite(D3, 50);
 // delay(3000);
 // analogWrite(D3, 150); //left turn
 // analogWrite(D2, 50);
 // delay(3000);
 // analogWrite(D2, 0); //stop
 // analogWrite(D3, 0);

}
