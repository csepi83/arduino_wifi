#include <SoftwareSerial.h>
SoftwareSerial ESPserial(10, 11); // RX | TX
 
void setup() 
{
    Serial.begin(9600);
    ESPserial.begin(9600);  
    Serial.println("Ready");
    Serial.println("");    
}
 
void loop() 
{
    if (ESPserial.available()) { Serial.write(ESPserial.read()); }
    if (Serial.available()) { ESPserial.write(Serial.read()); }
}
