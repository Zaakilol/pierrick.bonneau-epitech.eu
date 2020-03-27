#include "Tools.h"
#include <Windows.h>

// PUBLIC

sf::Vector2f Tools::rotate(sf::Vector2f M, sf::Vector2f O, float angle)
{
	float xM, yM, x, y;

	angle *= PI / 180;
	xM = M.x - O.x;
	yM = M.y - O.y;
	x = xM * cos(angle) + yM * sin(angle) + O.x;
	y = -xM * sin(angle) + yM * cos(angle) + O.y;
	return { x / round(x), y / round(y) };
}

sf::Sprite Tools::Create_sprite(std::string _path)
{
	sf::Sprite sprite;
	sf::Texture* texture = new sf::Texture();
	texture->loadFromFile(_path);
	sprite.setTexture(*texture);
	return sprite;
}

sf::Sprite Tools::Create_sprite(sf::Texture& texture)
{
	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setOrigin(Tools::getMiddle(sprite.getGlobalBounds()));
	return sprite;
}

sf::Sprite Tools::Create_sprite(std::string _path, sf::Vector2f pos, bool setOrigin)
{
	sf::Sprite sprite;
	sf::Texture* texture = new sf::Texture();
	texture->loadFromFile(_path);
	sprite.setTexture(*texture);
	if (setOrigin == true)
		sprite.setOrigin(Tools::getMiddle(sprite.getGlobalBounds()));
	sprite.setPosition(pos);
	return sprite;
}

sf::Sprite Tools::Create_sprite(const sf::Texture* texture, bool setOrigin)
{
	sf::Sprite sprite;
	sprite.setTexture(*texture);
	if (setOrigin == true)
		sprite.setOrigin(Tools::getMiddle(sprite.getGlobalBounds()));
	return sprite;
}

sf::Sound Tools::Create_sound(std::string _path)
{
	sf::Sound sound;
	sf::SoundBuffer* buffer = new sf::SoundBuffer();
	buffer->loadFromFile(_path);
	sound.setBuffer(*buffer);
	return sound;
}

sf::Sound Tools::Create_sound(sf::SoundBuffer& _buffer)
{
	sf::Sound sound;
	sound.setBuffer(_buffer);
	return sound;
}

sf::Text Tools::Create_text(std::string _path, sf::Color _color, int _characterSize, sf::Vector2f _position, std::string _string, bool setMiddleOrigin)
{
	sf::Font* font = new sf::Font();
	sf::Text text;

	if (font->loadFromFile(_path))
	{
		text.setFont(*font);
	}
	text.setCharacterSize(_characterSize);
	text.setFillColor(_color);
	text.setPosition(_position);
	text.setString(_string);

	if (setMiddleOrigin == true)
	{
		text.setOrigin(Tools::getTextMiddle(&text));
	}

	return text;
}

sf::Text Tools::Create_text(sf::Font& _font, sf::Color _color, int _characterSize, sf::Vector2f _position, std::string _string, bool setMiddleOrigin)
{
	sf::Text text;
	text.setFont(_font);
	text.setCharacterSize(_characterSize);
	text.setFillColor(_color);
	text.setPosition(_position);
	text.setString(_string);

	if (setMiddleOrigin == true)
	{
		text.setOrigin(Tools::getTextMiddle(&text));
	}

	return text;
}

sf::Text Tools::Create_text(std::string _path, sf::Color _color, int _characterSize, sf::Vector2f _position, std::wstring _string, bool setMiddleOrigin)
{
	sf::Font* font = new sf::Font();
	sf::Text text;

	if (font->loadFromFile(_path))
	{
		text.setFont(*font);
	}
	text.setCharacterSize(_characterSize);
	text.setFillColor(_color);
	text.setPosition(_position);
	text.setString(_string);

	if (setMiddleOrigin == true)
	{
		text.setOrigin(Tools::getTextMiddle(&text));
	}

	return text;
}

