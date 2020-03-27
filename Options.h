#pragma once
#include "Scene.h"
#include "FontManager.h"
#include "SoundManager.h"
#include "TextureManager.h"

class Options :
	public Scene
{
public:
	Options();
	Options(sf::RenderWindow& pWindow);
	~Options();

	virtual void Update(Scene& _CurrentScene);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	virtual void Controller(sf::Event event);
	virtual void Controller();
private:
	sf::Sprite masterSoundBar;
	sf::Sprite masterSoundLeveler;
	sf::Sprite musicSoundBar;
	sf::Sprite musicSoundLeveler;
	sf::Sprite fullScreenActivator;
	sf::Sprite optionSelecter;
	sf::Sprite vSyncScreenActivator;
	sf::Sprite commandSprite;
	sf::Sprite backgroundSprite;
	sf::Sprite helpSprite;
	sf::Sprite vSyncText;
	sf::Sprite fullScreenText;
	sf::Sprite musicText;
	sf::Sprite masterText;
	sf::Sound retourSound;
	sf::Sound selecSound;
	sf::Sound validSound;
	sf::Text video = Tools::Create_text(*FontManager::getInstance()->getFont(Font_Arial), sf::Color::White, 60, { 100.f ,0.f }, "VIDEO");
	sf::Text son = Tools::Create_text(*FontManager::getInstance()->getFont(Font_Arial), sf::Color::White, 60, { 580.f ,0.f }, "SON");
	sf::Text controles = Tools::Create_text(*FontManager::getInstance()->getFont(Font_Arial), sf::Color::White, 60, { 580.f * 2 ,0.f }, "CONTROLES");
	sf::Text aide = Tools::Create_text(*FontManager::getInstance()->getFont(Font_Arial), sf::Color::White, 60, { 580.f * 3 ,0.f }, "AIDE");
	int selectedOption;
	int selectedPanel;
	int currentSectionButtonCount;
	float baseLevelerWidht;
	sf::Clock moveTimer;
	sf::Sprite m_file;
};

