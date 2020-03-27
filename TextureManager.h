#pragma once
#include "Tools.h"
#include "Singleton.h"

class TextureManager : public Singleton<TextureManager>
{

	friend Singleton<TextureManager>;

public:
	static void LoadParralaxLevel1();
	static void LoadParralaxLevel2();
	static void LoadIntroTexture();
	static void LoadMenuTexture();
	static void LoadPlayerTexture();
	static void LoadMapTexture();
	static const sf::Texture* getTexture(const std::string _fileName, const std::string _MapName);

private:

	TextureManager() {};

	static std::map<std::string, sf::Texture*> Menu_Texture;
	static std::map<std::string, sf::Texture*> Intro_Texture;
	static std::map<std::string, sf::Texture*> Player_Texture;
	static std::map<std::string, sf::Texture*> m_Map_Texture;
	static std::map<std::string, sf::Texture*> m_Parallax_Texture;
	static std::map<std::string, sf::Texture*> m_Collectibles_Texture;
	static std::map<std::string, sf::Texture*> m_Hud_Texture;
	static std::map<std::string, sf::Texture*> m_LevelSelector_Texture;
	static std::map<std::string, sf::Texture*> m_Common_Texture;
};