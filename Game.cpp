#include "Game.h"
#include "TextureManager.h"
#include "JoystickController.h"
#include "MusicManager.h"
#include "SoundManager.h"

Game::Game()
{
}

Game::Game(sf::RenderWindow& window, std::string pLevel) : Scene(window)
{
}

Game::~Game()
{
}

void Game::Update(Scene& _CurrentScene)
{
	
}

void Game::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	
}

void Game::Controller(sf::Event event)
{
}

void Game::Controller()
{
}
