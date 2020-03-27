#include "ViewManager.h"
#include "GameManager.h"
#include "FrameTimeManager.h"

ViewManager::ViewManager()
{
	m_view.setSize((sf::Vector2f)GameManager::getInstance()->getWindow().getSize());
	m_view.setCenter(970, GameManager::getInstance()->getWindow().getSize().y / 2);
}

ViewManager::~ViewManager()
{
}

void ViewManager::Update()
{
	
}