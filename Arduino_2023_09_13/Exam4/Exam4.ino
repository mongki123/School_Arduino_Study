
#include <SparkFunBME280.h>
#include <Adafruit_GFX.h>
#include <Adafruit_IS31FL3731.h>
#define BME280_ADDR 0x77

Adafruit_IS31FL3731 matrix = Adafruit_IS31FL3731();

BME280 myBME280;

void setup() {
  
   Serial.begin(115200);
   
   myBME280.setI2CAddress(BME280_ADDR);
   myBME280.beginI2C(); 
   matrix.begin();
   
}

void loop() {
  
   Serial.print(" 기온(℃): ");
   Serial.print(myBME280.readTempC(), 2); 
   Serial.println(" ℃");

   Serial.print(" 습도: ");
   Serial.print(myBME280.readFloatHumidity(), 2); 
   Serial.println(" %");
   Serial.println(" ");

   for (int8_t x = 0; x >= -64; x--) {
    
      matrix.clear();
      matrix.setCursor(x, 1);
      matrix.print(myBME280.readTempC(), 1); 
      matrix.print("C");
      matrix.print(" ");
      matrix.print(myBME280.readFloatHumidity(), 0); 
      matrix.print("%");
      delay(50);
   }
   
   matrix.clear(); // matrix 초기화
   
   delay(500);
   
}
