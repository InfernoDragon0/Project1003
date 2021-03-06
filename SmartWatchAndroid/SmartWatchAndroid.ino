//-------------------------------------------------------------------------------
//  SIT-ICT1003 Project for the TinyZero
//  Last Updated 25 November 2020
//
//  This project uses the TinyScreen SmartWatch as a starting base point.
//  The components that is needed to use this project is:
//  TinyZero, TinyScreen and an optional Battery.
//  Features the Watch feature and a couple of fun games with global 
//  mechanics that connects with each other. Great for casual gaming on the go.
//
//  This project is released to the public under GNU GPLv3,
//  Please kindly acknowledge/credit the authors.
//
//  Acknowledgements & Credits:
//  
//  1) SmartWatch base: Ben Rose, TinyCircuits http://TinyCircuits.com
//  2) Main Developer: InfernoDragon0, https://github.com/InfernoDragon0
//  3) Co-Developer: bonitodashi, https://github.com/bonitodashi
//
//-------------------------------------------------------------------------------

#include <SPI.h>
#include <TinyScreen.h>
#include <Wire.h>

#define menu_debug_print false

#if defined (ARDUINO_ARCH_AVR)
TinyScreen display = TinyScreen(TinyScreenDefault);
#define SerialMonitorInterface Serial
#include <TimeLib.h>

#elif defined(ARDUINO_ARCH_SAMD)
TinyScreen display = TinyScreen(TinyScreenDefault);
#define SerialMonitorInterface SerialUSB
#include <RTCZero.h>
#include <time.h>
RTCZero RTCZ;
uint32_t startTime = 0;
uint32_t sleepTime = 0;
unsigned long millisOffsetCount = 0;

void wakeHandler() {
  if (sleepTime) {
    millisOffsetCount += (RTCZ.getEpoch() - sleepTime);
    sleepTime = 0;
  }
}
#endif

uint8_t defaultFontColor = TS_8b_White;
uint8_t defaultFontBG = TS_8b_Black;
uint8_t inactiveFontColor = TS_8b_Gray;
uint8_t inactiveFontBG = TS_8b_Black;

uint8_t topBarHeight = 10;
uint8_t timeY = 14;
uint8_t menuTextY[4] = {12, 25, 38, 51};

unsigned long lastReceivedTime = 0;

unsigned long batteryUpdateInterval = 10000;
unsigned long lastBatteryUpdate = 0;

unsigned long sleepTimer = 0;
int sleepTimeout = 5;

uint8_t rewriteTime = true;

uint8_t displayOn = 0;
uint8_t buttonReleased = 1;
uint8_t rewriteMenu = false;
unsigned long mainDisplayUpdateInterval = 300;
unsigned long lastMainDisplayUpdate = 0;

int brightness = 5;
uint8_t lastSetBrightness = 100;

const FONT_INFO& font10pt = thinPixel7_10ptFontInfo;
const FONT_INFO& font22pt = liberationSansNarrow_22ptFontInfo;

