#pragma once
#include "Tools.h"
#include "Singleton.h"

#define Player_Sound_Map "map sound player"
#define Player_Sound_Jump "../Resources/Sounds/Saut joueur.ogg"
#define Player_Sound_Hack "../Resources/Sounds/HACK 1.ogg"
#define Player_Sound_Grapnel "../Resources/Sounds/grappin.ogg"
#define Player_Sound_Bomb "../Resources/Sounds/mine electrique.ogg"
#define Player_Sound_nitro "../Resources/Sounds/utilisation nitro.ogg"
#define Player_Sound_Bouclier "../Resources/Sounds/bouclier2.ogg"
#define Player_Sound_Repulse "../Resources/Sounds/répulsion.ogg"
#define Player_Sound_TakeTrap "../Resources/Sounds/impact piege2.ogg"

#define Map_Sound_Map "Map sound map"
#define Map_Sound_Collectible "../Resources/Sounds/explosion capsule.ogg"
#define Map_Sound_Gyro "../Resources/Sounds/POLICE.ogg"
#define Map_Sound_Tram "../Resources/Sounds/metro.ogg"
#define Map_Sound_NitroCollectible "../Resources/Sounds/nitro collectible.ogg"

class SoundManager : public Singleton<SoundManager>
{
	friend Singleton<SoundManager>;

public:

	const static sf::SoundBuffer* getSoundBuffer(const std::string _fileName, const std::string _MapName);
	static float m_volume;

	static void LoadIntroSound();
	static void LoadMenu_Sound();
	static void LoadLevel_Sound();
	static void LoadLevel1_Sound();
	static void LoadLevel2_Sound();
	static void LoadOption_Sound();
	static void LoadCredit_Sound();
	static void LoadPlayer_Sound();
private:
	SoundManager() {};

	static std::map<std::string, sf::SoundBuffer*> Menu_Sound;

	static std::map<std::string, sf::SoundBuffer*> Level_Sound;
	static std::map<std::string, sf::SoundBuffer*> Level1_Sound;

	static std::map<std::string, sf::SoundBuffer*> Level2_Sound;

	static std::map<std::string, sf::SoundBuffer*> Option_Sound;

	static std::map<std::string, sf::SoundBuffer*> Credit_Sound;

	static std::map<std::string, sf::SoundBuffer*> Map_Player_Sound;

	static std::map<std::string, sf::SoundBuffer*> LoadScreen_Sound;
};