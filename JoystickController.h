#pragma once
#include "Tools.h"
#include "Singleton.h"

#define MAX_OF_CONTROLLER 8

namespace Joystick
{
	enum class button
	{
		A,
		B,
		X,
		Y,
		LB,
		RB,
		BACK,
		START,
		L,
		R
	};
}

class JoystickController : public Singleton<JoystickController>
{
	friend Singleton<JoystickController>;

public:

	~JoystickController();

	bool isButtonPressed(int pJoystickID, Joystick::button pJoystickButton);

	// set the button is pressed
	void setButtonIsPressed(int pJoystickID, Joystick::button pJoystickButton);

	void resetReleasedButton();

#pragma region Joystick value begin

	// return X position of Left joystick
	float Lx(int pPlayerID) const;
	// return Y position of Left joystick
	float Ly(int pPlayerID) const;
	// return X position of Right joystick
	float Rx(int pPlayerID) const;
	// return Y position of Right joystick
	float Ry(int pPlayerID) const;
	// return X position of cross joystick
	float CrossX(int pPlayerID) const;
	// return Y position if cross joystick
	float CrossY(int pPlayerID) const;
	/*
		\ Brief return trigger joystick position
		\ < 0 = left trigger
		\ > 0 = right trigger
	*/
	float Trigger(int pPlayerID) const;

#pragma endregion Joystick value end

private:

	JoystickController();

	std::map<Joystick::button, bool> m_ButtonPressed[MAX_OF_CONTROLLER];
};

