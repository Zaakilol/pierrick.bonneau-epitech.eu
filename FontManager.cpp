#include "FontManager.h"

std::map<std::string, sf::Font*> FontManager::font;

void FontManager::LoadFont()
{
	// ARIAL FONT
	font[Font_Arial] = new sf::Font();
	font[Font_Arial]->loadFromFile(Font_Path Font_Arial);


}

sf::Font* FontManager::getFont(std::string _fontName)
{
	if (font.find(_fontName) != font.end())
	{
		return font[_fontName];
	}
	else
	{
		return nullptr;
	}
}
