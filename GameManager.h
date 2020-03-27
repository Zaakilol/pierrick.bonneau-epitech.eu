#pragma once
#include "Scene.h"
#include "Singleton.h"
#include "Game.h"
#include "Menu.h"

class GameManager : public Singleton<GameManager>
{
	friend Singleton<GameManager>;

public:
	~GameManager();

	// call the corresponding fontion of the Scene
	void Update();
	void Display();
	void Controller();

	void Ini(sf::RenderWindow& _window);
	sf::RenderWindow&getWindow() { return *window; };
	bool isFullscreen = true;
	bool isVSyncEnabled = true;
	void toggleVsync();
	void toggleFullscreen();
private:

	GameManager();
	// window give to the manager is considered has game window
	sf::RenderWindow* window = nullptr;
	Scene* currentScene = nullptr;
	OurEnums::eSceneType previousSceneType = OurEnums::eSceneType::Intro;
	void ChangeSceneType();
};
