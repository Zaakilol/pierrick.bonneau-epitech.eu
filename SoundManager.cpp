#include "SoundManager.h"

float SoundManager::m_volume = 50.f;

std::map<std::string, sf::SoundBuffer*> SoundManager::Menu_Sound;
std::map<std::string, sf::SoundBuffer*> SoundManager::Level_Sound;
std::map<std::string, sf::SoundBuffer*> SoundManager::Level1_Sound;
std::map<std::string, sf::SoundBuffer*> SoundManager::Level2_Sound;
std::map<std::string, sf::SoundBuffer*> SoundManager::Option_Sound;
std::map<std::string, sf::SoundBuffer*> SoundManager::Credit_Sound;
std::map<std::string, sf::SoundBuffer*> SoundManager::Map_Player_Sound;
std::map<std::string, sf::SoundBuffer*> SoundManager::LoadScreen_Sound;

const sf::SoundBuffer* SoundManager::getSoundBuffer(const std::string _fileName, const std::string _MapName)
{
	if (_MapName == "MenuSound")
	{
		if (Menu_Sound.find(_fileName) != Menu_Sound.end())
		{
			return Menu_Sound[_fileName];
		}
	}
	else if (_MapName == Player_Sound_Map)
	{
		if (Map_Player_Sound.find(_fileName) != Map_Player_Sound.end())
		{
			return Map_Player_Sound[_fileName];
		}
	}
	else if (_MapName == Map_Sound_Map)
	{
		if (Level_Sound.find(_fileName) != Level_Sound.end())
		{
			return Level_Sound[_fileName];
		}
	}

	return nullptr;
}

void SoundManager::LoadIntroSound()
{
}

void SoundManager::LoadMenu_Sound()
{	
}

void SoundManager::LoadLevel_Sound()
{
}

void SoundManager::LoadLevel1_Sound()
{
}

void SoundManager::LoadLevel2_Sound()
{
}

void SoundManager::LoadOption_Sound()
{
}

void SoundManager::LoadCredit_Sound()
{
}

void SoundManager::LoadPlayer_Sound()
{
}