sf::Text Tools::Create_text(sf::Font& _font, sf::Color _color, int _characterSize, sf::Vector2f _position, std::wstring _string, bool setMiddleOrigin)
{
	sf::Text text;
	text.setFont(_font);
	text.setCharacterSize(_characterSize);
	text.setFillColor(_color);
	text.setPosition(_position);
	text.setString(_string);

	if (setMiddleOrigin == true)
	{
		text.setOrigin(Tools::getTextMiddle(&text));
	}

	return text;
}

sf::RectangleShape Tools::Create_rectShape(sf::Color _color, sf::Vector2f _size, sf::Vector2f _position)
{
	sf::RectangleShape shape;
	shape.setSize(_size);
	shape.setFillColor(_color);
	shape.setPosition(_position);
	return shape;
}

sf::Vector2f Tools::getMiddle(sf::FloatRect _bounds)
{
	sf::Vector2f middle;
	middle.x = _bounds.width / 2;
	middle.y = _bounds.height / 2;

	return middle;
}

sf::Vector2f Tools::getTextMiddle(const sf::Text* text)
{
	sf::Vector2f middle;
	middle.x = text->getGlobalBounds().width / 2;
	middle.y = text->getCharacterSize() - text->getGlobalBounds().height / 2;

	return middle;
}

float Tools::Lerp(float _from, float _to, float _time)
{
	if (_time > 1.f)
		_time = 1.f;

	float fTmp = ((1.f - _time) * _from) + (_to * _time);

	return fTmp;
}

sf::Vector2f Tools::GetDirectionFromAngle(float pAngle)
{
	sf::Vector2f direction;
	direction.x = cos(pAngle);
	direction.y = sin(pAngle);
	return direction;
}

float Tools::GetAngleBetweenTwoPoint(sf::Vector2f _point_1, sf::Vector2f _point_2)
{
	return atan2(_point_2.y - _point_1.y, _point_2.x - _point_1.x);
}

float Tools::RadToDeg(float _angle)
{
	return _angle * (180 / PI);
}

float Tools::DegToRad(float _angle)
{
	return (_angle * PI) / 180;
}

/*
	/Brief get the length of _vector
*/
double Tools::Magnitude(sf::Vector2f _vector)
{
	return sqrt((_vector.x * _vector.x) + (_vector.y * _vector.y));
}

/*
	/Brief get the normal of _vector
*/
sf::Vector2f Tools::Normalize(sf::Vector2f _vector)
{
	double length = Magnitude(_vector); // Get the length of the vector

	sf::Vector2f normal;
	normal.x = _vector.x / length;
	normal.y = _vector.y / length;

	return normal;
}

bool Tools::CircleCollision(float _xA, float _yA, float _xB, float _yB, float _rA, float _rB)
{
	float Distance = sqrt(((_xB - _xA) * (_xB - _xA)) + ((_yB - _yA) * (_yB - _yA)));
	if (Distance < _rA + _rB)
	{
		return true;
	}
	return false;
}

std::string Tools::FloatToStringWith2Decimal(float _value)
{
	char* value = new char[30];
	sprintf_s(value, 30, "%.1f", _value);
	std::string test = (std::string)value;
	delete[] value;
	return test;
}

std::wstring Tools::FloatToWStringWith2Decimal(float _value)
{
	char* value = new char[30];
	sprintf_s(value, 30, "%.2f", _value);
	std::string string = (std::string)value;

	int size_needed = MultiByteToWideChar(CP_UTF8, 0, &string[0], (int)string.size(), NULL, 0);
	std::wstring wstrTo(size_needed, 0);
	MultiByteToWideChar(CP_UTF8, 0, &string[0], (int)string.size(), &wstrTo[0], size_needed);

	delete[] value;
	return wstrTo;
}

bool Tools::isThisSpriteInField(sf::Sprite toSee, sf::View camera)
{
	sf::FloatRect field = camera.getViewport();
	if (toSee.getGlobalBounds().intersects(field))
		return true;
	return false;
}
