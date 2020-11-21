// Game 1 starts here
//This is a placeholder
unsigned char flappyBirdBitmap[204] = {
  TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black,
  TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_White, TS_8b_White, TS_8b_White, TS_8b_Black, TS_8b_White, TS_8b_White, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black,
  TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_White, TS_8b_White, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Black, TS_8b_White, TS_8b_White, TS_8b_White, TS_8b_White, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black,
  TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Black, TS_8b_White, TS_8b_White, TS_8b_White, TS_8b_Black, TS_8b_White, TS_8b_Black, TS_8b_Black, TS_8b_Black,
  TS_8b_Black, TS_8b_White, TS_8b_White, TS_8b_White, TS_8b_White, TS_8b_Black, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Black, TS_8b_White, TS_8b_White, TS_8b_White, TS_8b_Black, TS_8b_White, TS_8b_Black, TS_8b_Black, TS_8b_Black,
  TS_8b_Black, TS_8b_White, TS_8b_White, TS_8b_White, TS_8b_White, TS_8b_White, TS_8b_Black, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Black, TS_8b_White, TS_8b_White, TS_8b_White, TS_8b_White, TS_8b_Black, TS_8b_Black, TS_8b_Black,
  TS_8b_Black, TS_8b_Yellow, TS_8b_White, TS_8b_White, TS_8b_White, TS_8b_Yellow, TS_8b_Black, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black,
  TS_8b_Black, TS_8b_Black, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Black, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Black, TS_8b_Red, TS_8b_Red, TS_8b_Red, TS_8b_Red, TS_8b_Red, TS_8b_Red, TS_8b_Black,
  TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Black, TS_8b_Red, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black,
  TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Black, TS_8b_Red, TS_8b_Red, TS_8b_Red, TS_8b_Red, TS_8b_Red, TS_8b_Black, TS_8b_Black,
  TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Yellow, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black,
  TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black
};

// Modifier icons
unsigned char heart[40] = {
  TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black,
  TS_8b_Black, TS_8b_Red, TS_8b_Black, TS_8b_Red, TS_8b_Black,
  TS_8b_Red, TS_8b_Red, TS_8b_Red, TS_8b_Red, TS_8b_Red,
  TS_8b_Red, TS_8b_Red, TS_8b_Red, TS_8b_Red, TS_8b_Red,
  TS_8b_Red, TS_8b_Red, TS_8b_Red, TS_8b_Red, TS_8b_Red,
  TS_8b_Black, TS_8b_Red, TS_8b_Red, TS_8b_Red, TS_8b_Black,
  TS_8b_Black, TS_8b_Black, TS_8b_Red, TS_8b_Black, TS_8b_Black,
  TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black, TS_8b_Black
};

unsigned char lightning[40] = {
  TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Yellow,
  TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Yellow,TS_8b_Black,
  TS_8b_Black,TS_8b_Black,TS_8b_Yellow,TS_8b_Black,TS_8b_Black,
  TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,
  TS_8b_Black,TS_8b_Black,TS_8b_Yellow,TS_8b_Black,TS_8b_Black,
  TS_8b_Black,TS_8b_Yellow,TS_8b_Black,TS_8b_Black,TS_8b_Black,
  TS_8b_Yellow,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,
  TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black,TS_8b_Black
};

unsigned char seven[40] = {
  TS_8b_Green,TS_8b_Green,TS_8b_Green,TS_8b_Green,TS_8b_Green,
  TS_8b_Green,TS_8b_Green,TS_8b_Green,TS_8b_Green,TS_8b_Green,
  TS_8b_Green,TS_8b_Black,TS_8b_Black,TS_8b_Green,TS_8b_Green,
  TS_8b_Black,TS_8b_Black,TS_8b_Green,TS_8b_Green,TS_8b_Black,
  TS_8b_Black,TS_8b_Green,TS_8b_Green,TS_8b_Black,TS_8b_Black,
  TS_8b_Green,TS_8b_Green,TS_8b_Black,TS_8b_Black,TS_8b_Black,
  TS_8b_Green,TS_8b_Green,TS_8b_Black,TS_8b_Black,TS_8b_Black,
  TS_8b_Green,TS_8b_Green,TS_8b_Black,TS_8b_Black,TS_8b_Black
};

