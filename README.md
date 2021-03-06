# Project1003
1003- A C++ arduino based tiny circuit game, all features are complete

Play with your tamagochi, earn loot and gold from various games, fight randomly generated monsters and bosses and receive greater loot. Reach Mythic-level equipments to dominate the dungeons!

**download the SmartWatchAndroid folder

## Requirements
Libraries
  - Tinyscreen
  - RTCZero

Run by uploading SmartWatchAndroid to your tinycircuit

## Features
- Front Watch View
- Tamago Collector's Game
- Printed Side Buttons for [Left, Right, Up, Down]
- Health
- Gold
- Inventory [10 slots]
- Rune Slots [2 slots]

## Main Game Loop
- [X] Tamago sprite (ONE)
- [X] Mini game for the sprites
- [X] Rune of Luck/Blood/Fortune/Agility +1/2/3/4
- [X] Luck rune .. gold gen increases to 2/3/5/10
- [X] Blood rune increases your health to 115/135/170/210
- [X] Fortune rune .. decreases food cost to 7/6/4/1
- [X] Agility rune increases your health regeneration to 2/3/6/15
- [X] Up to 10 Runes can be stored, but you can only have 2 equipped
- [X] Dungeons: Free to play, you can fight endlessly until you die / escape
- [X] TamaGOLD uses gold each round and rewards Runes/Gold/Jackpot Gold/Nothing
- [X] TamaBOOM is free to play: Health loss per bomb and gold gain per spot digged
- [X] Random Quotes / death quotes / eat quotes
- [X] Sleep to regen health
- [X] Eat gold to regen health
- [X] Real-Time Penalty System

## Side Games
  
### Dungeon
  - [X] Your tamago vs random colored Ghost or Birds (8 diff colors each)
  - [X] Enemy Ghost have 40-60 health, 12-18 damage
  - [X] Enemy Bird have 55-95 health, 8-12 damage
  - [X] Randomized Prefixes (Edge: +6-12 Damage) (Tank: +10-20 hp) (Quick: +1 Attack per round) (Hide: 30% Chance dodge attack) 
  - [X] Randomized Suffix (Boss: +100hp, +20 Damage, +always mythic loot) (Slave: +25hp, +5 Damage, +always rare loot)
  - [X] e.g. [Edge R-Ghost Boss] [Tank G-Bird] [Quick B-Ghost] [Hide Y-Bird Boss]
  - [X] You get random uncommon loot from prefixed enemies + 30-60 gold from enemies
  - [X] You get random rare loot from Slave enemies + 40-70 gold
  - [X] You get random mythic from Boss enemies + 100-250 gold
  - [X] Attack: Deal 12 Damage
  - [X] Escape: Chance of escaping the entire dungeon at 15%, failure leads to loss of turn
  - [X] Stim: Pay 40 Gold to heal 30 health, you get one per fight
  - [X] Block: Lose your turn but parries the next hit. Random roll of 10, if more than 5, heal for the roll
  - [X] Blood Rune: Increase Damage dealt to 14/18/25/40
  - [X] Luck Rune: Increase Escape chance to 25/35/55/100%
  - [X] Agility Rune: You get an extra turn when attacking at a 7/16/30/66% chance (unlimited tries)
  - [X] Fortune Rune: You get additional 1/1/2/3 stims, your defenses heal you if the roll is more than 4/3/2/0

### TamaGOLD
  - [X] There are 21 spots on the ground to dig, use 10G*n (n is the holes digged in a row) to dig a spot.
  - [X] Randomizer will pick a type of reward to drop. When run, all item types have 1/7 (equal) chance of being selected, but have a % chance of item drop rate, (e.g. roll 1/7 on a common, 60% chance of it actually appearing as a drop, 40% rerolled)
  - [X] NOTHING (100% drop rate)
  - [X] common Rune (60% drop rate)
  - [X] uncommon Rune (30% drop rate) 
  - [X] 20G (30% drop rate)
  - [X] rare Rune (10% drop rate)
  - [X] mythic Rune (0% drop rate) !must equip at least luck 3 rune to spawn one
  - [X] 1000-1800G (10% drop rate) !per fortune increase 200
  - [X] Luck rune increases decreases NOTHING by 10% per rarity, +1 = +10% uncommon, +2 = +10% rare, +3 = +10% mythic, +4 = +10% jackpot
  - [X] Fortune rune increases jackpot gain by 200/400/600/800 depending on rarity
  
### Tamaboom
- [X] 21 spots to dig, Ratio of bombs to gold is 3:2, randomized. If you get bombed you lose 20 Health, you lose when you run out of health. For every spot digged you will get 5G*n (n is the number of spot digged)
- [X] You win an additional 100 gold if you manage to dig every spot filled with gold
- [X] Luck rune increases the ratio of bomb:gold to 3:3, 3:4, 3:5, 3:7 depending on rarity
- [X] Blood rune increases survival rate via health
- [X] Fortune rune increases gold gain to 6/7/9/15 *n depending on rarity
- [X] Agility rune increases chance to dodge a bomb by 8/17/29/55% depending on rarity, if you step on a bomb
