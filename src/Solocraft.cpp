#include <map>
#include "Config.h"
#include "ScriptMgr.h"
#include "Unit.h"
#include "Player.h"
#include "Pet.h"
#include "Map.h"
#include "Group.h"
#include "InstanceScript.h"
#include "Chat.h"
#include <math.h>

bool SoloCraftEnable = 1;
bool SoloCraftAnnounceModule = 1;
bool SoloCraftDebuffEnable = 1;
float SoloCraftSpellMult = 1.0;
float SoloCraftStatsMult = 100.0;
uint32 SolocraftLevelDiff = 1;
uint32 SolocraftDungeonLevel = 1;

float D5 = 1.0;
float D10 = 1.0;
float D25 = 1.0;
float D40 = 1.0;
float D33 = 1.0;
float D34 = 1.0;
float D36 = 1.0;
float D43 = 1.0;
float D47 = 1.0;
float D48 = 1.0;
float D70 = 1.0;
float D90 = 1.0;
float D109 = 1.0;
float D129 = 1.0;
float D189 = 1.0;
float D209 = 1.0;
float D229 = 1.0;
float D230 = 1.0;
float D249 = 1.0;
float D289 = 1.0;
float D309 = 1.0;
float D329 = 1.0;
float D349 = 1.0;
float D389 = 1.0;
float D409 = 1.0;
float D429 = 1.0;
float D469 = 1.0;
float D509 = 1.0;
float D531 = 1.0;
float D269 = 1.0;
float D269H = 1.0;
float D532 = 1.0;
float D534 = 1.0;
float D540 = 1.0;
float D540H = 1.0;
float D542 = 1.0;
float D542H = 1.0;
float D543 = 1.0;
float D543H = 1.0;
float D544 = 1.0;
float D545 = 1.0;
float D545H = 1.0;
float D546 = 1.0;
float D546H = 1.0;
float D547 = 1.0;
float D547H = 1.0;
float D548 = 1.0;
float D550 = 1.0;
float D552 = 1.0;
float D552H = 1.0;
float D553 = 1.0;
float D553H = 1.0;
float D554 = 1.0;
float D554H = 1.0;
float D555 = 1.0;
float D555H = 1.0;
float D556 = 1.0;
float D556H = 1.0;
float D557 = 1.0;
float D557H = 1.0;
float D558 = 1.0;
float D558H = 1.0;
float D560 = 1.0;
float D560H = 1.0;
float D564 = 1.0;
float D565 = 1.0;
float D568 = 1.0;
float D568H = 1.0;
float D580 = 1.0;
float D585 = 1.0;
float D585H = 1.0;
float D533 = 1.0;
float D533H = 1.0;
float D574 = 1.0;
float D574H = 1.0;
float D575 = 1.0;
float D575H = 1.0;
float D576 = 1.0;
float D576H = 1.0;
float D578 = 1.0;
float D578H = 1.0;
float D595 = 1.0;
float D595H = 1.0;
float D599 = 1.0;
float D599H = 1.0;
float D600 = 1.0;
float D600H = 1.0;
float D601 = 1.0;
float D601H = 1.0;
float D602 = 1.0;
float D602H = 1.0;
float D603 = 1.0;
float D603H = 1.0;
float D604 = 1.0;
float D604H = 1.0;
float D608 = 1.0;
float D608H = 1.0;
float D615 = 1.0;
float D615H = 1.0;
float D616 = 1.0;
float D616H = 1.0;
float D619 = 1.0;
float D619H = 1.0;
float D631 = 1.0;
float D631H = 1.0;
float D632 = 1.0;
float D632H = 1.0;
float D649 = 1.0;
float D649H = 1.0;
float D649H10 = 1.0;
float D649H25 = 1.0;
float D650 = 1.0;
float D650H = 1.0;
float D658 = 1.0;
float D658H = 1.0;
float D668 = 1.0;
float D668H = 1.0;
float D724 = 1.0;
float D724H = 1.0;

uint32 M33 = 1;
uint32 M34 = 1;
uint32 M36 = 1;
uint32 M43 = 1;
uint32 M47 = 1;
uint32 M48 = 1;
uint32 M70 = 1;
uint32 M90 = 1;
uint32 M109 = 1;
uint32 M129 = 1;
uint32 M189 = 1;
uint32 M209 = 1;
uint32 M229 = 1;
uint32 M230 = 1;
uint32 M249 = 1;
uint32 M289 = 1;
uint32 M309 = 1;
uint32 M329 = 1;
uint32 M349 = 1;
uint32 M389 = 1;
uint32 M409 = 1;
uint32 M429 = 1;
uint32 M469 = 1;
uint32 M509 = 1;
uint32 M531 = 1;
uint32 M269 = 1;
uint32 M532 = 1;
uint32 M534 = 1;
uint32 M540 = 1;
uint32 M542 = 1;
uint32 M543 = 1;
uint32 M544 = 1;
uint32 M545 = 1;
uint32 M546 = 1;
uint32 M547 = 1;
uint32 M548 = 1;
uint32 M550 = 1;
uint32 M552 = 1;
uint32 M553 = 1;
uint32 M554 = 1;
uint32 M555 = 1;		
uint32 M556 = 1;
uint32 M557 = 1;
uint32 M558 = 1;
uint32 M560 = 1;
uint32 M564 = 1;
uint32 M565 = 1;
uint32 M568 = 1;
uint32 M580 = 1;
uint32 M585 = 1;
uint32 M533 = 1;
uint32 M574 = 1;
uint32 M575 = 1;
uint32 M576 = 1;
uint32 M578 = 1;
uint32 M595 = 1;
uint32 M599 = 1;
uint32 M600 = 1;
uint32 M601 = 1;
uint32 M602 = 1;
uint32 M603 = 1;
uint32 M604 = 1;
uint32 M608 = 1;
uint32 M615 = 1;
uint32 M616 = 1;
uint32 M619 = 1;
uint32 M631 = 1;
uint32 M632 = 1;
uint32 M649 = 1;
uint32 M650 = 1;
uint32 M658 = 1;
uint32 M668 = 1;
uint32 M724 = 1;

class SolocraftConfig : public WorldScript
{
public:
    SolocraftConfig() : WorldScript("SolocraftConfig") {}

    void OnBeforeConfigLoad(bool reload) override
    {
        if (!reload) {
            std::string conf_path = _CONF_DIR;
            std::string cfg_file = conf_path + "/Solocraft.conf";

            std::string cfg_def_file = cfg_file + ".dist";
            sConfigMgr->LoadMore(cfg_def_file.c_str());
            sConfigMgr->LoadMore(cfg_file.c_str());

            // Load Configuration Settings
            SetInitialWorldSettings();
        }
    }

