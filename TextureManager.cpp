#include "TextureManager.h"

std::map<std::string, sf::Texture*> TextureManager::Intro_Texture;
std::map<std::string, sf::Texture*> TextureManager::Menu_Texture;
std::map<std::string, sf::Texture*> TextureManager::Player_Texture;
std::map<std::string, sf::Texture*> TextureManager::m_Map_Texture;
std::map<std::string, sf::Texture*> TextureManager::m_Parallax_Texture;
std::map<std::string, sf::Texture*> TextureManager::m_Collectibles_Texture;
std::map<std::string, sf::Texture*> TextureManager::m_Hud_Texture;
std::map<std::string, sf::Texture*> TextureManager::m_LevelSelector_Texture;
std::map<std::string, sf::Texture*> TextureManager::m_Common_Texture;

void TextureManager::LoadMenuTexture()
{
	
}

void TextureManager::LoadPlayerTexture()
{
	
}

void TextureManager::LoadMapTexture()
{

}

void TextureManager::LoadParralaxLevel1()
{

}

void TextureManager::LoadParralaxLevel2()
{
	
}

void TextureManager::LoadIntroTexture()
{
	
}

const sf::Texture* TextureManager::getTexture(const std::string _fileName, const std::string _MapName)
{
	if (_MapName == Texture_Map_Intro)
	{
		if (Intro_Texture.find(_fileName) != Intro_Texture.end())
		{
			return Intro_Texture[_fileName];
		}
	}
	else if (_MapName == Texture_Map_Menu)
	{
		if (Menu_Texture.find(_fileName) != Menu_Texture.end())
		{
			return Menu_Texture[_fileName];
		}
	}
	else if (_MapName == Texture_Map_Player)
	{
		if (Player_Texture.find(_fileName) != Player_Texture.end())
		{
			return Player_Texture[_fileName];
		}
	}
	else if (_MapName == Texture_Map_Map)
	{
		if (m_Map_Texture.find(_fileName) != m_Map_Texture.end())
		{
			return m_Map_Texture[_fileName];
		}
	}
	else if (_MapName == Texture_Map_Collectibles)
	{
		if (m_Collectibles_Texture.find(_fileName) != m_Collectibles_Texture.end())
		{
			return m_Collectibles_Texture[_fileName];
		}
	}
	else if (_MapName == Texture_Map_Drone)
	{
		if (m_Map_Texture.find(_fileName) != m_Map_Texture.end())
		{
			return m_Map_Texture[_fileName];
		}
	}
	else if (_MapName == Texture_Map_Beginning)
	{
		if (m_Map_Texture.find(_fileName) != m_Map_Texture.end())
		{
			return m_Map_Texture[_fileName];
		}
	}
	else if (_MapName == Texture_Map_TunnelBegin)
	{
		if (m_Map_Texture.find(_fileName) != m_Map_Texture.end())
		{
			return m_Map_Texture[_fileName];
		}
	}
	else if (_MapName == Texture_Map_TunnelBoucle)
	{
		if (m_Map_Texture.find(_fileName) != m_Map_Texture.end())
		{
			return m_Map_Texture[_fileName];
		}
	}
	else if (_MapName == Texture_Map_TunnelTransition)
	{
		if (m_Map_Texture.find(_fileName) != m_Map_Texture.end())
		{
			return m_Map_Texture[_fileName];
		}
	}
	else if (_MapName == "parallax")
	{
		if (m_Parallax_Texture.find(_fileName) != m_Parallax_Texture.end())
		{
			return m_Parallax_Texture[_fileName];
		}
	}
	else if (_MapName == "HUD")
	{
		if (m_Hud_Texture.find(_fileName) != m_Hud_Texture.end())
		{
			return m_Hud_Texture[_fileName];
		}
	}
	else if (_MapName == "LevelSelector")
	{
		if (m_LevelSelector_Texture.find(_fileName) != m_LevelSelector_Texture.end())
		{
			return m_LevelSelector_Texture[_fileName];
		}
	}
	else if (_MapName == "Common")
	{
		if (m_Common_Texture.find(_fileName) != m_Common_Texture.end())
		{
			return m_Common_Texture[_fileName];
		}
	}
	else {
		CDEBUG("Texture Map name not found");
		return nullptr;
	}
}