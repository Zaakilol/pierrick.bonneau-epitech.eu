#include "MusicManager.h"

float MusicManager::m_volume = 50.f;
std::map<std::string, sf::Music*> MusicManager::Credit_Music;
std::map<std::string, sf::Music*> MusicManager::Option_Music;
std::map<std::string, sf::Music*> MusicManager::Level2_Music;
std::map<std::string, sf::Music*> MusicManager::Level1_Music;
std::map<std::string, sf::Music*> MusicManager::Menu_Music;

sf::Music* MusicManager::getMusic(const std::string _fileName, const std::string _mapName)
{
	if (_mapName == "MenuSound")
	{
		if (Menu_Music.find(_fileName) != Menu_Music.end())
		{
			return Menu_Music[_fileName];
		}
	}
	else if (_mapName == "Credit")
	{
		if (Credit_Music.find(_fileName) != Credit_Music.end())
		{
			return Credit_Music[_fileName];
		}
	}
}

void MusicManager::LoadMenu_Music()
{
}

void MusicManager::LoadLevel1_Music()
{
}

void MusicManager::LoadLevel2_Music()
{
}

void MusicManager::LoadOption_Music()
{
}

void MusicManager::LoadCredit_Music()
{
}

void MusicManager::LoadPlayer_Music()
{
}

void MusicManager::setVolume()
{
}
