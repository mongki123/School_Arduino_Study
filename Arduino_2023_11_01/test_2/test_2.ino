void setup() {
  pinMode(36,INPUT);
  pinMode(15,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int zodo = analogRead(36);
  Serial.println(zodo);

  if(zodo >= 1500) {
    digitalWrite(15, 1);
  }
  else {
    digitalWrite(15, 0);
  }
  
}
