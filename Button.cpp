#include "Button.h"

Button::Button()
{

}

Button::Button(const sf::Texture* _texture, int _width, int _height, int _spriteSheetLine, sf::Vector2f _position, bool _setMiddleOrigin)
{
	m_Button.setTexture(*_texture); // set the texture of m_Button
	m_Button.setPosition(_position); // set the position of m_Button

	m_lineOfTheButton = _spriteSheetLine; // save the spriteSheetLine
	m_sizeOfTheButton = { _width,_height }; // save the size of the button

	// set the default texture rect of the m_button (button not selected)
	m_Button.setTextureRect({ 0, m_lineOfTheButton * m_sizeOfTheButton.y, m_sizeOfTheButton.x, m_sizeOfTheButton.y });

	if (_setMiddleOrigin == true)
	{
		m_Button.setOrigin(Tools::getMiddle(m_Button.getGlobalBounds()));
	}
}

Button::~Button()
{
}

void Button::Update(sf::Vector2f _MousePosition)
{
	if (Collider(_MousePosition)) // mouse on the sprite
	{
		// set the selected button animation rect
		m_Button.setTextureRect({ m_sizeOfTheButton.x, m_lineOfTheButton * m_sizeOfTheButton.y, m_sizeOfTheButton.x, m_sizeOfTheButton.y });
	}
	else // mouse not on the sprite
	{
		// set the not selected button animation rect
		m_Button.setTextureRect({ 0, m_lineOfTheButton * m_sizeOfTheButton.y, m_sizeOfTheButton.x, m_sizeOfTheButton.y });
	}
}

bool Button::Collider(sf::Vector2f _position)
{
	return m_Button.getGlobalBounds().contains(_position);
}

bool Button::Collider(sf::FloatRect _rect)
{
	return m_Button.getGlobalBounds().intersects(_rect);
}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_Button);
}

void Button::setPosition(sf::Vector2f _position)
{
	m_Button.setPosition(_position);
}

sf::FloatRect Button::getGlobalBounds()
{
	return m_Button.getGlobalBounds();
}
