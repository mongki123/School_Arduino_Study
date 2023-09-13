
#include <SparkFunBME280.h>
#define BME280_ADDR 0x77

BME280 myBME280;

void setup() {
  
  Serial.begin(115200);
  
  myBME280.setI2CAddress(BME280_ADDR);
  myBME280.setReferencePressure(102950); 
  myBME280.beginI2C();
   
}
void loop() {
  
  Serial.print(" 온도: ");      // 온도(℃)
  Serial.print(myBME280.readTempC(), 2);
  Serial.println(" ℃");
  
  Serial.print(" 습도: ");     // 습도(%)
  Serial.print(myBME280.readFloatHumidity(), 2);
  Serial.println(" %");
  
  // 기압(Pa) 1(atm) -> 1013.25(hPa) -> 101325(Pa)
  Serial.print(" 기압: ");
  Serial.print(myBME280.readFloatPressure(), 2);
  
  Serial.print(" 고도: "); // 고도(m)
  Serial.print(myBME280.readFloatAltitudeMeters(), 2);
  Serial.println("m");
  delay(2000);
  
}
