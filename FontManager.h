#pragma once
#include "Tools.h"
#include "Singleton.h"

class FontManager : public Singleton<FontManager>
{
	friend Singleton<FontManager>;

public:

	static void LoadFont();

	static sf::Font* getFont(std::string _fontName);

private:
	
	FontManager() {};
	static std::map<std::string, sf::Font*> font;
};

