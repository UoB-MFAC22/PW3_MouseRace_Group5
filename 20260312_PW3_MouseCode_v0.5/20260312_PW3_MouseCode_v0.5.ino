void setup() {
 pinMode(A2, INPUT);
 pinMode(A3, INPUT);
 pinMode(D2, OUTPUT);
 pinMode(D3, OUTPUT);
 Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
 int sensorLeft = analogRead(A2);
 int sensorRight = analogRead(A3);
 if (sensorLeft < 3000){
  analogWrite(D2, 150);
  analogWrite(D3, 50);
 } else if (sensorRight < 3000){
  analogWrite(D3, 150);
  analogWrite(D2, 50);
 } else {
  analogWrite(D2, 255);
  analogWrite(D3, 255);
 }
 //else {
  //analogWrite(D3, 0);
 // analogWrite(D2, 0);
// }

}
