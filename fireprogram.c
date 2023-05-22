#include <ESP8266WiFi.h>

const int RO=D1;
const int LO=D2;
const int IR=D3;
float Smoke;  //Stores #include <ESP8266WiFi.h>
const int RO=D1;
const int LO=D2;
const int IR=D3;
float smoke;  //Stores smoke value
float temp; //Stores temperature value
int relayInput = D6;
int relayInput1 = D5;
int relayInput2 = D7;
String ROData;
String LOData;
String IRData;
int bRO = 0;
int bLO = 0;
int bIR = 0;
const char *ssid = "IOT";
const char *pass = "password";
void setup() 
{

       
       pinMode(relayInput, OUTPUT);
       pinMode(relayInput1, OUTPUT);
       pinMode(relayInput2, OUTPUT);
       pinMode(RO,INPUT);
       pinMode(LO,INPUT);
       pinMode(IR,INPUT);
       Serial.begin(115200);
       Serial.println("Connecting to ");
       Serial.println(ssid);
       WiFi.begin(ssid, pass);
      while (WiFi.status() != WL_CONNECTED) 
     {
            delay(500);
           
            Serial.print(".");
     }
      Serial.println("");
      Serial.println("WiFi connected");
      
      delay(4000);

}
void loop()
{
  String postData;
  
  bRO = digitalRead(RO);
  bLO = digitalRead(LO);
  bIR = digitalRead(IR);
  if (bRO == LOW){
      ROData="HIGH";
      digitalWrite(relayInput, HIGH);
    }
    else if(bRO == HIGH){
      ROData="LOW";
      digitalWrite(relayInput, LOW);
    }
   if (bLO == LOW){
      LOData="HIGH";
      digitalWrite(relayInput1, HIGH);
    }
    else if(bLO == HIGH){
      LOData="LOW";
      digitalWrite(relayInput1, LOW);
    }
    if (bIR == LOW){
      IRData="HIGH";
      digitalWrite(relayInput2, HIGH);
  }
} value
float temp; //Stores temperature value
int relayInput = D6;

