// Game 1 starts here
//This is a placeholder
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

uint16_t score = 0;
char num_buffer[12];


void drawBitmap(){
  //set a background that matches
  //display.drawRect(0, 12, 96, 64,TSRectangleFilled,TS_8b_Blue);
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
//testing code feel free to change
void loop1() {
  display.setCursor(0,50);
  display.print("Meowelcome Back!");
  delay(500);
  while(1){ //IDK this loop by right simulates void loop();
    if (display.getButtons(TSButtonUpperLeft)) { //This is the "condition" to break out of this infinite loop.
      initHomeScreen();
      break;
    }
    if (display.getButtons(TSButtonLowerLeft)){ //Play
      score += 1;
      display.clearWindow(0, 50, 96, 64);
      display.setCursor(0,50);
      snprintf(num_buffer, 12, "Score: %04d", score);
      display.println(num_buffer);
      
    }
    if (display.getButtons(TSButtonUpperRight)){ //Feed
      display.clearWindow(0, 50, 96, 64);
      display.setCursor(0,50);
      display.print("Munch Munch~~");
    }
    if (display.getButtons(TSButtonLowerRight)){ //Something
      display.clearWindow(0, 50, 96, 64);
      display.setCursor(0,50);
      display.print("I am sleepwy");
    }
    drawBitmap(); //Put whatever game function you have here
    //How does one write game ticks?
    uint32_t startLTime = millis();
    uint32_t endLTime = millis();
    
  }
}

// Game 2 starts here
String lootRandomizer[21];
String lootRarity[5]={"c","u","r","e","l"};
String lootPart[3]= {"t","m","b"};

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

String bombs[21];


// Game 3 starts here
void loop3() {

  byte curLocation = 0;
  byte sweeped = 0;
  
   //try creating a random loot table bomb ratio 2:3
  for (byte i = 0; i < 21; i++) {
      bombs[i] = random(0,5) >= 3 ? "O" : "B";
  }
  
  while(1){
    if (display.getButtons(TSButtonUpperLeft)) { //This is the "condition" to break out of this infinite loop.
      initHomeScreen();
      break;
    }
    //Put whatever game function you have here
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
      if (bombs[curLocation] == "O") {
        display.print("You gained ");
        sweeped++;
        display.print(5*sweeped);
        display.print(" Gold");
        bombs[curLocation] = "X";

      }
      else if (bombs[curLocation] == "B") {
        display.clearWindow(0, 10, 96, 64);
    
        display.setCursor(0,30);
        display.print("Boom! you lose!");
        //end gamehere
        delay(2000);
        initHomeScreen();
        break;
        
      }
      else {
        display.print("Found: Nothing here");
      }

    }

    display.setCursor(0,10);
   display.print("Debug loot: ");
   display.print(curLocation);
   display.print("..");
   display.print(bombs[curLocation]);

    display.setCursor(0,20);
     for (byte y = 0; y < 3; y++) { //weird loop for 3 rows..?
        display.setCursor(0, 20 + (y*10));
        
        for (byte x = y*7; x < (y*7)+7; x++) {
          if (curLocation == (x+1)) {
            display.print("O ");
          }
          else {
             if (bombs[x+1] == "X") {
            display.print("- ");
          }
          else {
              display.print("X ");
            
            
          }
          }
               
        }
     }
  }
}
