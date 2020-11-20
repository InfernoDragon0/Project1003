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

int16_t gold = 0;
char gold_buffer[11];

int16_t hp = 100;
char hp_buffer[8];

// Control HP
void chkHP(){
  if(hp >= 100){
    hp = 100;
  }
  else if(hp <= 0){
    hp = 0;
  }
  else{
  }
}

// Update HP Function
void updateHP(){
  chkHP();
  display.setCursor(0,10);
  snprintf(hp_buffer, 8, "HP:%03d", hp);
  display.println(hp_buffer);
}

// Control Gold
void chkGold(){
  if(gold >= 10000){
    gold = 9999;
  }
  else if(gold <= -10000){
    gold = -9999;
  }
  else{
  }
}

// Update Gold Function
void updateGold(){
  chkGold();
  display.setCursor(45,10);
  snprintf(gold_buffer, 11, "Gold:%04d", gold);
  display.println(gold_buffer);
}

//If dead then revive
void chkDead(){
  if(hp <= 0){
    gold -= 50;
    hp += 100;
    display.setCursor(0,50);
    display.print("You Died. Reviving..");
    delay(500);
    display.clearWindow(0, 40, 96, 64);
    display.setCursor(0,50);
    display.print("Meowelcome Back!");
    updateHP();
    updateGold();
  }
  else{
  }
}

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
  //First Run
  chkDead();
  updateHP();
  updateGold();
  display.setCursor(0,50);
  display.print("Meowelcome Back!");
  delay(500);
  while(1){ //IDK this loop by right simulates void loop();
    if (display.getButtons(TSButtonUpperLeft)) { //This is the "condition" to break out of this infinite loop.
      initHomeScreen();
      break;
    }
    if (display.getButtons(TSButtonLowerLeft)){ //Play
      display.clearWindow(0, 40, 96, 64);
      display.setCursor(0,50);
      display.print("I'M WALKING HERE!");
      hp -= 10;
      updateHP();
      updateGold();
    }
    if (display.getButtons(TSButtonUpperRight)){ //Feed
      display.clearWindow(0, 40, 96, 64);
      display.setCursor(0,50);
      display.print("Munch Munch~~");
      hp += 2;
      updateHP();
      updateGold();
    }
    if (display.getButtons(TSButtonLowerRight)){ //Sleep?
      display.clearWindow(0, 40, 96, 64);
      display.setCursor(0,50);
      display.print("I am sleepwy...");
      delay(1000);
      for (uint8_t i = 0; i < 10; i++){
        delay(1000);
        display.clearWindow(0, 50, 96, 64);
        display.setCursor(0,50);
        delay(1000);
        display.print("Zzzzzz....");
        hp += 1;
        updateHP();
      }
      display.clearWindow(0, 40, 96, 64);
      display.setCursor(0,50);
      display.print("Hello!");
      updateHP();
      updateGold();
    }
    chkDead();
    updateGold();
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

// Game 3 starts here
void loop3() {
  while(1){
    if (display.getButtons(TSButtonUpperLeft)) { //This is the "condition" to break out of this infinite loop.
      initHomeScreen();
      break;
    }
    //Put whatever game function you have here
  }
}

// Modifiers
void loop4() {
  while(1){
    if (display.getButtons(TSButtonUpperLeft)) { //This is the "condition" to break out of this infinite loop.
      initHomeScreen();
      break;
    }
    //Put whatever game function you have here
  }
}
