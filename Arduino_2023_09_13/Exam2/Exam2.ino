#define MIC 36 
#define B 14 
#define R 12 

int MIC_th = 740 ;
 
void setup() {
  
  Serial.begin(115200);
  pinMode(R, OUTPUT);
  pinMode(B, OUTPUT);
  digitalWrite(R, LOW);
  digitalWrite(B, LOW);
  
}

void loop() {
  
  int sound=analogRead(MIC);
  int led_state=digitalRead(R);
  
  Serial.println(sound);
  
  if (sound > MIC_th) {
    
   if(led_state == LOW){
   
      digitalWrite(R, HIGH);
      digitalWrite(B, LOW);
      delay(100);
      
   } 
   
   else{
    
     digitalWrite(R, LOW);
     digitalWrite(B, HIGH);
     delay(100);
     
   } 
   
  } 
  
  delay(2);
  
}
