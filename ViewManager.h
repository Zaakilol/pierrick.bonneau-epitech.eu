#pragma once
#include "Tools.h"

class ViewManager
{
public:

	ViewManager();
	~ViewManager();

	void Update();
	sf::View getView() { return m_view; };
	sf::View* getPointeurView() { return &m_view; };
	sf::Vector2f getPosition() { return m_view.getCenter(); };
	float viewSpeed;
private:

	sf::View m_view;
};

