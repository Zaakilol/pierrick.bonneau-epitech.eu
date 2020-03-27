#include "GameManager.h"
#include "FrameTimeManager.h"
#include "LoadScreen.h"

int main()
{
	srand(time(NULL));
	//sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "window");
	sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "window",sf::Style::Fullscreen);
	window.setVerticalSyncEnabled(true);
	window.setFramerateLimit(60);
	window.setMouseCursorVisible(false);

	// initialize GameManager
	GameManager::getInstance()->Ini(window);
	// initialize LoadScreen
	LoadScreen::getInstance()->Ini();

	while (window.isOpen())
	{
		FrameTimeManager::getInstance()->setTheCurrentTime(); // set current time of this frame
		if (LoadScreen::getInstance()->threadCanBeUse() == false) // if resources not load 
		{
			// update load screen
			LoadScreen::getInstance()->Update();

			// display load screen
			window.draw(*LoadScreen::getInstance());
			window.display();
		}
		else // if resources load
		{
			GameManager::getInstance()->Controller(); // controller of the game

			GameManager::getInstance()->Update(); // update of the game

			window.clear(sf::Color(100, 100, 100, 255)); // clear window 
		
			GameManager::getInstance()->Display(); // display of the game

			window.display(); // display window
		}

		FrameTimeManager::getInstance()->setTheLastTime(); // set last time of this frame
	}

	return 0;
}