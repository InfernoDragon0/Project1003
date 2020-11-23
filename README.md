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
- [X] Rune of Luck/Blood/Fortune/Agility +1/2/3/4
- [X] Luck rune .. gold gen increases to 2/3/5/10
- [X] Blood rune increases your health to 115/135/170/210
- [X] Fortune rune .. decreases food cost to 7/6/4/1
- [X] Agility rune increases your health regeneration to 2/3/6/15
- [X] Up to 10 Runes can be stored, but you can only have 2 equipped
- [ ] RUN! is free to play: Mini game rewards gold, health loss per obstacle hit
- [X] TamaGOLD uses gold each round and rewards Runes/Gold/Jackpot Gold/Nothing
- [X] TamaBOOM is free to play: Health loss per bomb and gold gain per spot digged
- [X] Random Quotes
- [X] Sleep to regen health
- [X] Eat gold to regen health

## Side Games

### RUN
  - [ ] just run and jump, dodge obstacles, don't fall in holes, collect coins. 
  - [ ] Every 5m run will give 2G
  - [X] Blood Rune increases survival rate via health
  - [ ] Fortune Rune increases gold gain per coin 2G +1G per rarity
  - [ ] Agility Rune grants +10% chance of dodging an obstacle per rarity
  - [ ] Luck Rune grants increased coin spawn rate by 10% per rarity
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
  - [X] Fortune rune increases jackpot gain by 200/400/600/800 depending on rarity
  - [ ] Agility rune .. when digging out nothing, reduce gold loss by 10% per rarity
  
### Tamaboom
- [X] 21 spots to dig, Ratio of bombs to gold is 3:2, randomized. If you get bombed you lose 20 Health, you lose when you run out of health. For every spot digged you will get 5G*n (n is the number of spot digged)
- [X] You win an additional 100 gold if you manage to dig every spot filled with gold
- [X] Luck rune increases the ratio of bomb:gold to 3:3, 3:4, 3:5, 3:7 depending on rarity
- [X] Blood rune increases survival rate via health
- [X] Fortune rune increases gold gain to 6/7/9/15 *n depending on rarity
- [X] Agility rune increases chance to dodge a bomb by 8/17/29/55% depending on rarity, if you step on a bomb
