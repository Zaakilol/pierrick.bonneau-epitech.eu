#pragma once
#include "Scene.h"
#include "Animation.h"
#include "SoundManager.h"

class LevelSelection :
	public Scene
{
public:
	LevelSelection();
	LevelSelection(sf::RenderWindow& pWindow);
	~LevelSelection();
	virtual void Update(Scene& _CurrentScene);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	virtual void Controller(sf::Event event);
	virtual void Controller();
private:
};

