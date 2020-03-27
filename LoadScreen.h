#pragma once
#include "Tools.h"
#include <thread>
#include "Singleton.h"
#include "Animation.h"
#include <mutex>

class LoadScreen : public Singleton<LoadScreen>,public sf::Drawable
{
	friend Singleton<LoadScreen>;

public:

	~LoadScreen();
	void Ini();
	std::thread* m_thread = nullptr;
	
	void LoadStart();
	void LoadEnd();
	bool threadCanBeUse() { return !isOnLoading; };
	void Update();
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

private:

	Animation m_spLoadScreen;
	int yframe = 0;
	bool isOnLoading = false;
	void Load();
	LoadScreen();
	sf::Clock test;
};