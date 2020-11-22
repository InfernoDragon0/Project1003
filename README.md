# Project1003

*NOTE: This repo will be private until submission date, from then on it will be public.

1003- A C++ arduino based tiny circuit game, 4 days to completion

## Features
- Front Watch View
- Tamago Collector's Game
- Printed Side Buttons for [Left, Right, Up, Down]

## Main Game Loop
- [ ] Tamago sprite (ONE), Name your tamago
- [ ] Mini game for the sprites (Platformer + Gambler + Goldsweeper)
- [ ] Obtain Runes by purchasing [random Tamago goods 100G] (common/uncommon/rare/mythic)
- [ ] Rune of Luck +1/2/3/4, Rune of Speed +1/2/3/4, Rune of Fortune +1/2/3/4, Rune of Agility +1/2/3/4
- [ ] Luck rune increases TamaGOLD rare/mythic spawn chance
- [ ] Speed rune increases your RUN! speed (the more distance you run the more gold you get)
- [ ] Fortune rune increases TamaGOLD rates and your gold gain per RUN! coin obtained
- [ ] Agility rune grants you a +10% per rarity, max 40% chance of dodging an obstacle in RUN!
- [ ] Up to 10 Runes can be stored, but you can only have 2 equipped
- [ ] RUN! is free to play: Mini game rewards gold
- [ ] TamaGOLD uses gold each round and rewards Runes/Gold/Jackpot Gold/Nothing
- [X] TamaBOOM is free to play, Health loss per bomb and gold gain per spot digged

## Side Games
- [ ] RUN!: just run and jump, dodge obstacles, don't fall in holes, collect coins. Every 10m run will give 2G, 1 coin will give 1G +1 per fortune 
- [ ] TamaGOLD: 
  - There are 21 spots on the ground to dig, use 10G*n+1 (n is the holes digged in a row) to dig a spot. Spots are filled as per, without luck rune: 
  - NOTHING (10 spots)
  - common Rune (5 spots or more)
  - uncommon Rune (1-3 spots) 
  - 20G (2-3 spots)
  - rare Rune (1 spot)
  - mythic Rune (0-1 spot) !must equip at least luck 3 rune to spawn one
  - 1000-1800G (1 part) !per fortune increase 200
- [X] TamaBOOM: 21 spots to dig, Ratio of bombs to gold is 3:2. If you get bombed you lose 20 Health, you lose when you run out of health. For every spot digged you will get 5G*n (n is the number of spot digged)
- [X] TamaBOOM: You win an additional 100 gold if you manage to dig every spot filled with gold
