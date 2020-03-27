#pragma once
#include "Scene.h"

#define VIEW_MOVE_SPEED 100

class Game :
	public Scene
{
public:
	Game();
	Game(sf::RenderWindow &window,std::string pLevel);
	~Game();

	virtual void Update(Scene& _CurrentScene);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	virtual void Controller(sf::Event event);
	virtual void Controller();
private:
};