#include "JoystickController.h"

JoystickController::~JoystickController()
{
}

bool JoystickController::isButtonPressed(int pJoystickID, Joystick::button pJoystickButton)
{
	// verify if the button is pressed and if an other action was not carried out
	if (sf::Joystick::isButtonPressed(pJoystickID, (int)pJoystickButton) &&
		m_ButtonPressed[pJoystickID][pJoystickButton] == false)
	{
		return true;
	}
	else
		return false;
}

void JoystickController::setButtonIsPressed(int pJoystickID, Joystick::button pJoystickButton)
{
	// set the button pressed to true
	m_ButtonPressed[pJoystickID][pJoystickButton] = true;
}

void JoystickController::resetReleasedButton()
{
	// for all joystick
	for (int i = 0; i < MAX_OF_CONTROLLER; i++)
	{
		// if the joystick is connected
		if (sf::Joystick::isConnected(i))
		{
			// for all button
			for (int j = 0; j < sf::Joystick::ButtonCount; j++)
			{
				// verify if the button is not pressed
				if (sf::Joystick::isButtonPressed(i, j) == false)
				{
					// set button pressed to false
					m_ButtonPressed[i][Joystick::button(j)] = false;
				}
			}
		}
	}
}

float JoystickController::Lx(int pPlayerID) const
{
	return sf::Joystick::getAxisPosition(pPlayerID, sf::Joystick::Axis::X);
}

float JoystickController::Ly(int pPlayerID) const
{
	return sf::Joystick::getAxisPosition(pPlayerID, sf::Joystick::Axis::Y);
}

float JoystickController::Rx(int pPlayerID) const
{
	return sf::Joystick::getAxisPosition(pPlayerID, sf::Joystick::Axis::U);
}

float JoystickController::Ry(int pPlayerID) const
{
	return sf::Joystick::getAxisPosition(pPlayerID, sf::Joystick::Axis::V);
}

float JoystickController::CrossX(int pPlayerID) const
{
	return sf::Joystick::getAxisPosition(pPlayerID, sf::Joystick::Axis::PovX);
}

float JoystickController::CrossY(int pPlayerID) const
{
	return sf::Joystick::getAxisPosition(pPlayerID, sf::Joystick::Axis::PovY);
}

float JoystickController::Trigger(int pPlayerID) const
{
	return sf::Joystick::getAxisPosition(pPlayerID, sf::Joystick::Axis::Z);
}

JoystickController::JoystickController()
{
	for (int i = 0; i < MAX_OF_CONTROLLER; i++)
	{
		for (int j = 0; j < sf::Joystick::ButtonCount; j++)
		{
			// initialize all button pressed to false
			m_ButtonPressed[i][Joystick::button(j)] = false;
		}
	}
}
