
#define BLYNK_TEMPLATE_ID "TMPL6kGCXF7mI"
#define BLYNK_TEMPLATE_NAME "Weather Monitoring System"
#define BLYNK_AUTH_TOKEN "RI2qfZ9ozSPqf0hBziP7yqMyD3R3na25"
#define BLYNK_PRINT Serial  // Comment this out to disable prints and save space


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[]="RI2qfZ9ozSPqf0hBziP7yqMyD3R3na25";
char ssid[]="YuvaDesktop";
char pass[]="Yuva1234";

#define pinIR 2

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(pinIR,INPUT);
}

void loop() {
int  Motion_Status= digitalRead(pinIR);
if (Motion_Status == HIGH)
{
Blynk.virtualWrite(V0,"Motion Detected");
}else
{
  Blynk.virtualWrite(V0,"No Motion Detected");
}

}
