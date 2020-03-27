#include "FrameTimeManager.h"

float FrameTimeManager::currentTime = 0.f;
float FrameTimeManager::lastTime = 0.f;
float FrameTimeManager::timeSinceLastFrame = 0.f;

float FrameTimeManager::getTimeSinceLastFrame()
{
	timeSinceLastFrame = currentTime - lastTime;
	return timeSinceLastFrame;
}

void FrameTimeManager::setTheCurrentTime()
{
	currentTime = (float)clock() / CLOCKS_PER_SEC;
}

void FrameTimeManager::setTheLastTime()
{
	lastTime = currentTime;
}