void setup(void)
{

#if defined (ARDUINO_ARCH_AVR)
  for (int i = 0; i < 20; i++) {
    pinMode(i, INPUT_PULLUP);
  }
  setTime(22, 10, 10, 26, 11, 20); //h, m, s, d, m, y
#elif defined(ARDUINO_ARCH_SAMD)
 /* for (int i = 0; i < 27; i++) {
    pinMode(i, INPUT_PULLUP);
  }
  pinMode(28, INPUT_PULLUP);
  pinMode(29, INPUT_PULLUP);
  pinMode(42, INPUT_PULLUP);
  pinMode(44, INPUT_PULLUP);
  pinMode(45, INPUT_PULLUP);
  pinMode(A4, INPUT);
  pinMode(2, INPUT);*/
  RTCZ.begin();
  RTCZ.setTime(22, 00, 00);//h,m,s
  RTCZ.setDate(26, 11, 20);//d,m,y
  //RTCZ.attachInterrupt(RTCwakeHandler);
  //RTCZ.enableAlarm(RTCZ.MATCH_HHMMSS);
  //RTCZ.setAlarmEpoch(RTCZ.getEpoch() + 1);
//  attachInterrupt(TSP_PIN_BT1, wakeHandler, FALLING);
//  attachInterrupt(TSP_PIN_BT2, wakeHandler, FALLING);
//  attachInterrupt(TSP_PIN_BT3, wakeHandler, FALLING);
//  attachInterrupt(TSP_PIN_BT4, wakeHandler, FALLING);
#endif
  Wire.begin();
  SerialMonitorInterface.begin(115200);
  display.begin();
  display.setFlip(true);
  initHomeScreen();
  requestScreenOn();
  delay(100);

#if defined(ARDUINO_ARCH_SAMD)
  // https://github.com/arduino/ArduinoCore-samd/issues/142
  // Clock EIC in sleep mode so that we can use pin change interrupts
  // The RTCZero library will setup generic clock 2 to XOSC32K/32
  // and we'll use that for the EIC. Increases power consumption by ~50uA
  //GCLK->CLKCTRL.reg = uint16_t(GCLK_CLKCTRL_CLKEN | GCLK_CLKCTRL_GEN_GCLK2 | GCLK_CLKCTRL_ID( GCLK_CLKCTRL_ID_EIC_Val ) );
  //while (GCLK->STATUS.bit.SYNCBUSY) {}
#endif
  //while (millisOffset() < 1000)BLEProcess();
  //display.off();
  //while (1) RTCZ.standbyMode();
}

uint32_t millisOffset() {
#if defined (ARDUINO_ARCH_AVR)
  return millis();
#elif defined(ARDUINO_ARCH_SAMD)
  return (millisOffsetCount * 1000ul) + millis();
#endif
}

void loop() {
  if (displayOn && (millisOffset() > mainDisplayUpdateInterval + lastMainDisplayUpdate)) {
    updateMainDisplay();
  }
  if (millisOffset() > sleepTimer + ((unsigned long)sleepTimeout*1000ul)) {
    if (displayOn) {
      displayOn = 0;
      display.off();
    }
#if defined(ARDUINO_ARCH_SAMD)
    //watchSleep();
#endif
  }
  checkButtons();
  penalty();
}

void updateTime(uint8_t * b) {
  int y, M, d, k, m, s;
  char * next;
  y = strtol((char *)b, &next, 10);
  M = strtol(next, &next, 10);
  d = strtol(next, &next, 10);
  k = strtol(next, &next, 10);
  m = strtol(next, &next, 10);
  s = strtol(next, &next, 10);
#if defined (ARDUINO_ARCH_AVR)
  setTime(k, m, s, d, M, y);
#elif defined(ARDUINO_ARCH_SAMD)
  RTCZ.setTime(k, m, s);
  RTCZ.setDate(d, M, y - 2000);
#endif
}

int requestScreenOn() {
  sleepTimer = millisOffset();
  if (!displayOn) {
    displayOn = 1;
    updateMainDisplay();
    display.on();
    return 1;
  }
  return 0;
}

void checkButtons() {
  byte buttons = display.getButtons();
  if (buttonReleased && buttons) {
    if (displayOn)
      buttonPress(buttons);
    requestScreenOn();
    buttonReleased = 0;
  }
  if (!buttonReleased && !(buttons & 0x0F)) {
    buttonReleased = 1;
  }
}

// Real-Time tracking BETA
unsigned long astartLTime = 0;
unsigned long aendLTime = 0;
uint8_t deduct = 0;
uint16_t atimeDiff = 0;
uint32_t atimeElapsed = 0;

uint16_t penalty(){
  astartLTime = millis();
  aendLTime = millis() + 1;
  atimeDiff = aendLTime - astartLTime;
  atimeElapsed += atimeDiff;
  if(atimeElapsed >= 864000){ //864000
    atimeElapsed = 0;
    deduct += 1; // use this value for gold gen
    //if (menu_debug_print)SerialMonitorInterface.println(deduct);
  }
  return deduct;
}
