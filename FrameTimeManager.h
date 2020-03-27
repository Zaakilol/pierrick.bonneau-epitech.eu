#pragma once
#include "Tools.h"
#include "Singleton.h"

class FrameTimeManager : public Singleton<FrameTimeManager>
{
	friend Singleton<FrameTimeManager>;

public:

	// Get the time since last frame 
	static float getTimeSinceLastFrame();
	// Call this fonction at the start of game while
	static void setTheCurrentTime();
	// Call this fonction at the end of game while
	static void setTheLastTime();

private:
	FrameTimeManager() {};

	static float currentTime;
	static float lastTime;
	static float timeSinceLastFrame;
};

