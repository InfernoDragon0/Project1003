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
- [ ] Tamago sprite (ONE), Name your tamago
- [ ] Mini game for the sprites (Platformer + Gambler + Goldsweeper)
- [ ] Obtain Runes by purchasing [random Tamago goods 100G] (common/uncommon/rare/mythic)
- [ ] Rune of Luck +1/2/3/4, Rune of Speed +1/2/3/4, Rune of Fortune +1/2/3/4, Rune of Agility +1/2/3/4
- [ ] Luck rune increases TamaGOLD loot table, increases the gold spots in TamaBOOM, and increase gold spawn rate in RUN!
- [ ] Blood rune increases your health (more lenient on dying)
- [ ] Fortune rune increases TamaGOLD rates and your gold gain per RUN! coin obtained
- [ ] Agility rune grants you a +10% per rarity, max 40% chance of dodging an obstacle in RUN!
- [ ] Up to 10 Runes can be stored, but you can only have 2 equipped
- [ ] RUN! is free to play: Mini game rewards gold
- [ ] TamaGOLD uses gold each round and rewards Runes/Gold/Jackpot Gold/Nothing
- [X] TamaBOOM is free to play, Health loss per bomb and gold gain per spot digged

## Side Games

### RUN
- [ ] just run and jump, dodge obstacles, don't fall in holes, collect coins. Every 10m run will give 2G, 1 coin will give 1G +1 per fortune 
### TamaGOLD
  - [ ] There are 21 spots on the ground to dig, use 10G*n (n is the holes digged in a row) to dig a spot.
  - [ ] NOTHING (10 spots)
  - common Rune (5 spots or more)
  - uncommon Rune (1-3 spots) 
  - 20G (2-3 spots)
  - rare Rune (1 spot)
  - mythic Rune (0 spot) !must equip at least luck 3 rune to spawn one
  - 1000-1800G (1 part) !per fortune increase 200
  - [ ] Luck rune increases decreases NOTHING by 1 per rarity, +1 increases 1 uncommon, +2 increases 1 rare, +3 increases 1 mythic, +4 increases 1 jackpot
  - [ ] Blood rune ..
  - [ ] Fortune rune increases jackpot gain by 200 per rarity, gold gain by 10 per rarity
  - [ ] Agility rune ..
  
### Tamaboom
- [X] 21 spots to dig, Ratio of bombs to gold is 3:2, randomized. If you get bombed you lose 20 Health, you lose when you run out of health. For every spot digged you will get 5G*n (n is the number of spot digged)
- [X] You win an additional 100 gold if you manage to dig every spot filled with gold
- [ ] Luck rune increases the ratio of bomb:gold to 3:3, 3:4, 3:5, 3:6 depending on rarity
- [ ] Blood rune increases survival rate via health
- [ ] Fortune rune increases gold gain to 5+(1 per rarity)*n
- [ ] Agility rune increases chance to dodge a bomb, if you get hit by a bomb, by 5% per rarity
