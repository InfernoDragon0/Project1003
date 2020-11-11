//This is an example 17x12 pixel bitmap using TS library color definitions
unsigned char flappyBirdBitmap[204]={
  TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,
  TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Black,TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,
  TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,
  TS_8b_Blue,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_White,TS_8b_Black,TS_8b_Blue,TS_8b_Blue,
  TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_White,TS_8b_Black,TS_8b_Blue,TS_8b_Blue,
  TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_Blue,TS_8b_Blue,
  TS_8b_Black,TS_8b_Yellow,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Yellow,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Blue,
  TS_8b_Blue,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_Red,TS_8b_Red,TS_8b_Red,TS_8b_Red,TS_8b_Red,TS_8b_Red,TS_8b_Black,
  TS_8b_Blue,TS_8b_Blue,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_Red,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,
  TS_8b_Blue,TS_8b_Blue,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_Red,TS_8b_Red,TS_8b_Red,TS_8b_Red,TS_8b_Red,TS_8b_Black,TS_8b_Blue,
  TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Black,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Blue,TS_8b_Blue,
  TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue,TS_8b_Blue
};

void drawBitmap(){
  //set a background that matches
  display.drawRect(0, 12, 96, 64,TSRectangleFilled,TS_8b_Blue);
  //let's set up for a bitmap at (40,30) that is 17 pixels wide and 12 pixels tall:
  //setX(x start, x end);//set OLED RAM to x start, wrap around at x end
  display.setX(40,40+17-1);
  //setY(y start, y end);//set OLED RAM to y start, wrap around at y end
  display.setY(30,30+12-1);
  //now start a data transfer
  display.startData();
  //writeBuffer(buffer,count);//optimized write of a large buffer of 8 bit data.
  display.writeBuffer(flappyBirdBitmap,17*12);
  display.endTransfer();
  delay(1000);
}

void loop1() {
  while(1){ //IDK this loop by right simulates void loop();
    if (display.getButtons(TSButtonUpperLeft)) { //This is the "condition" to break out of this infinite loop.
      initHomeScreen();
      break;
    }
    drawBitmap(); //Put whatever game function you have here
  }
}

void loop2(){
  while(1){
    if (display.getButtons(TSButtonUpperLeft)) { //This is the "condition" to break out of this infinite loop.
      initHomeScreen();
      break;
    }
    drawBitmap();
  }
}