    // Load Configuration Settings
    void SetInitialWorldSettings()
    {
        SoloCraftEnable = sConfigMgr->GetBoolDefault("Solocraft.Enable", 1);
        SoloCraftAnnounceModule = sConfigMgr->GetBoolDefault("Solocraft.Announce", 1);
		
		//Balancing
		SoloCraftDebuffEnable = sConfigMgr->GetBoolDefault("SoloCraft.Debuff.Enable", 1);
		SoloCraftSpellMult = sConfigMgr->GetFloatDefault("SoloCraft.Spellpower.Mult", 2.5);
		SoloCraftStatsMult = sConfigMgr->GetFloatDefault("SoloCraft.Stats.Mult", 100.0);
		
		//Level Thresholds
		SolocraftLevelDiff = sConfigMgr->GetIntDefault("Solocraft.Max.Level.Diff", 10);
		
		//Catch All Dungeon Level Threshold
		SolocraftDungeonLevel = sConfigMgr->GetIntDefault("Solocraft.Dungeon.Level", 80);
		
		//Dungeon Base Level		
		//Wow Classic 
		M33 = sConfigMgr->GetIntDefault("Solocraft.ShadowfangKeep.Level", 15);
		M34 = sConfigMgr->GetIntDefault("Solocraft.Stockades.Level", 22);
		M36 = sConfigMgr->GetIntDefault("Solocraft.Deadmines.Level", 18);
		M43 = sConfigMgr->GetIntDefault("Solocraft.WailingCaverns.Level", 17);
		M47 = sConfigMgr->GetIntDefault("Solocraft.RazorfenKraulInstance.Level", 30);
		M48 = sConfigMgr->GetIntDefault("Solocraft.Blackfathom.Level", 20);
		M70 = sConfigMgr->GetIntDefault("Solocraft.Uldaman.Level", 40);
		M90 = sConfigMgr->GetIntDefault("Solocraft.GnomeragonInstance.Level", 24);
		M109 = sConfigMgr->GetIntDefault("Solocraft.SunkenTemple.Level", 50);
		M129 = sConfigMgr->GetIntDefault("Solocraft.RazorfenDowns.Level", 40);
		M189 = sConfigMgr->GetIntDefault("Solocraft.MonasteryInstances.Level", 35); // Scarlet Monastery
		M209 = sConfigMgr->GetIntDefault("Solocraft.TanarisInstance.Level", 44); // Zul'Farrak
		M229 = sConfigMgr->GetIntDefault("Solocraft.BlackRockSpire.Level", 55);
		M230 = sConfigMgr->GetIntDefault("Solocraft.BlackrockDepths.Level", 50);
		M249 = sConfigMgr->GetIntDefault("Solocraft.OnyxiaLairInstance.Level", 60);
		M289 = sConfigMgr->GetIntDefault("Solocraft.SchoolofNecromancy.Level", 55); //Scholomance
		M309 = sConfigMgr->GetIntDefault("Solocraft.Zul'gurub.Level", 60);
		M329 = sConfigMgr->GetIntDefault("Solocraft.Stratholme.Level", 55);
		M349 = sConfigMgr->GetIntDefault("Solocraft.Mauradon.Level", 48);
		M389 = sConfigMgr->GetIntDefault("Solocraft.OrgrimmarInstance.Level", 15); // Ragefire Chasm
		M409 = sConfigMgr->GetIntDefault("Solocraft.MoltenCore.Level", 60);
		M429 = sConfigMgr->GetIntDefault("Solocraft.DireMaul.Level", 48);
		M469 = sConfigMgr->GetIntDefault("Solocraft.BlackwingLair.Level", 40);
		M509 = sConfigMgr->GetIntDefault("Solocraft.AhnQiraj.Level", 60); // Ruins of Ahn'Qiraj
		M531 = sConfigMgr->GetIntDefault("Solocraft.AhnQirajTemple.Level", 60);

		// BC Instances
		M269 = sConfigMgr->GetIntDefault("Solocraft.CavernsOfTime.Level", 68); // The Black Morass
		M532 = sConfigMgr->GetIntDefault("Solocraft.Karazahn.Level", 68);
		M534 = sConfigMgr->GetIntDefault("Solocraft.HyjalPast.Level", 70); // The Battle for Mount Hyjal - Hyjal Summit
		M540 = sConfigMgr->GetIntDefault("Solocraft.HellfireMilitary.Level", 68); // The Shattered Halls
		M542 = sConfigMgr->GetIntDefault("Solocraft.HellfireDemon.Level", 68); // The Blood Furnace
		M543 = sConfigMgr->GetIntDefault("Solocraft.HellfireRampart.Level", 68);
		M544 = sConfigMgr->GetIntDefault("Solocraft.HellfireRaid.Level", 68); // Magtheridon's Lair
		M545 = sConfigMgr->GetIntDefault("Solocraft.CoilfangPumping.Level", 68); // The Steamvault
		M546 = sConfigMgr->GetIntDefault("Solocraft.CoilfangMarsh.Level", 68); // The Underbog
		M547 = sConfigMgr->GetIntDefault("Solocraft.CoilfangDraenei.Level", 68); // The Slavepens
		M548 = sConfigMgr->GetIntDefault("Solocraft.CoilfangRaid.Level", 70); // Serpentshrine Cavern
		M550 = sConfigMgr->GetIntDefault("Solocraft.TempestKeepRaid.Level", 70); // The Eye
		M552 = sConfigMgr->GetIntDefault("Solocraft.TempestKeepArcane.Level", 68); // The Arcatraz
		M553 = sConfigMgr->GetIntDefault("Solocraft.TempestKeepAtrium.Level", 68); // The Botanica	
		M554 = sConfigMgr->GetIntDefault("Solocraft.TempestKeepFactory.Level", 68); // The Mechanar
		M555 = sConfigMgr->GetIntDefault("Solocraft.AuchindounShadow.Level", 68); // Shadow Labyrinth		
		M556 = sConfigMgr->GetIntDefault("Solocraft.AuchindounDemon.Level", 68); // Sethekk Halls
		M557 = sConfigMgr->GetIntDefault("Solocraft.AuchindounEthereal.Level", 68); // Mana-Tombs
		M558 = sConfigMgr->GetIntDefault("Solocraft.AuchindounDraenei.Level", 68); // Auchenai Crypts
		M560 = sConfigMgr->GetIntDefault("Solocraft.HillsbradPast.Level", 68); // Old Hillsbrad Foothills
		M564 = sConfigMgr->GetIntDefault("Solocraft.BlackTemple.Level", 70);
		M565 = sConfigMgr->GetIntDefault("Solocraft.GruulsLair.Level", 70);
		M568 = sConfigMgr->GetIntDefault("Solocraft.ZulAman.Level", 68);
		M580 = sConfigMgr->GetIntDefault("Solocraft.SunwellPlateau.Level", 70);
		M585 = sConfigMgr->GetIntDefault("Solocraft.Sunwell5ManFix.Level", 68); // Magister's Terrace
		
		// WOTLK Instances
		M533 = sConfigMgr->GetIntDefault("Solocraft.StratholmeRaid.Level", 78); // Naxxramas
		M574 = sConfigMgr->GetIntDefault("Solocraft.Valgarde70.Level", 78); // Utgarde Keep
		M575 = sConfigMgr->GetIntDefault("Solocraft.UtgardePinnacle.Level", 78);
		M576 = sConfigMgr->GetIntDefault("Solocraft.Nexus70.Level", 78); // The Nexus
		M578 = sConfigMgr->GetIntDefault("Solocraft.Nexus80.Level", 78); // The Occulus
		M595 = sConfigMgr->GetIntDefault("Solocraft.StratholmeCOT.Level", 78); // The Culling of Stratholme
		M599 = sConfigMgr->GetIntDefault("Solocraft.Ulduar70.Level", 78); // Halls of Stone
		M600 = sConfigMgr->GetIntDefault("Solocraft.DrakTheronKeep.Level", 78); // Drak'Tharon Keep
		M601 = sConfigMgr->GetIntDefault("Solocraft.Azjol_Uppercity.Level", 78); // Azjol-Nerub
		M602 = sConfigMgr->GetIntDefault("Solocraft.Ulduar80.Level", 78); // Halls of Lighting
		M603 = sConfigMgr->GetIntDefault("Solocraft.UlduarRaid.Level", 80); // Ulduar
		M604 = sConfigMgr->GetIntDefault("Solocraft.GunDrak.Level", 78);
		M608 = sConfigMgr->GetIntDefault("Solocraft.DalaranPrison.Level", 78); // Violet Hold
		M615 = sConfigMgr->GetIntDefault("Solocraft.ChamberOfAspectsBlack.Level", 80); // The Obsidian Sanctum
		M616 = sConfigMgr->GetIntDefault("Solocraft.NexusRaid.Level", 80); // The Eye of Eternity
		M619 = sConfigMgr->GetIntDefault("Solocraft.Azjol_LowerCity.Level", 78); // Ahn'kahet: The Old Kingdom
		M631 = sConfigMgr->GetIntDefault("Solocraft.IcecrownCitadel.Level", 80); //Icecrown Citadel
		M632 = sConfigMgr->GetIntDefault("Solocraft.IcecrownCitadel5Man.Level", 78); // The Forge of Souls
		M649 = sConfigMgr->GetIntDefault("Solocraft.ArgentTournamentRaid.Level", 80); // Trial of the Crusader
		M650 = sConfigMgr->GetIntDefault("Solocraft.ArgentTournamentDungeon.Level", 80);  //Trial of the Champion
		M658 = sConfigMgr->GetIntDefault("Solocraft.QuarryOfTears.Level", 78); // Pit of Saron
		M668 = sConfigMgr->GetIntDefault("Solocraft.HallsOfReflection.Level", 78); // Halls of Reflection
		M724 = sConfigMgr->GetIntDefault("Solocraft.ChamberOfAspectsRed.Level", 80); // The Ruby Sanctum

		// Dungeon Difficulty
		// Catch alls
        D5 = sConfigMgr->GetFloatDefault("Solocraft.Dungeon", 5.0);
        D10 = sConfigMgr->GetFloatDefault("Solocraft.Heroic", 10.0);
        D25 = sConfigMgr->GetFloatDefault("Solocraft.Raid25", 25.0);
        D40 = sConfigMgr->GetFloatDefault("Solocraft.Raid40", 40.0);
		
		//WOW Classic Instances
        D33 = sConfigMgr->GetFloatDefault("Solocraft.ShadowfangKeep", 5.0);
        D34 = sConfigMgr->GetFloatDefault("Solocraft.Stockades", 5.0);		
        D36 = sConfigMgr->GetFloatDefault("Solocraft.Deadmines", 5.0);		
        D43 = sConfigMgr->GetFloatDefault("Solocraft.WailingCaverns", 5.0);		
        D47 = sConfigMgr->GetFloatDefault("Solocraft.RazorfenKraulInstance", 5.0);		
        D48 = sConfigMgr->GetFloatDefault("Solocraft.Blackfathom", 5.0);		
        D70 = sConfigMgr->GetFloatDefault("Solocraft.Uldaman", 5.0);		
        D90 = sConfigMgr->GetFloatDefault("Solocraft.GnomeragonInstance", 5.0);		
        D109 = sConfigMgr->GetFloatDefault("Solocraft.SunkenTemple", 5.0);
        D129 = sConfigMgr->GetFloatDefault("Solocraft.RazorfenDowns", 5.0);	
        D189 = sConfigMgr->GetFloatDefault("Solocraft.MonasteryInstances", 5.0);	//Scarlet
        D209 = sConfigMgr->GetFloatDefault("Solocraft.TanarisInstance", 5.0);	//Zul'Farrak
        D229 = sConfigMgr->GetFloatDefault("Solocraft.BlackRockSpire", 10.0);	
        D230 = sConfigMgr->GetFloatDefault("Solocraft.BlackrockDepths", 5.0);	
        D249 = sConfigMgr->GetFloatDefault("Solocraft.OnyxiaLairInstance", 40.0);	
        D289 = sConfigMgr->GetFloatDefault("Solocraft.SchoolofNecromancy", 5.0); //Scholo	
        D309 = sConfigMgr->GetFloatDefault("Solocraft.Zul'gurub", 20.0);
        D329 = sConfigMgr->GetFloatDefault("Solocraft.Stratholme", 5.0);		
        D349 = sConfigMgr->GetFloatDefault("Solocraft.Mauradon", 5.0);
        D389 = sConfigMgr->GetFloatDefault("Solocraft.OrgrimmarInstance", 5.0);	//Ragefire
        D409 = sConfigMgr->GetFloatDefault("Solocraft.MoltenCore", 40.0);		
        D429 = sConfigMgr->GetFloatDefault("Solocraft.DireMaul", 5.0);	
        D469 = sConfigMgr->GetFloatDefault("Solocraft.BlackwingLair", 40.0);	
        D509 = sConfigMgr->GetFloatDefault("Solocraft.AhnQiraj", 20.0);	
        D531 = sConfigMgr->GetFloatDefault("Solocraft.AhnQirajTemple", 40.0);	
		
		//BC Instances
		D269 = sConfigMgr->GetFloatDefault("Solocraft.CavernsOfTime", 5.0);	 //Black Morass
        D269H = sConfigMgr->GetFloatDefault("Solocraft.CavernsOfTimeH", 5.0);	 //Black Morass H
        D532 = sConfigMgr->GetFloatDefault("Solocraft.Karazahn", 10.0);		
        D534 = sConfigMgr->GetFloatDefault("Solocraft.HyjalPast", 25.0);		//Mount Hyjal
        D540 = sConfigMgr->GetFloatDefault("Solocraft.HellfireMilitary", 5.0);	//The Shattered Halls
        D540H = sConfigMgr->GetFloatDefault("Solocraft.HellfireMilitaryH", 5.0);	//The Shattered Halls H		
        D542 = sConfigMgr->GetFloatDefault("Solocraft.HellfireDemon", 5.0);		//The Blood Furnace
        D542H = sConfigMgr->GetFloatDefault("Solocraft.HellfireDemonH", 5.0);		//The Blood Furnace H
        D543 = sConfigMgr->GetFloatDefault("Solocraft.HellfireRampart", 5.0);
        D543H = sConfigMgr->GetFloatDefault("Solocraft.HellfireRampartH", 5.0);	 //Heroic
        D544 = sConfigMgr->GetFloatDefault("Solocraft.HellfireRaid", 25.0); 	//Magtheridon's Lair	
        D545 = sConfigMgr->GetFloatDefault("Solocraft.CoilfangPumping", 5.0);	//The Steamvault
        D545H = sConfigMgr->GetFloatDefault("Solocraft.CoilfangPumpingH", 5.0);	//The Steamvault		
        D546 = sConfigMgr->GetFloatDefault("Solocraft.CoilfangMarsh", 5.0);		//The Underbog
        D546H = sConfigMgr->GetFloatDefault("Solocraft.CoilfangMarshH", 5.0);		//The Underbog
        D547 = sConfigMgr->GetFloatDefault("Solocraft.CoilfangDraenei", 5.0);	//The Slavepens	
        D547H = sConfigMgr->GetFloatDefault("Solocraft.CoilfangDraeneiH", 5.0);	//The Slavepens	H
        D548 = sConfigMgr->GetFloatDefault("Solocraft.CoilfangRaid", 25.0);		//Serpentshrine Cavern
        D550 = sConfigMgr->GetFloatDefault("Solocraft.TempestKeepRaid", 25.0);	//The Eye
        D552 = sConfigMgr->GetFloatDefault("Solocraft.TempestKeepArcane", 5.0);  //The Arcatraz
        D552H = sConfigMgr->GetFloatDefault("Solocraft.TempestKeepArcaneH", 5.0);  //The Arcatraz H		
        D553 = sConfigMgr->GetFloatDefault("Solocraft.TempestKeepAtrium", 5.0);  //The Botanica		
        D553H = sConfigMgr->GetFloatDefault("Solocraft.TempestKeepAtriumH", 5.0);  //The Botanica H		
        D554 = sConfigMgr->GetFloatDefault("Solocraft.TempestKeepFactory", 5.0);  //The Mechanar		
        D554H = sConfigMgr->GetFloatDefault("Solocraft.TempestKeepFactoryH", 5.0);  //The Mechanar H		
        D555 = sConfigMgr->GetFloatDefault("Solocraft.AuchindounShadow", 5.0);  //Shadow Labyrinth		
        D555H = sConfigMgr->GetFloatDefault("Solocraft.AuchindounShadowH", 5.0);  //Shadow Labyrinth H		
        D556 = sConfigMgr->GetFloatDefault("Solocraft.AuchindounDemon", 5.0);  //Sethekk Halls	
        D556H = sConfigMgr->GetFloatDefault("Solocraft.AuchindounDemonH", 5.0);  //Sethekk Halls H	
        D557 = sConfigMgr->GetFloatDefault("Solocraft.AuchindounEthereal", 5.0);  //Mana-Tombs
        D557H = sConfigMgr->GetFloatDefault("Solocraft.AuchindounEtherealH", 5.0);  //Mana-Tombs H	
        D558 = sConfigMgr->GetFloatDefault("Solocraft.AuchindounDraenei", 5.0);  //Auchenai Crypts
        D558H = sConfigMgr->GetFloatDefault("Solocraft.AuchindounDraeneiH", 5.0);  //Auchenai Crypts H
        D560 = sConfigMgr->GetFloatDefault("Solocraft.HillsbradPast", 5.0);  //Old Hillsbrad Foothills
        D560H = sConfigMgr->GetFloatDefault("Solocraft.HillsbradPastH", 5.0);  //Old Hillsbrad Foothills H
        D564 = sConfigMgr->GetFloatDefault("Solocraft.BlackTemple", 25.0);  
        D565 = sConfigMgr->GetFloatDefault("Solocraft.GruulsLair", 25.0);  
        D568 = sConfigMgr->GetFloatDefault("Solocraft.ZulAman", 5.0);  
        D568H = sConfigMgr->GetFloatDefault("Solocraft.ZulAmanH", 5.0);  //Zul'Aman H
        D580 = sConfigMgr->GetFloatDefault("Solocraft.SunwellPlateau", 25.0);  
        D585 = sConfigMgr->GetFloatDefault("Solocraft.Sunwell5ManFix", 5.0);  	//Magister's Terrace
        D585H = sConfigMgr->GetFloatDefault("Solocraft.Sunwell5ManFixH", 5.0); 	//Magister's Terrace H	
		
		
		//WOTLK Instances
	    D533 = sConfigMgr->GetFloatDefault("Solocraft.StratholmeRaid", 10.0);	//Nax 10
	    D533H = sConfigMgr->GetFloatDefault("Solocraft.StratholmeRaidH", 25.0);	//Nax 25		
        D574 = sConfigMgr->GetFloatDefault("Solocraft.Valgarde70", 5.0);  //Utgarde Keep
        D574H = sConfigMgr->GetFloatDefault("Solocraft.Valgarde70H", 5.0); //Utgarde Keep H
        D575 = sConfigMgr->GetFloatDefault("Solocraft.UtgardePinnacle", 5.0);  
        D575H = sConfigMgr->GetFloatDefault("Solocraft.UtgardePinnacleH", 5.0);  //Utgarde Pinnacle H
        D576 = sConfigMgr->GetFloatDefault("Solocraft.Nexus70", 5.0);  //The Nexus
        D576H = sConfigMgr->GetFloatDefault("Solocraft.Nexus70H", 5.0);  //The Nexus H
        D578 = sConfigMgr->GetFloatDefault("Solocraft.Nexus80", 5.0);  //The Occulus
        D578H = sConfigMgr->GetFloatDefault("Solocraft.Nexus80H", 5.0);  //The Occulus H
        D595 = sConfigMgr->GetFloatDefault("Solocraft.StratholmeCOT", 5.0);  //The Culling of Stratholme
        D595H = sConfigMgr->GetFloatDefault("Solocraft.StratholmeCOTH", 5.0);  //The Culling of Stratholme H
        D599 = sConfigMgr->GetFloatDefault("Solocraft.Ulduar70", 5.0);  //Halls of Stone
        D599H = sConfigMgr->GetFloatDefault("Solocraft.Ulduar70H", 5.0);  //Halls of Stone H
        D600 = sConfigMgr->GetFloatDefault("Solocraft.DrakTheronKeep", 5.0);  //Drak'Tharon Keep
        D600H = sConfigMgr->GetFloatDefault("Solocraft.DrakTheronKeepH", 5.0);  //Drak'Tharon Keep H
        D601 = sConfigMgr->GetFloatDefault("Solocraft.Azjol_Uppercity", 5.0);  //Azjol-Nerub
        D601H = sConfigMgr->GetFloatDefault("Solocraft.Azjol_UppercityH", 5.0);  //Azjol-Nerub H
        D602 = sConfigMgr->GetFloatDefault("Solocraft.Ulduar80", 5.0);  //Halls of Lighting
        D602H = sConfigMgr->GetFloatDefault("Solocraft.Ulduar80H", 5.0);  //Halls of Lighting H
        D603 = sConfigMgr->GetFloatDefault("Solocraft.UlduarRaid", 10.0);  //Ulduar 10
        D603H = sConfigMgr->GetFloatDefault("Solocraft.UlduarRaidH", 25.0);  //Ulduar 25		
        D604 = sConfigMgr->GetFloatDefault("Solocraft.GunDrak", 5.0);  
		D604H = sConfigMgr->GetFloatDefault("Solocraft.GunDrakH", 5.0);  //Gundrak H
        D608 = sConfigMgr->GetFloatDefault("Solocraft.DalaranPrison", 5.0);  //Violet Hold
        D608H = sConfigMgr->GetFloatDefault("Solocraft.DalaranPrisonH", 5.0);  //Violet Hold H
        D615 = sConfigMgr->GetFloatDefault("Solocraft.ChamberOfAspectsBlack", 10.0);  //The Obsidian Sanctum 10
        D615H = sConfigMgr->GetFloatDefault("Solocraft.ChamberOfAspectsBlackH", 25.0);  //The Obsidian Sanctum 25
        D616 = sConfigMgr->GetFloatDefault("Solocraft.NexusRaid", 10.0);  //The Eye of Eternity 10
        D616H = sConfigMgr->GetFloatDefault("Solocraft.NexusRaidH", 25.0);  //The Eye of Eternity 25
        D619 = sConfigMgr->GetFloatDefault("Solocraft.Azjol_LowerCity", 5.0);  //Ahn'kahet: The Old Kingdom
        D619H = sConfigMgr->GetFloatDefault("Solocraft.Azjol_LowerCityH", 5.0);  //Ahn'kahet: The Old Kingdom H
        D631 = sConfigMgr->GetFloatDefault("Solocraft.IcecrownCitadel", 10.0);  //Icecrown Citadel 10
        D631H = sConfigMgr->GetFloatDefault("Solocraft.IcecrownCitadelH", 25.0);  //Icecrown Citadel 25
        D632 = sConfigMgr->GetFloatDefault("Solocraft.IcecrownCitadel5Man", 5.0);  //The Forge of Souls
        D632H = sConfigMgr->GetFloatDefault("Solocraft.IcecrownCitadel5ManH", 5.0);  //The Forge of Souls
        D649 = sConfigMgr->GetFloatDefault("Solocraft.ArgentTournamentRaid", 10.0);  //Trial of the Crusader 10
        D649H = sConfigMgr->GetFloatDefault("Solocraft.ArgentTournamentRaidH", 25.0);  //Trial of the Crusader 25
        D649H10 = sConfigMgr->GetFloatDefault("Solocraft.ArgentTournamentRaidH10", 10.0);  //Trial of the Crusader 10 Heroic
        D649H25 = sConfigMgr->GetFloatDefault("Solocraft.ArgentTournamentRaidH25", 25.0);  //Trial of the Crusader 25 Heroic
        D650 = sConfigMgr->GetFloatDefault("Solocraft.ArgentTournamentDungeon", 5.0);  //Trial of the Champion 
        D650H = sConfigMgr->GetFloatDefault("Solocraft.ArgentTournamentDungeonH", 5.0);  //Trial of the Champion H
        D658 = sConfigMgr->GetFloatDefault("Solocraft.QuarryOfTears", 5.0);  //Pit of Saron
        D658H = sConfigMgr->GetFloatDefault("Solocraft.QuarryOfTearsH", 5.0);  //Pit of Saron H
        D668 = sConfigMgr->GetFloatDefault("Solocraft.HallsOfReflection", 5.0);  //Halls of Reflection
        D668H = sConfigMgr->GetFloatDefault("Solocraft.HallsOfReflectionH", 5.0);  //Halls of Reflection H
        D724 = sConfigMgr->GetFloatDefault("Solocraft.ChamberOfAspectsRed", 10.0);  //The Ruby Sanctum 10
        D724H = sConfigMgr->GetFloatDefault("Solocraft.ChamberOfAspectsRedH", 25.0);  //The Ruby Sanctum 25		
    }
};

