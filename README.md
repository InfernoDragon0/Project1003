# Project1003

*NOTE: This repo will be private until submission date, from then on it will be public.

1003- A C++ arduino based tiny circuit game, ~14 days to completion

## Features
- Front Watch View
- Tamago Collector's Game
- Printed Side Buttons for [Left, Right, Up, Down]
- Bluetooth Connectivity (TBC)

## Main Game Loop
- [ ] Tamago sprites (1st one is free common random Gen)
- [ ] Mini game for the sprites
- [ ] Trading via bluetooth (TBC)
- [ ] Obtain more Tamago sprite by purchasing [lootbox 300G] or [better lootbox 1000G] or [random Tamago goods 40G] (top/middle/bottom, or other stuff)
- [ ] Up to 20 Tamago can be stored, but you can only have 2 at the beginning, must purchase [expansion slot 50g*n] (n is slots owned)
- [ ] Assemble your own Tamago, Name it
- [ ] Energy depletes per mini game
- [ ] Mini game rewards gold or energy based on conditions
- [ ] Energy can be renewed by caring for tamago (TBC)
- [ ] Inventory of Tamago and parts + loot boxes
- [ ] Tamago have rarity
- [ ] Higher rarity = more energy and more gold per game etc
- [ ] Rarity comes in common/uncommon/rare/epic/legendary
- [ ] Gear level from 3 - 15
- [ ] Gear score for parts common: 1, uncommon: 2, rare: 3, epic: 4, legendary: 5
- [ ] Tamago is made up of TOP + MIDDLE + BOTTOM parts

## Side Games
- [ ] Run (platformer style): just run and jump, dodge obstacles, don't fall in holes, collect coins. Every 10m run will give 1G, 20 coins will give 5G
- [ ] PREMIUM Ground Digging (gambling style) instead of using energy, uses gold to play. 
  - There are 25 spots on the ground to dig, toss 10G*n (n is the holes digged in a row, first dig is free) to dig a spot. All spots are filled as per: 
  - NOTHING (10 spots)
  - common Tamago part (5 spots or more)
  - uncommon Tamago part (1-3 spots) 
  - 20G (2-3 spots)
  - rare Tamago part (1 spot)
  - epic Tamago part (0-1 spot)
  - legendary Tamago shard (0-1 spot, 2 shards to make 1 part)
  - full energy refill (1 part) *note the numbers will be randomly generated
- [ ] Mini game 3 (minesweeper style): 30 spots to dig, 5-10 bombs per game. If you get bombed you lose an extra energy bar, for every spot digged you will get 5G
- [ ] Energy Factory (rhythm style): this game is free to play. You gain energy bars by collecting dropping energy droplets, if you miss more than 3 drops or get hit by filling rocks 3 times, The game ends. Collect 10 for 1 bar.  The game follows a rhythm game with obstacles (press buttons at the correct time to collect energy)
- [ ] Procedural Dungeon (Main mini game):
  - Dungeons will be created with randomized data (1-2 lootboxes, 1 boss, 5-10 mobs)
  - Dungeon can be a simple 5x5 map
  - Mob damage and health are randomized based on tamago gear level
  - Using your tamago, defeat enemies by attacking turn by turn
  - Health and damage of tamago is based on current gear level

## Other things
