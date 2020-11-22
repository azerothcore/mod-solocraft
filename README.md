# ![logo](https://raw.githubusercontent.com/azerothcore/azerothcore.github.io/master/images/logo-github.png) AzerothCore
## mod-solocraft
- Latest build status with azerothcore: [![Build Status](https://github.com/azerothcore/mod-solocraft/workflows/core-build/badge.svg?branch=master&event=push)](https://github.com/azerothcore/mod-solocraft)


## Description

- Adjusts player stats for raids based on the # of players in the group
- Config: Difficulty settings for each instance type

## How to use ingame

1. Enable in conf
2. Enter Dungeon or Raid

## Requirements

- AzerothCore v1.0.1+


## Installation

```
1) Simply place the module under the `modules` directory of your AzerothCore source. 
2) Re-run cmake and launch a clean build of AzerothCore.
```

## Edit module configuration (optional)

If you need to change the module configuration, go to your server configuration folder (where your `worldserver` or `worldserver.exe` is), copy `emblem_transfer.conf.dist` to `emblem_transfer.conf` and edit that new file.

### Data ###
------------------------------------------------------------------------------------------------------------------
- Type: Server/Player
- Script: Solocraft
- Config: Yes
- SQL: No

### Credits ###
------------------------------------------------------------------------------------------------------------------
- [DavidMacalaster](https://github.com/DavidMacalaster/Solocraft)
- [Blizzard Entertainment](http://blizzard.com)
- [TrinityCore](https://github.com/TrinityCore/TrinityCore/blob/3.3.5/THANKS)
- [SunwellCore](http://www.azerothcore.org/pages/sunwell.pl/)
- [EMUDevs](https://youtube.com/user/EmuDevs)
- [AC-Web](http://ac-web.org/)
- [ModCraft.io](http://modcraft.io/)
- [OwnedCore](http://ownedcore.com/)
- [OregonCore](https://wiki.oregon-core.net/)
- [Wowhead.com](http://wowhead.com)
- [AoWoW](https://wotlk.evowow.com/)
- AzerothCore: [repository](https://github.com/azerothcore) - [website](http://azerothcore.org/) - [discord chat community](https://discord.gg/PaqQRkd)