class SolocraftAnnounce : public PlayerScript
{

public:

    SolocraftAnnounce() : PlayerScript("SolocraftAnnounce") {}

    void OnLogin(Player* player)
    {
        // Announce Module
        if (SoloCraftEnable)
        {
            if (SoloCraftAnnounceModule)
            {
                ChatHandler(player->GetSession()).SendSysMessage("This server is running the |cff4CFF00SoloCraft |rmodule.");
            }
        }
    }
};

class solocraft_player_instance_handler : public PlayerScript {

public:

    solocraft_player_instance_handler() : PlayerScript("solocraft_player_instance_handler") {}
    
    void OnMapChanged(Player *player) override {
        if (sConfigMgr->GetBoolDefault("Solocraft.Enable", true))
        {
            Map *map = player->GetMap();
            float difficulty = CalculateDifficulty(map, player);
			int dunLevel = CalculateDungeonLevel(map, player);
            int numInGroup = GetNumInGroup(player);
            ApplyBuffs(player, map, difficulty, dunLevel, numInGroup);
        }
    }

private:

	std::map<uint32, float> _unitDifficulty;


    // Set the instance difficulty
    int CalculateDifficulty(Map* map, Player* /*player*/) {
        float difficulty = 0.0;//changed from 1.0
		int maxLevel = 1;
		
        if (map) {
            if (map->Is25ManRaid()) {
				//WOTLK 25 Man raids
				if (map->GetId() == 533) { 
					difficulty = D533H;  	//Nax
				}
				else if (map->GetId() == 603) {
					difficulty = D603H;
				}
				else if (map->GetId() == 615) {
					difficulty = D615H;
				}
				else if (map->GetId() == 616) {
					difficulty = D616H;
				}
				else if (map->GetId() == 631) {
					difficulty = D631H;
				}
				else if (map->GetId() == 724) {
					difficulty = D724H;
				}				
				else if (map->IsHeroic() && map->GetId() == 649) {
					difficulty = D649H25;  //Heroic Grand Trial of the Crusader
				}
				else if (map->GetId() == 649) {
					difficulty = D649H;  //25 man Trial of the Crusader
				}
				else //Catch All --------------- 25 Raids 
					difficulty = D25;
            }
            else if (map->IsHeroic()) {
				//BC 5 Man Heroic
				if (map->GetId() == 269) {
					difficulty = D269H;
				}	
				else if (map->GetId() == 540) {
					difficulty = D540H;
				}	
				else if (map->GetId() == 542) {
					difficulty = D542H;
				}	
				else if (map->GetId() == 543) {
					difficulty = D543H;
				}	
				else if (map->GetId() == 545) {
					difficulty = D545H;
				}	
				else if (map->GetId() == 546) {
					difficulty = D546H;
				}	
				else if (map->GetId() == 547) {
					difficulty = D547H;
				}	
				else if (map->GetId() == 552) {
					difficulty = D552H;
				}	
				else if (map->GetId() == 553) {
					difficulty = D553H;
				}	
				else if (map->GetId() == 554) {
					difficulty = D554H;
				}	
				else if (map->GetId() == 555) {
					difficulty = D555H;
				}	
				else if (map->GetId() == 556) {
					difficulty = D556H;
				}	
				else if (map->GetId() == 557) {
					difficulty = D557H;
				}	
				else if (map->GetId() == 558) {
					difficulty = D558H;
				}	
				else if (map->GetId() == 560) {
					difficulty = D560H;
				}	
				else if (map->GetId() == 568) {
					difficulty = D568H;
				}	
				else if (map->GetId() == 585) {
					difficulty = D585H;
				}					
				//WOTLK 5 Man Heroic
				else if (map->GetId() == 574) {
					difficulty = D574H;
				}	
				else if (map->GetId() == 575) {
					difficulty = D575H;
				}	
				else if (map->GetId() == 576) {
					difficulty = D576H;
				}	
				else if (map->GetId() == 578) {
					difficulty = D578H;
				}	
				else if (map->GetId() == 595) {
					difficulty = D595H;
				}	
				else if (map->GetId() == 599) {
					difficulty = D599H;
				}	
				else if (map->GetId() == 600) {
					difficulty = D600H;
				}	
				else if (map->GetId() == 601) {
					difficulty = D601H;
				}	
				else if (map->GetId() == 602) {
					difficulty = D602H;
				}	
				else if (map->GetId() == 604) {
					difficulty = D604H;
				}	
				else if (map->GetId() == 608) {
					difficulty = D608H;
				}	
				else if (map->GetId() == 619) {
					difficulty = D619H;
				}	
				else if (map->GetId() == 632) {
					difficulty = D632H;
				}	
				else if (map->GetId() == 650) {
					difficulty = D650H;
				}	
				else if (map->GetId() == 658) {
					difficulty = D658H;
				}	
				else if (map->GetId() == 668) {
					difficulty = D668H;
				}				
				//WOTLK 10 Man Heroic
				else if (map->GetId() == 649) {
					difficulty = D649H10;
				}					
			else //Catch All	-----------10 Heroics
                difficulty = D10;
            }
			//Wow 10 Man Raid
            else if (map->GetId() == 229) {
                difficulty = D229;
			}
			//BC 10 Man Raid
            else if (map->GetId() == 532) {
                difficulty = D532;
			}			
			//WOTLK 10 Man Raid
            else if (map->GetId() == 533) {
                difficulty = D533;
			}
            else if (map->GetId() == 603) {
                difficulty = D603;
			}
            else if (map->GetId() == 615) {
                difficulty = D615;
			}
            else if (map->GetId() == 616) {
                difficulty = D616;
			}
            else if (map->GetId() == 631) {
                difficulty = D631;
			}
            else if (map->GetId() == 649) {
                difficulty = D649;
			}
            else if (map->GetId() == 724) {
                difficulty = D724;
			}			
			//Wow 20 Man Raids
            else if (map->GetId() == 309) {
                difficulty = D309;
			}
            else if (map->GetId() == 509) {
                difficulty = D509;
			}			
			//BC 25 Man Raids
            else if (map->GetId() == 534) {
                difficulty = D534;
			}
            else if (map->GetId() == 544) {
                difficulty = D544;
			}
            else if (map->GetId() == 548) {
                difficulty = D548;
			}
            else if (map->GetId() == 550) {
                difficulty = D550;
			}
            else if (map->GetId() == 564) {
                difficulty = D564;
			}
            else if (map->GetId() == 565) {
                difficulty = D565;
			}
            else if (map->GetId() == 580) {
                difficulty = D580;
			}			
			//Wow 40 man raids
            else if (map->GetId() == 249) {
                difficulty = D249;
			}
            else if (map->GetId() == 409) {
                difficulty = D409;
			}
            else if (map->GetId() == 469) {
                difficulty = D469;
			}
            else if (map->GetId() == 531) {
                difficulty = D531;
			}			
			//Wow 5 man dungeons
            else if (map->GetId() == 33) {
                difficulty = D33;
			}
            else if (map->GetId() == 34) {
                difficulty = D34;
			}
            else if (map->GetId() == 36) {
                difficulty = D36;
			}
            else if (map->GetId() == 43) {
                difficulty = D43;
			}
            else if (map->GetId() == 47) {
                difficulty = D47;
			}
            else if (map->GetId() == 48) {
                difficulty = D48;
			}
            else if (map->GetId() == 70) {
                difficulty = D70;
			}
            else if (map->GetId() == 90) {
                difficulty = D90;
			}
            else if (map->GetId() == 109) {
                difficulty = D109;
			}
            else if (map->GetId() == 129) {
                difficulty = D129;
			}
            else if (map->GetId() == 189) {
                difficulty = D189;
			}
            else if (map->GetId() == 209) {
                difficulty = D209;
			}
            else if (map->GetId() == 230) {
                difficulty = D230;
			}
            else if (map->GetId() == 289) {
                difficulty = D289;
			}
            else if (map->GetId() == 329) {
                difficulty = D329;
			}
            else if (map->GetId() == 349) {
                difficulty = D349;
			}
            else if (map->GetId() == 389) {
                difficulty = D389;
			}
            else if (map->GetId() == 429) {
                difficulty = D429;
			}			
			//BC 5 Man
            else if (map->GetId() == 269) {
                difficulty = D269;
			}
            else if (map->GetId() == 540) {
                difficulty = D540;
			}
            else if (map->GetId() == 542) {
                difficulty = D542;
			}
            else if (map->GetId() == 543) {
                difficulty = D543;
			}
            else if (map->GetId() == 545) {
                difficulty = D545;
			}
            else if (map->GetId() == 546) {
                difficulty = D546;
			}
            else if (map->GetId() == 547) {
                difficulty = D547;
			}
            else if (map->GetId() == 552) {
                difficulty = D552;
			}
            else if (map->GetId() == 553) {
                difficulty = D553;
			}
            else if (map->GetId() == 554) {
                difficulty = D554;
			}
            else if (map->GetId() == 555) {
                difficulty = D555;
			}
            else if (map->GetId() == 556) {
                difficulty = D556;
			}
            else if (map->GetId() == 557) {
                difficulty = D557;
			}
            else if (map->GetId() == 558) {
                difficulty = D558;
			}
            else if (map->GetId() == 560) {
                difficulty = D560;
			}
            else if (map->GetId() == 568) {
                difficulty = D568;
			}
            else if (map->GetId() == 585) {
                difficulty = D585;
			}			
			//WOTLK 5 Man
            else if (map->GetId() == 574) {
                difficulty = D574;
			}
            else if (map->GetId() == 575) {
                difficulty = D575;
			}
            else if (map->GetId() == 576) {
                difficulty = D576;
			}
            else if (map->GetId() == 578) {
                difficulty = D578;
			}
            else if (map->GetId() == 595) {
                difficulty = D595;
			}
            else if (map->GetId() == 599) {
                difficulty = D599;
			}
            else if (map->GetId() == 600) {
                difficulty = D600;
			}
            else if (map->GetId() == 601) {
                difficulty = D601;
			}
            else if (map->GetId() == 602) {
                difficulty = D602;
			}
            else if (map->GetId() == 604) {
                difficulty = D604;
			}
            else if (map->GetId() == 608) {
                difficulty = D608;
			}
            else if (map->GetId() == 619) {
                difficulty = D619;
			}
            else if (map->GetId() == 632) {
                difficulty = D632;
			}
            else if (map->GetId() == 650) {
                difficulty = D650;
			}
            else if (map->GetId() == 658) {
                difficulty = D658;
			}
            else if (map->GetId() == 668) {
                difficulty = D668;
			}			
			//Catch Alls  ----------------------5 Dungeons and 40 Raids
            else if (map->IsDungeon()) {
                difficulty = D5;
            }
            else if (map->IsRaid()) {
                difficulty = D40;
            }			
        }
        return difficulty; //return the specific dungeon's difficulty offset
    }

	
	
