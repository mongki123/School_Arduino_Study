void setup() {
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int Left = touchRead(27); // 11
  int Right = touchRead(4); // 9
  
  Serial.print("Left : ");
  Serial.print(Left);
  Serial.print("   Right : ");
  Serial.println(Right);

  if( Left < 10 && Right > 10) {
    digitalWrite(12, 1);
    digitalWrite(13, 0);
    digitalWrite(14, 0);
  }

  else if( Left > 10 && Right < 10 ) {
    digitalWrite(12, 0);
    digitalWrite(13, 0);
    digitalWrite(14, 1);
  }

  else if( Left < 10 && Right < 10 ) {
    digitalWrite(12, 1);
    digitalWrite(13, 0);
    digitalWrite(14, 1);
  }

  else {
    digitalWrite(12, 0);
    digitalWrite(13, 0);
    digitalWrite(14, 0);
  }

  delay(100);
  
}
