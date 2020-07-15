#include <AnalogSensor.h>
#define LDR_PIN A0

#include <Adafruit_NeoPixel.h>
#define LED_PIN 6
#define LED_COUNT 10
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  
 Serial.begin(9600);

  strip.begin();
  strip.show();
 
}

void loop() {

int LDRValue = analogRead(A0);
Serial.println(LDRValue);

for(int i=0; i<LED_COUNT; i++) {strip.setPixelColor(i, strip.Color(93, 72, 20));}

if (LDRValue>0, LDRValue<=200) strip.setBrightness(20);
if (LDRValue>200, LDRValue<=400) strip.setBrightness(80);
if (LDRValue>400, LDRValue<=600) strip.setBrightness(120);
if (LDRValue>600, LDRValue<=800) strip.setBrightness(200);
if (LDRValue>800, LDRValue<=1024) strip.setBrightness(240);

strip.show();


}
