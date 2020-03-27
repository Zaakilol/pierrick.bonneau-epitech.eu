#pragma once
#include "Tools.h"

class Button : public sf::Drawable
{
public:
	Button();
	Button(const sf::Texture* _texture, int _width, int _height, int _spriteSheetLine, sf::Vector2f _position, bool _setMiddleOrigin = false);
	~Button();

	void Update(sf::Vector2f _MousePosition);

	bool Collider(sf::Vector2f _position);
	bool Collider(sf::FloatRect _rect);

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	void setPosition(sf::Vector2f _position);
	sf::FloatRect getGlobalBounds();
	sf::Vector2f getPosition() { return m_Button.getPosition(); };

private:

	// animated button
	sf::Sprite m_Button;

	// Line of the button in the spriteSheet
	int m_lineOfTheButton = 0;

	// rect size of the button
	sf::Vector2i m_sizeOfTheButton;
};

