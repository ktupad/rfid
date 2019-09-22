#include <ESP8266WiFi.h>
#include <SPI.h>
#include <MFRC522.h>
#include <ESP8266HTTPClient.h>

#define RST_PIN  D3  
#define SS_PIN  D8  

const char *ssid =  "myssid";   
const char *pass =  "passssid"; 
String host = "http://rfidapp.gearhostpreview.com/app.php?iot&mod=update&id=1&data[nama]=";

MFRC522 mfrc522(SS_PIN, RST_PIN);  

void setup() {
  Serial.begin(115200);     
  delay(250);
  Serial.println(F("Booting...."));
  
  SPI.begin();            
  mfrc522.PCD_Init();    
  
  WiFi.begin(ssid, pass);
  
  int retries = 0;
  while ((WiFi.status() != WL_CONNECTED) && (retries < 10)) {
    retries++;
    delay(500);
    Serial.print(".");
  }
  if (WiFi.status() == WL_CONNECTED) {
    Serial.println(F("WiFi connected"));
  }
  
  Serial.println(F("Ready!"));
   Serial.println(F("Scan for Card and print UID:"));
}

void loop() { 
  if(mfrc522.PICC_IsNewCardPresent()) { sendID(); }
  if ( ! mfrc522.PICC_ReadCardSerial()) { delay(250); return; }
  Serial.println();
}

unsigned long getID(){
  if ( ! mfrc522.PICC_ReadCardSerial()) { return -1; }
  unsigned long hex_num;
  hex_num =  mfrc522.uid.uidByte[0] << 24;
  hex_num += mfrc522.uid.uidByte[1] << 16;
  hex_num += mfrc522.uid.uidByte[2] <<  8;
  hex_num += mfrc522.uid.uidByte[3];
  mfrc522.PICC_HaltA(); // Stop reading
  return hex_num;
}

unsigned long sendID(){
  unsigned long uid = getID();
  HTTPClient http;
  http.begin(host + uid);
  int statusCode = http.GET();
  Serial.println(http.getString());
  //Serial.println(uid);
  http.end();
 }