    // Set the Dungeon Level
    int CalculateDungeonLevel(Map* map, Player* /*player*/) {
		int dunLevel = 1;
		switch (map->GetId())
		{
			case 33: 
				dunLevel = M33; break;
			case 34: 
				dunLevel = M34; break;
			case 36: 
				dunLevel = M36; break;
			case 43: 
				dunLevel = M43; break;
			case 47: 
				dunLevel = M47; break;
			case 48: 
				dunLevel = M48; break;
			case 70: 
				dunLevel = M70; break;
			case 90: 
				dunLevel = M90; break;
			case 109: 
				dunLevel = M109; break;
			case 129: 
				dunLevel = M129; break;
			case 189: 
				dunLevel = M189; break;
			case 209: 
				dunLevel = M209; break;
			case 229: 
				dunLevel = M229; break;
			case 230: 
				dunLevel = M230; break;
			case 249: 
				dunLevel = M249; break;
			case 289: 
				dunLevel = M289; break;
			case 309: 
				dunLevel = M309; break;
			case 329: 
				dunLevel = M329; break;
			case 349: 
				dunLevel = M349; break;
			case 389: 
				dunLevel = M389; break;
			case 409: 
				dunLevel = M409; break;
			case 429: 
				dunLevel = M429; break;
			case 469: 
				dunLevel = M469; break;
			case 509: 
				dunLevel = M509; break;
			case 531: 
				dunLevel = M531; break;
			case 269: 
				dunLevel = M269; break;
			case 532: 
				dunLevel = M532; break;
			case 534: 
				dunLevel = M534; break;
			case 540: 
				dunLevel = M540; break;
			case 542: 
				dunLevel = M542; break;
			case 543: 
				dunLevel = M543; break;
			case 544: 
				dunLevel = M544; break;
			case 545: 
				dunLevel = M545; break;
			case 546: 
				dunLevel = M546; break;
			case 547: 
				dunLevel = M547; break;
			case 548: 
				dunLevel = M548; break;
			case 550: 
				dunLevel = M550; break;
			case 552: 
				dunLevel = M552; break;
			case 553: 
				dunLevel = M553; break;
			case 554: 
				dunLevel = M554; break;
			case 555: 
				dunLevel = M555; break;		
			case 556: 
				dunLevel = M556; break;
			case 557: 
				dunLevel = M557; break;
			case 558: 
				dunLevel = M558; break;
			case 560: 
				dunLevel = M560; break;
			case 564: 
				dunLevel = M564; break;
			case 565: 
				dunLevel = M565; break;
			case 568: 
				dunLevel = M568; break;
			case 580: 
				dunLevel = M580; break;
			case 585: 
				dunLevel = M585; break;
			case 533: 
				dunLevel = M533; break;
			case 574: 
				dunLevel = M574; break;
			case 575: 
				dunLevel = M575; break;
			case 576: 
				dunLevel = M576; break;
			case 578: 
				dunLevel = M578; break;
			case 595: 
				dunLevel = M595; break;
			case 599: 
				dunLevel = M599; break;
			case 600: 
				dunLevel = M600; break;
			case 601: 
				dunLevel = M601; break;
			case 602: 
				dunLevel = M602; break;
			case 603: 
				dunLevel = M603; break;
			case 604: 
				dunLevel = M604; break;
			case 608: 
				dunLevel = M608; break;
			case 615: 
				dunLevel = M615; break;
			case 616: 
				dunLevel = M616; break;
			case 619: 
				dunLevel = M619; break;
			case 631: 
				dunLevel = M631; break;
			case 632: 
				dunLevel = M632; break;
			case 649: 
				dunLevel = M649; break;
			case 650: 
				dunLevel = M650; break;
			case 658: 
				dunLevel = M658; break;
			case 668: 
				dunLevel = M668; break;
			case 724: 
				dunLevel = M724; break;		
			default:
				dunLevel = SolocraftDungeonLevel;
		}
        return dunLevel; //return the specific dungeon's level 
	}	
	
	
    // Get the group's size
    int GetNumInGroup(Player* player) {
        int numInGroup = 1;
        Group *group = player->GetGroup();
        if (group) {
            Group::MemberSlotList const& groupMembers = group->GetMemberSlots();
            numInGroup = groupMembers.size();
		}
        return numInGroup;
    }

