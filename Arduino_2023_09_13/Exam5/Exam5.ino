
#include <SparkFunBME280.h>

BME280 myBME280; 

void setup(){
  
   Serial.begin(115200);
   
   myBME280.setI2CAddress(0x77);
   myBME280.beginI2C();
   
}

void loop(){
  
   Serial.println(myBME280.readTempC(), 2);
   
   delay(2000);
   
}
