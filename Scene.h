#pragma once
#include "Tools.h"
#include "enums.h"

class Scene : public sf::Drawable
{
public:

	Scene();
	Scene(sf::RenderWindow &_window);
	virtual ~Scene();

	virtual void Update(Scene & _CurrentScene) = 0;
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0;
	virtual void Controller(sf::Event event) = 0;
	virtual void Controller() = 0;

	OurEnums::eSceneType getSceneType() { return currentSceneType; }
	void setSceneType(OurEnums::eSceneType _sceneType) { currentSceneType = _sceneType; }


protected:

	OurEnums::eSceneType currentSceneType = OurEnums::eSceneType::no_scene_type;
	sf::RenderWindow* window = nullptr;
};