unsigned char money[40] = {
  TS_8b_Black,TS_8b_Black,TS_8b_Yellow,TS_8b_Black,TS_8b_Black,
  TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,
  TS_8b_Yellow,TS_8b_Black,TS_8b_Yellow,TS_8b_Black,TS_8b_Black,
  TS_8b_Yellow,TS_8b_Black,TS_8b_Yellow,TS_8b_Black,TS_8b_Black,
  TS_8b_Black,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,
  TS_8b_Black,TS_8b_Black,TS_8b_Yellow,TS_8b_Black,TS_8b_Yellow,
  TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Yellow,TS_8b_Black,
  TS_8b_Black,TS_8b_Black,TS_8b_Yellow,TS_8b_Black,TS_8b_Black
};

void retMenu(){
  display.clearWindow(0, 10, 96, 64);
  mainMenu(0);
}

// Modifiers variables
bool modHP = false;

int16_t gold = 100;
char gold_buffer[11];

int16_t hp = 100;
char hp_buffer[8];

// Control HP
void chkHP() {
  if (modHP == true) {
    if (hp >= 150){
      hp = 150;
    }
    else if (hp <= 0) {
      hp = 0;
    }
  }
  else if (hp >= 100) {
    hp = 100;
  }
  else if (hp <= 0) {
    hp = 0;
  }
}

// Update HP Function
void updateHP() {
  chkHP();
  display.setCursor(0, 10);
  snprintf(hp_buffer, 8, "HP:%03d", hp);
  display.println(hp_buffer);
}

// Control Gold
void chkGold() {
  if (gold >= 10000) {
    gold = 9999;
  }
  else if (gold <= -10000) {
    gold = -9999;
  }
}

// Update Gold Function
void updateGold() {
  chkGold();
  display.setCursor(45, 10);
  snprintf(gold_buffer, 11, "Gold:%04d", gold);
  display.println(gold_buffer);
}

// If dead then revive
void chkDead() {
  if (hp <= 0) {
    gold -= 50;
    hp += 100;
    display.setCursor(0, 55);
    display.print("You Lose. Reviving..");
    delay(1500);
    display.clearWindow(0, 60, 96, 64);
    display.setCursor(0, 55);
    display.print("Ressurected!");
    updateHP();
    updateGold();
  }
}


void drawBitmap() {
  //set a background that matches
  //display.drawRect(0, 12, 96, 64,TSRectangleFilled,TS_8b_Blue);
  //let's set up for a bitmap at (40,30) that is 17 pixels wide and 12 pixels tall:
  //setX(x start, x end);//set OLED RAM to x start, wrap around at x end
  display.setX(40, 40 + 17 - 1);
  //setY(y start, y end);//set OLED RAM to y start, wrap around at y end
  display.setY(30, 30 + 12 - 1);
  //now start a data transfer
  display.startData();
  //writeBuffer(buffer,count);//optimized write of a large buffer of 8 bit data.
  display.writeBuffer(flappyBirdBitmap, 17 * 12);
  display.endTransfer();
  delay(100);
}
void drawHeart() {
  display.setX(10, 10 + 5 - 1);
  display.setY(30, 30 + 8 - 1);
  display.startData();
  display.writeBuffer(heart, 5 * 8);
  display.endTransfer();
  delay(100);
}
void drawLightning() {
  display.setX(20, 20 + 5 - 1);
  display.setY(30, 30 + 8 - 1);
  display.startData();
  display.writeBuffer(lightning, 5 * 8);
  display.endTransfer();
  delay(100);
}
void drawSeven() {
  display.setX(76, 76 + 5 - 1);
  display.setY(30, 30 + 8 - 1);
  display.startData();
  display.writeBuffer(seven, 5 * 8);
  display.endTransfer();
  delay(100);
}
void drawMoney() {
  display.setX(86, 86 + 5 - 1);
  display.setY(30, 30 + 8 - 1);
  display.startData();
  display.writeBuffer(money, 5 * 8);
  display.endTransfer();
  delay(100);
}

// Its all about the ticks
uint32_t startLTime = 0;
uint32_t endLTime = 0;
uint32_t timeDiff = 0;
uint32_t timeElapsed = 0;

void timePassed(){
  startLTime = millis();
  endLTime = millis() + 1;
  timeDiff = endLTime - startLTime;
  timeElapsed += timeDiff;
}

void RTP(){
  hp -= deduct;
  deduct = 0;
  atimeElapsed = 0;
  updateHP();
}

// Health penalty when idle
void penaltyHP(){
  if(timeElapsed >= 16200){
    hp -= 1;
    timeElapsed = 0;
    updateHP();
  }
}