    // Apply the player buffs
    void ApplyBuffs(Player* player, Map* map, float difficulty, int dunLevel, int numInGroup)
    {
		int SpellPowerBonus = 0;

		//Check whether to buff the player or check to debuff back to normal
        if (difficulty != 0)
        {	
			std::ostringstream ss;	
			
			if (player->getLevel() <= dunLevel + SolocraftLevelDiff) //If a player is too high level for dungeon don't buff but if in a group will count towards the group offset balancing.
			{
					
				//Get Current members total difficulty offset and if it exceeds the difficulty offset of the dungeon then debuff new group members coming in until all members leave and re-enter. This happens when a player already inside dungeon invite others to the group but the player already has the full difficulty offset.
				float GroupDifficulty = GetGroupDifficulty(player);
				
				//Check to either debuff or buff player entering dungeon.  Debuff must be enabled in Config
				if (GroupDifficulty >= difficulty && SoloCraftDebuffEnable == 1)
				{
					//Current dungeon offset exceeded - Debuff player
					difficulty = (-abs(difficulty)) + (difficulty / numInGroup);
					difficulty = roundf(difficulty * 100) / 100; //Float variables suck
					
					//sLog->outError("%u: would have this difficulty: %f", player->GetGUID(), tempDiff);
				
				}
				else
				{
					//Current Dungeon offset not exceeded - Buff player
					//Group difficulty adjustment
					difficulty = difficulty / numInGroup;
					difficulty = roundf(difficulty * 100) / 100; //Float variables suck - two decimal rounding
				
				}

				//Modify Player Stats
				for (int32 i = STAT_STRENGTH; i < MAX_STATS; ++i) //STATS defined/enum in SharedDefines.h
				{
					// Buff the player
					player->HandleStatModifier(UnitMods(UNIT_MOD_STAT_START + i), TOTAL_PCT, difficulty * SoloCraftStatsMult, true); //Unitmods enum UNIT_MOD_STAT_START defined in Unit.h line 391
								
				}

				// Set player health
				player->SetFullHealth();//defined in Unit.h line 1524
				
				//Spellcaster Stat modify
				if (player->getPowerType() == POWER_MANA)
				{
					// Buff the player's mana
					player->SetPower(POWER_MANA, player->GetMaxPower(POWER_MANA));
					//Buff Spellpower
					if (difficulty > 0) //Debuffed characters do not get spellpower
					{
						SpellPowerBonus = static_cast<int>((player->getLevel() * SoloCraftSpellMult) * difficulty);//Yes, I pulled this calc out of my butt.
						player->ApplySpellPowerBonus(SpellPowerBonus,true);
						//sLog->outError("%u: spellpower Bonus applied: %i", player->GetGUID(), SpellPowerBonus);
					}	
				}
				
				//Announcements
				if (difficulty > 0)
				{
					// Announce to player - Buff
					ss << "|cffFF0000[SoloCraft] |cffFF8000" << player->GetName() << " entered %s  - Difficulty Offset: %0.2f. Spellpower Bonus: %i";
					ChatHandler(player->GetSession()).PSendSysMessage(ss.str().c_str(), map->GetMapName(), difficulty, SpellPowerBonus);			
				}
				else
				{
					// Announce to player - Debuff
					ss << "|cffFF0000[SoloCraft] |cffFF8000" << player->GetName() << " entered %s  - |cffFF0000BE ADVISED - You have been debuffed by offset: %0.2f. |cffFF8000 A group member already inside has the dungeon's full buff offset.  No Spellpower buff will be applied to spell casters.  ALL group members must exit the dungeon and re-enter to receive a balanced offset.";
					ChatHandler(player->GetSession()).PSendSysMessage(ss.str().c_str(), map->GetMapName(), difficulty);	
				}
				
				// Save Player Dungeon Offsets to Database
				CharacterDatabase.PExecute("REPLACE INTO custom_solocraft_character_stats (GUID, Difficulty, GroupSize, SpellPower, Stats) VALUES (%u, %f, %u, %i, %f)", player->GetGUID(), difficulty, numInGroup, SpellPowerBonus, SoloCraftStatsMult);
			}
			else
			{
				// Announce to player - Over Max Level Threshold
				ss << "|cffFF0000[SoloCraft] |cffFF8000" << player->GetName() << " entered %s  - |cffFF0000You have not been buffed. |cffFF8000 Your level is higher than the max level (%i) threshold for this dungeon.";
				ChatHandler(player->GetSession()).PSendSysMessage(ss.str().c_str(), map->GetMapName(), dunLevel + SolocraftLevelDiff);	
			}

        }
		else			
			ClearBuffs(player, map, numInGroup); //Check to revert player back to normal - Moving this here fixed logout and login while in instance buff and debuff issues
	}
	
