# Project1003

*NOTE: This repo will be private until submission date, from then on it will be public.

1003- A C++ arduino based tiny circuit game, 4 days to completion

## Features
- Front Watch View
- Tamago Collector's Game
- Printed Side Buttons for [Left, Right, Up, Down]
- Health
- Gold
- Inventory [10 slots]

## Main Game Loop
- [X] Tamago sprite (ONE)
- [X] Mini game for the sprites (Platformer + Gambler + Goldsweeper)
- [X] Rune of Luck +1/2/3/4, Rune of Speed +1/2/3/4, Rune of Fortune +1/2/3/4, Rune of Agility +1/2/3/4
- [ ] Luck rune increases TamaGOLD loot table, increases the gold spots in TamaBOOM, and increase gold spawn rate in RUN!
- [ ] Blood rune increases your health (more lenient on dying)
- [ ] Fortune rune increases TamaGOLD rates and your gold gain per RUN! coin obtained
- [ ] Agility rune grants you a +10% per rarity, max 40% chance of dodging an obstacle in RUN!
- [X] Up to 10 Runes can be stored, but you can only have 2 equipped
- [ ] RUN! is free to play: Mini game rewards gold, health loss per obstacle hit
- [X] TamaGOLD uses gold each round and rewards Runes/Gold/Jackpot Gold/Nothing
- [X] TamaBOOM is free to play: Health loss per bomb and gold gain per spot digged

## Side Games

### RUN
  - [ ] just run and jump, dodge obstacles, don't fall in holes, collect coins. 
  - [ ] Every 5m run will give 2G
  - [ ] 1 coin will give 2G, additional +1G per fortune
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
  - [ ] Blood rune .. regardless of rarity, pays half of the price using health
  - [X] Fortune rune increases jackpot gain by 200 per rarity, gold gain by 10 per rarity
  - [ ] Agility rune .. when digging out nothing, reduce gold loss by 10% per rarity
  
### Tamaboom
- [X] 21 spots to dig, Ratio of bombs to gold is 3:2, randomized. If you get bombed you lose 20 Health, you lose when you run out of health. For every spot digged you will get 5G*n (n is the number of spot digged)
- [X] You win an additional 100 gold if you manage to dig every spot filled with gold
- [ ] Luck rune increases the ratio of bomb:gold to 3:3, 3:4, 3:5, 3:6 depending on rarity
- [ ] Blood rune increases survival rate via health
- [ ] Fortune rune increases gold gain to 5+(1 per rarity)*n
- [ ] Agility rune increases chance to dodge a bomb, if you get hit by a bomb, by 5% per rarity
