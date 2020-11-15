//This is an example 17x12 pixel bitmap using TS library color definitions
unsigned char flappyBirdBitmap[204]={
  TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,
  TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,
  TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,
  TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_White,TS_8b_Black,TS_8b_Black,TS_8b_Black,
  TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_White,TS_8b_Black,TS_8b_Black,TS_8b_Black,
  TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Black,TS_8b_Black,TS_8b_Black,
  TS_8b_Black,TS_8b_Yellow,TS_8b_White,TS_8b_White,TS_8b_White,TS_8b_Yellow,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,
  TS_8b_Black,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_Red,TS_8b_Red,TS_8b_Red,TS_8b_Red,TS_8b_Red,TS_8b_Red,TS_8b_Black,
  TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_Red,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,
  TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_Red,TS_8b_Red,TS_8b_Red,TS_8b_Red,TS_8b_Red,TS_8b_Black,TS_8b_Black,
  TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,
  TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black
};

String lootRandomizer[21];
String lootRarity[5]={"c","u","r","e","l"};
String lootPart[3]= {"t","m","b"};

void drawBitmap(){
  //set a background that matches
  //display.drawRect(0, 10, 96, 64,TSRectangleFilled,TS_8b_Blue);
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
    drawBitmap(); //replace this for tamago game
  }
}

void loop2(){ //lootbox game
  byte curLocation = 0;
  
   //try creating a random loot table unweighted
  for (byte i = 0; i < 21; i++) {
      lootRandomizer[i] = lootRarity[random(0,4)] + lootPart[random(0,2)];
  }
  
  while(1){
    if (display.getButtons(TSButtonUpperLeft)) { //This is the "condition" to break out of this infinite loop.
      initHomeScreen();
      break;
    }

    if (display.getButtons(TSButtonLowerLeft)) { 
      if (curLocation < 21) {
        curLocation += 1;
      }
      
    }
    if (display.getButtons(TSButtonUpperRight)) {
      if (curLocation > 0) {
        curLocation -= 1;
      }
    }

    if (display.getButtons(TSButtonLowerRight)) {
       //some way to save this thing      
      
      display.setCursor(0,50);
      if (lootRandomizer[curLocation] == "none") {
        display.print("Nothing here");
      }
      else {
        display.print("Found: " + lootRandomizer[curLocation]);
        lootRandomizer[curLocation] = "none";
      }
      
    }
    

   display.setCursor(0,10);
   display.print("Current loot: ");
   display.print(curLocation);
   display.print("..");
   display.print(lootRandomizer[curLocation]);

   display.setCursor(0,20);
   for (byte y = 0; y < 3; y++) { //weird loop for 3 rows..?
      display.setCursor(0, 20 + (y*10));
      
      for (byte x = y*7; x < (y*7)+7; x++) {
        if (curLocation == (x+1)) {
          display.print("O ");
        }
        else {
          if (lootRandomizer[curLocation] == "none") {
            display.print("- ");
          }
          else {
            display.print("X ");
          }
          
        }      
      }
   }
   


   
    //drawBitmap();
  }
}
