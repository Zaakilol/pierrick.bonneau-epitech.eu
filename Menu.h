#pragma once
#include "Scene.h"
#include "FontManager.h"
#include "FrameTimeManager.h"
#include "SoundManager.h"
#include "Animation.h"
#include "TextureManager.h"
#include "LoadScreen.h"

class Menu :
	public Scene
{
public:
	Menu();
	Menu(sf::RenderWindow& window);
	~Menu();
	virtual void Update(Scene& _CurrentScene);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	virtual void Controller(sf::Event event);
	virtual void Controller();
private:
};