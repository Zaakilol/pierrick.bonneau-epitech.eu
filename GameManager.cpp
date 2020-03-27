#include "GameManager.h"
#include "FontManager.h"
#include "TextureManager.h"
#include "JoystickController.h"

GameManager::GameManager()
{

}

void GameManager::Ini(sf::RenderWindow& _window)
{
	window = &_window;
	currentScene = new Menu();
	currentScene->setSceneType(OurEnums::eSceneType::Menu);
	CDEBUG("game manager constructor");
}

void GameManager::toggleVsync()
{
	isVSyncEnabled = !isVSyncEnabled;
	window->setVerticalSyncEnabled(isVSyncEnabled);
}

void GameManager::toggleFullscreen()
{
	if (isFullscreen == true)
	{
		window->create(sf::VideoMode::getDesktopMode(), "window", sf::Style::Default);
	}
	else
	{
		window->create(sf::VideoMode::getDesktopMode(), "window", sf::Style::Fullscreen);
	}

	window->setVerticalSyncEnabled(isVSyncEnabled);
	window->setFramerateLimit(60);
	isFullscreen = !isFullscreen;
	window->setMouseCursorVisible(false);
}

GameManager::~GameManager()
{

}

void GameManager::Update()
{
	// update joystick data
	sf::Joystick::update();

	currentScene->Update(*currentScene);
	ChangeSceneType();

	// Verify for all connected joystick if there button are pressed
	JoystickController::getInstance()->resetReleasedButton();
}

void GameManager::Display()
{
	window->draw(*currentScene);
}

void GameManager::Controller()
{
	sf::Event _event;
	while (window->pollEvent(_event))
	{
		if (_event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window->close();
		}

		currentScene->Controller(_event);
	}

	currentScene->Controller();
}

void GameManager::ChangeSceneType()
{
	if (currentScene->getSceneType() != previousSceneType)
	{
		CDEBUG((int)previousSceneType << " has change for " << (int)currentScene->getSceneType());

		Scene* tmpScene = currentScene;

		switch (currentScene->getSceneType())
		{
		case OurEnums::eSceneType::Intro:
			break;
		case OurEnums::eSceneType::Menu:
			currentScene = new Menu();
			currentScene->setSceneType(OurEnums::eSceneType::Menu);
			break;
		case OurEnums::eSceneType::Level_selector:
			break;
		case OurEnums::eSceneType::Game:
			currentScene = new Game();
			currentScene->setSceneType(OurEnums::eSceneType::Game);
			break;
		case OurEnums::eSceneType::Credits:
			break;
		case OurEnums::eSceneType::Options:
			break;
		case OurEnums::eSceneType::end_screen:
			break;
		default:
			break;
		}

		previousSceneType = currentScene->getSceneType();
		delete tmpScene; // delete the last Scene
	}
}