int toggle = true;
int before = false;
int count = 0;

void setup() {
  pinMode(15,INPUT);
  pinMode(26,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  toggle = !digitalRead(15);
  if(toggle == 1 && before == 0) {
    count = count + 1;
  }

  if( count % 2 == 0 ) {
    digitalWrite(26, 0);
  }
  else {
    digitalWrite(26, 1);
  }
  before = toggle;

  Serial.print(toggle);
  Serial.print(before);
  Serial.println(count);
  
  
  
  
}
