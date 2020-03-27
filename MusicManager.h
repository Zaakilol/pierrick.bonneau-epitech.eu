#pragma once
#include "Tools.h"
#include "Singleton.h"

#define Intro_Music "../Resources/Music/intro.ogg"
#define Music_Credit "../Resources/Music/CREDIT.wav"

class MusicManager : public Singleton<MusicManager>
{
	friend Singleton<MusicManager>;

public:
	static sf::Music* getMusic(const std::string _fileName, const std::string _mapName);

	static float m_volume;
	static void LoadMenu_Music();
	static void LoadLevel1_Music();
	static void LoadLevel2_Music();
	static void LoadOption_Music();
	static void LoadCredit_Music();
	static void LoadPlayer_Music();
	static void setVolume();
private:
	MusicManager() {};
	static std::map<std::string, sf::Music*> Credit_Music;

	static std::map<std::string, sf::Music*> Option_Music;

	static std::map<std::string, sf::Music*> Level2_Music;

	static std::map<std::string, sf::Music*> Level1_Music;

	static std::map<std::string, sf::Music*> Menu_Music;
};