    // Get the current group members GUIDS and return the total sum of the difficulty offset by all group members currently in the dungeon
    float GetGroupDifficulty(Player* player) {
        float GroupDifficulty = 0.0;
        Group *group = player->GetGroup();
        if (group) 
		{
            Group::MemberSlotList const& groupMembers = group->GetMemberSlots();
			for (Group::member_citerator itr = groupMembers.begin(); itr != groupMembers.end(); ++itr)
			{
				//Exclude player from the tally because the player is the one entering the dungeon
				if (itr->guid != player->GetGUID()) 
				{
					//Database query to find difficulty for each group member that is currently in an instance
					QueryResult result = CharacterDatabase.PQuery("SELECT `GUID`, `Difficulty`, `GroupSize` FROM `custom_solocraft_character_stats` WHERE GUID = %u", itr->guid);
					if (result) 
					{
						//Test for debuffs already give to other members - They cannot be used to determine the total offset because negative numbers will skew the total difficulty offset 
						if ((*result)[1].GetFloat() > 0)
						{
							GroupDifficulty = GroupDifficulty + (*result)[1].GetFloat();
							//sLog->outError("%u : Group member GUID in instance: %u", player->GetGUID(), itr->guid);
						}
					}
				}
			}
		}
        return GroupDifficulty;
    }
	
