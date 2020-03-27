#include "Animation.h"

Animation::Animation()
{
}

Animation::Animation(const sf::Texture* _texture, int _width, int _height, float _animation, int _maxAnimationFrameX, sf::Vector2f _position, sf::Vector2f _origin)
{
	// set texture of the sprite
	this->spCurrentSpriteToDisplay.setTexture(*_texture);
	this->iWidth = _width; // save width
	this->iHeight = _height; // save height
	this->fAnimation = _animation; // save time between two animation
	this->iMaxAnimationFrameX = _maxAnimationFrameX; // number of frame max X
	this->iRectanimation = sf::IntRect(0, 0, _width, _height); // set default animation rect
	this->AnimationTime.restart();
	this->iAnimationFrameX = 0;
	this->spCurrentSpriteToDisplay.setTextureRect(this->iRectanimation); // set animation rect

	this->setPosition(_position); // set position
	this->setOrigin(_origin);
}


Animation::~Animation()
{
}

void Animation::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(this->spCurrentSpriteToDisplay, this->getTransform());
}

bool Animation::Animate(int _line, bool _isLoop, int _standFrame)
{
	// if time to do an animation
	if (AnimationTime.getElapsedTime().asSeconds() > fAnimation)
	{
		// if no _standFrame seleceted
		if (_standFrame == NULL)
		{
			if (_isLoop == true)
			{
				if (iMaxAnimationFrameX != 0)
					iAnimationFrameX = (iAnimationFrameX + 1) % iMaxAnimationFrameX;
			}
			else
			{
				if (iAnimationFrameX < iMaxAnimationFrameX)
					iAnimationFrameX = iAnimationFrameX + 1;
				else
					return true;
			}
		}
		// if _standFrame selected
		else
		{
			iAnimationFrameX = _standFrame;
		}

		// set the animtion rect
		iRectanimation.left = iAnimationFrameX * iWidth;
		iRectanimation.top = _line * iHeight;
		spCurrentSpriteToDisplay.setTextureRect(iRectanimation);
		AnimationTime.restart();
	}

	return false;
}

bool Animation::AnimateY(int _line, bool _isLoop, int _standFrame)
{
	// if time to do an animation
	if (AnimationTime.getElapsedTime().asSeconds() > fAnimation)
	{
		// if no _standFrame seleceted
		if (_standFrame == NULL)
		{
			if (_isLoop == true)
			{
				if (iMaxAnimationFrameX != 0)
				iAnimationFrameX = (iAnimationFrameX + 1) % iMaxAnimationFrameX;
			}
			else
			{
				if (iAnimationFrameX < iMaxAnimationFrameX)
					iAnimationFrameX = iAnimationFrameX + 1;
				else
					return true;
			}
		}
		// if _standFrame selected
		else
		{
			iAnimationFrameX = _standFrame;
		}

		// set the animtion rect
		iRectanimation.left = _line * iWidth;
		iRectanimation.top = iAnimationFrameX * iHeight;
		spCurrentSpriteToDisplay.setTextureRect(iRectanimation);
		AnimationTime.restart();
	}

	return false;
}

sf::FloatRect Animation::getGlobalBounds()
{
	return this->getTransform().transformRect(spCurrentSpriteToDisplay.getGlobalBounds());
}

void Animation::setFrameX(int pFrame)
{
	iAnimationFrameX = pFrame;

	// set the animtion rect
	iRectanimation.left = iAnimationFrameX * iWidth;
	spCurrentSpriteToDisplay.setTextureRect(iRectanimation);
}

void Animation::setFrameY(int pFrame)
{
	iAnimationFrameX = pFrame;

	// set the animtion rect
	iRectanimation.top = iAnimationFrameX * iWidth;
	spCurrentSpriteToDisplay.setTextureRect(iRectanimation);
}

bool Animation::AnimationIsFinish()
{
	if (iAnimationFrameX == iMaxAnimationFrameX)
		return true;
	else
		return false;
}

void Animation::setFixedFrame(int pFrameX, int pFrameY)
{
	iAnimationFrameX = pFrameX;
	iRectanimation.top = pFrameY * iHeight;
	iRectanimation.left = pFrameX * iWidth;
	spCurrentSpriteToDisplay.setTextureRect(iRectanimation);
}
