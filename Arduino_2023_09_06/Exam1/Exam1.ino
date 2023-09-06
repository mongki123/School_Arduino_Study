// Node-red 를 사용하여 웹페이지에서 LED ON - LED OFF

void setup(){
  
   Serial.begin(115200);
   pinMode(15, OUTPUT);
   
}
void loop(){
  
   if( Serial.available() ) {
    
      char data = Serial.read();
      
      if(data == '1') {
         digitalWrite(15, HIGH);
      }
      else if(data == '0') {
         digitalWrite(15, LOW);
      }
      
   }  
   
}
