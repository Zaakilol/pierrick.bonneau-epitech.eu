#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <map>

#include <time.h>
#include "enums.h"
#include "Define.h"

class Tools
{
private:


public:


	static sf::Vector2f rotate(sf::Vector2f M, sf::Vector2f O, float angle);

#pragma region SFML Tools

	static sf::Sprite Create_sprite(std::string _path);
	static sf::Sprite Create_sprite(sf::Texture& texture);
	static sf::Sprite Create_sprite(std::string _path, sf::Vector2f pos, bool setOrigin = true);
	static sf::Sprite Create_sprite(const sf::Texture* texture, bool setOrigin = true);
	static sf::Sound Create_sound(std::string _path);
	static sf::Sound Create_sound(sf::SoundBuffer& _buffer);
	static sf::Text Create_text(std::string _path, sf::Color _color, int _characterSize, sf::Vector2f _position = { 0,0 }, std::string _string = "", bool setMiddleOrigin = false);
	static sf::Text Create_text(sf::Font& _font, sf::Color _color, int _characterSize, sf::Vector2f _position = { 0,0 }, std::string _string = "", bool setMiddleOrigin = false);
	static sf::Text Create_text(std::string _path, sf::Color _color, int _characterSize, sf::Vector2f _position = { 0,0 }, std::wstring _string = L"", bool setMiddleOrigin = false);
	static sf::Text Create_text(sf::Font& _font, sf::Color _color, int _characterSize, sf::Vector2f _position = { 0,0 }, std::wstring _string = L"", bool setMiddleOrigin = false);

	static sf::RectangleShape Create_rectShape(sf::Color _color, sf::Vector2f _size, sf::Vector2f _position);

	static sf::Vector2f getMiddle(sf::FloatRect _bounds);

	static sf::Vector2f getTextMiddle(const sf::Text* text);

	static float Lerp(float _from, float _to, float _time);

	static sf::Vector2f GetDirectionFromAngle(float pAngle);
	static float GetAngleBetweenTwoPoint(sf::Vector2f _point_1, sf::Vector2f _point_2);
	static float RadToDeg(float _angle);
	static float DegToRad(float _angle);

	static double Magnitude(sf::Vector2f _vector);

	static sf::Vector2f Normalize(sf::Vector2f _vector);

	static bool CircleCollision(float _xA, float _yA, float _xB, float _yB, float _rA, float _rB);

	static std::string FloatToStringWith2Decimal(float _value);

	static std::wstring FloatToWStringWith2Decimal(float _value);

	static bool isThisSpriteInField(sf::Sprite toSee, sf::View camera);
	#pragma endregion
};