    void ClearBuffs(Player* player, Map* map, int numInGroup)
    {
	
		//Database query to get offset from the last instance player exited
		QueryResult result = CharacterDatabase.PQuery("SELECT `GUID`, `Difficulty`, `GroupSize`, `SpellPower`, `Stats` FROM `custom_solocraft_character_stats` WHERE GUID = %u", player->GetGUID());
		if (result)
		{
			float difficulty = (*result)[1].GetFloat();
			int SpellPowerBonus = (*result)[3].GetUInt32();
			float StatsMultPct = (*result)[4].GetFloat();		
			
			//sLog->outError("Map difficulty: %f", difficulty);

            // Inform the player
            std::ostringstream ss;
			ss << "|cffFF0000[SoloCraft] |cffFF8000" << player->GetName() << " exited to %s - Reverting Difficulty Offset: %0.2f. Spellpower Bonus Removed: %i";
            ChatHandler(player->GetSession()).PSendSysMessage(ss.str().c_str(), map->GetMapName(), difficulty, SpellPowerBonus);

            // Clear the buffs
            for (int32 i = STAT_STRENGTH; i < MAX_STATS; ++i)
            {
                player->HandleStatModifier(UnitMods(UNIT_MOD_STAT_START + i), TOTAL_PCT, difficulty * StatsMultPct, false);
            }
            if (player->getPowerType() == POWER_MANA && difficulty > 0)
            {
                // remove spellpower bonus
				player->ApplySpellPowerBonus(SpellPowerBonus,false);
				//sLog->outError("%u: spellpower Bonus removed: %i", player->GetGUID(), SpellPowerBonus);				
            }			

			//Remove database entry as the player is no longer in an instance
			CharacterDatabase.PExecute("DELETE FROM custom_solocraft_character_stats WHERE GUID = %u", player->GetGUID());
		}
    }
};

void AddSolocraftScripts()
{
    new SolocraftConfig();
    new SolocraftAnnounce();
    new solocraft_player_instance_handler();
}
