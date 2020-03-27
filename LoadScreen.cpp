#include "LoadScreen.h"
#include "TextureManager.h"
#include "FontManager.h"
#include "FrameTimeManager.h"
#include "GameManager.h"
#include "SoundManager.h"
#include "MusicManager.h"

#define LOAD_SCREEN_SIZE sf::Vector2i(60,60)

LoadScreen::LoadScreen()
{
}

LoadScreen::~LoadScreen()
{
}

void LoadScreen::Ini()
{
	if (threadCanBeUse())
	{
		m_thread = new std::thread(&LoadScreen::Load, this);
		LoadStart();
	}

	sf::Vector2u _windowSize = GameManager::getInstance()->getWindow().getSize();
}

void LoadScreen::LoadStart()
{
	isOnLoading = true;
}

void LoadScreen::LoadEnd()
{
	isOnLoading = false;
}

void LoadScreen::Update()
{
	
}

void LoadScreen::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
}

void LoadScreen::Load()
{
	TextureManager::getInstance()->LoadMenuTexture();
	TextureManager::getInstance()->LoadPlayerTexture();
	TextureManager::getInstance()->LoadMapTexture();
	FontManager::getInstance()->LoadFont();

	MusicManager::getInstance()->LoadCredit_Music();
	MusicManager::getInstance()->LoadLevel1_Music();
	MusicManager::getInstance()->LoadLevel2_Music();
	MusicManager::getInstance()->LoadMenu_Music();
	MusicManager::getInstance()->LoadOption_Music();

	SoundManager::getInstance()->LoadMenu_Sound();
	SoundManager::getInstance()->LoadCredit_Sound();
	SoundManager::getInstance()->LoadLevel1_Sound();
	SoundManager::getInstance()->LoadLevel2_Sound();
	SoundManager::getInstance()->LoadLevel_Sound();
	SoundManager::getInstance()->LoadOption_Sound();
	SoundManager::getInstance()->LoadPlayer_Sound();
	MusicManager::getInstance()->setVolume();

	isOnLoading = false;
	CDEBUG("Load is finished");
}