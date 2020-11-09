#include <Wire.h>
#include <SPI.h>
#include <TinyScreen.h>

TinyScreen display = TinyScreen(TinyScreenDefault);

void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  display.begin();
  display.on();
  display.setFlip(true);
  display.setBrightness(10);  
}

void loop() {
  // put your main code here, to run repeatedly:

}
