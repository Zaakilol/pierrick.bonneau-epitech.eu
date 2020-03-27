#pragma once
#include "Tools.h"
#include "enums.h"

class Animation : public sf::Transformable , public sf::Drawable
{
public :
	Animation();
	Animation(const sf::Texture* _texture,int _width,int _height,float _animation,int _maxAnimationFrameX,sf::Vector2f _position,sf::Vector2f _origin = sf::Vector2f(0,0));

	~Animation();
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	bool Animate(int _line, bool _isLoop = false, int _standFrame = NULL);
	bool AnimateY(int _line, bool _isLoop = false, int _standFrame = NULL);

	sf::FloatRect getGlobalBounds();
	void setColor(sf::Color pColor) { spCurrentSpriteToDisplay.setColor(pColor); };
	void setFrameX(int pFrame);
	void setFrameY(int pFrame);
	bool AnimationIsFinish();
	int getFrameCountX() { return iAnimationFrameX; };
	void setMaxFrameX(int pMaxFrameX) { iMaxAnimationFrameX = pMaxFrameX; };
	void setFixedFrame(int pFrameX, int pFrameY);
	void setAnimationTimer(float fanim) { fAnimation = fanim; };
protected:
	// current sprite
	sf::Sprite spCurrentSpriteToDisplay;
	// rect animation
	sf::IntRect iRectanimation;
	int iWidth = 0;
	int iHeight = 0;
	// time between two animation
	float fAnimation = 0.f;
	int iMaxAnimationFrameX = 0;
	int iAnimationFrameX = 0;
	// time since last animation
	sf::Clock AnimationTime;
};