void loop1() {
  chkDead();
  RTP();
  updateGold();
  drawBitmap();
  display.setCursor(0, 52);
  display.print("Meowelcome Back!");
  drawHeart(); //remove before prod
  drawLightning(); //remove before prod
  drawSeven(); //remove before prod
  drawMoney(); //remove before prod
  while (1) { // Void loop simulation
    if (display.getButtons(TSButtonUpperLeft)) { //This is the "condition" to break out of this infinite loop.
      retMenu();
      break;
    }
    if (display.getButtons(TSButtonLowerLeft)) { //Play
      display.clearWindow(0, 40, 96, 64);
      display.setCursor(0, 52);
      display.print("Computers r magick");
      hp -= 10;
      updateHP();
      updateGold();
    }
    if (display.getButtons(TSButtonUpperRight)) { //Feed
      display.clearWindow(0, 40, 96, 64);
      display.setCursor(0, 52);
      display.print("Munch Munch~~");
      hp += 2;
      updateHP();
      updateGold();
    }
    if (display.getButtons(TSButtonLowerRight)) { //Sleep
      display.clearWindow(0, 40, 96, 64);
      display.setCursor(0, 52);
      display.print("I am sleepwy...");
      delay(1000);
      for (uint8_t i = 0; i < 10; i++) {
        delay(1000);
        display.clearWindow(0, 40, 96, 64);
        display.setCursor(0, 52);
        delay(1000);
        display.print("Zzzzzzzzzzzzz....");
        hp += 1;
        updateHP();
      }
      display.clearWindow(0, 40, 96, 64);
      display.setCursor(0, 52);
      display.print("Ahh~! A good nap!");
      updateHP();
      updateGold();
    }
    chkDead();
    updateGold();
    timePassed();
    penaltyHP();
  }
}

// Game 2 starts here
String lootRandomizer[21];
String lootRarity[5] = {"c", "u", "r", "e", "l"};
String lootPart[3] = {"t", "m", "b"};

void loop2() { //lootbox game
  byte curLocation = 0;

  //try creating a random loot table unweighted
  for (byte i = 0; i < 21; i++) {
    lootRandomizer[i] = lootRarity[random(0, 4)] + lootPart[random(0, 2)];
  }

  while (1) {
    if (display.getButtons(TSButtonUpperLeft)) { //This is the "condition" to break out of this infinite loop.
      retMenu();
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

      display.setCursor(0, 50);
      if (lootRandomizer[curLocation] == "none") {
        display.print("Nothing here");
      }
      else {
        display.print("Found: " + lootRandomizer[curLocation]);
        lootRandomizer[curLocation] = "none";
      }

    }


    display.setCursor(0, 10);
    display.print("Current loot: ");
    display.print(curLocation);
    display.print("..");
    display.print(lootRandomizer[curLocation]);

    display.setCursor(0, 20);
    for (byte y = 0; y < 3; y++) { //weird loop for 3 rows..?
      display.setCursor(0, 20 + (y * 10));

      for (byte x = y * 7; x < (y * 7) + 7; x++) {
        if (curLocation == (x + 1)) {
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
    bombs[i] = random(0, 5) >= 3 ? "O" : "B";
  }

  while (1) {
    if (display.getButtons(TSButtonUpperLeft)) { //This is the "condition" to break out of this infinite loop.
      retMenu();
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

      display.setCursor(0, 50);
      if (bombs[curLocation] == "O") {
        display.print("You gained ");
        sweeped++;
        display.print(5 * sweeped);
        display.print(" Gold");
        bombs[curLocation] = "X";

        gold += 5 * sweeped;

      }
      else if (bombs[curLocation] == "B") {
        display.clearWindow(0, 10, 96, 64);

        display.setCursor(0, 30);
        display.print("Boom! you lose!");
        hp -= 20;
        //end gamehere
        delay(2000);
        retMenu();
        break;

      }
      else {
        display.print("Found: Nothing here");
      }

    }

    display.setCursor(0, 10);
    display.print("Debug loot: ");
    display.print(curLocation);
    display.print("..");
    display.print(bombs[curLocation]);

    display.setCursor(0, 20);
    for (byte y = 0; y < 3; y++) { //weird loop for 3 rows..?
      display.setCursor(0, 20 + (y * 10));

      for (byte x = y * 7; x < (y * 7) + 7; x++) {
        if (curLocation == (x + 1)) {
          display.print("O ");
        }
        else {
          if (bombs[x + 1] == "X") {
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

// Run
void loop4() {
  while (1) {
    if (display.getButtons(TSButtonUpperLeft)) { //This is the "condition" to break out of this infinite loop.
      retMenu();
      break;
    }
    //Put whatever game function you have here
  }
}

// Modifiers, variables must be global ^
void loop5() {
  while (1) {
    if (display.getButtons(TSButtonUpperLeft)) { //This is the "condition" to break out of this infinite loop.
      retMenu();
      break;
    }
    //Put whatever game function you have here
  }
}
