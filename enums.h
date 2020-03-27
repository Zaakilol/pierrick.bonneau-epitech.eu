#pragma once

namespace OurEnums
{
	enum class eSceneType
	{
		Intro,
		Menu,
		Game,
		Options,
		Credits,
		Level_selector,
		end_screen,

		no_scene_type
	};	

	enum class eTeam
	{
		The_swedge,
		Tech_freaks,
		police,

		count
	};

	enum e_Tiles
	{
		EMPTY,
		FULL,
		HALF_RIGHT_UP,
		HALF_RIGHT2_UP,
		HALF_LEFT_UP,
		HALF_LEFT2_UP,
		HALF_RIGHT_DOWN,
		HALF_RIGHT2_DOWN,
		HALF_LEFT_DOWN,
		HALF_LEFT2_DOWN,
		HALF_DOWN,

		count
	};

	enum e_Collectibles
	{
		NONE,
		GRAPPIN,
		MINE,
		SHIELD,
		BOUNCE,
		SPEED,
		SWAP
	};

	enum eCollectibleType
	{
		BONUS,
		eNITRO
	};

	enum e_Trap
	{
		BLUE_HORIZONTAL_B = (int)OurEnums::e_Tiles::count,
		BLUE_VERTICAL_B,
		RED_HORIZONTAL_B,
		RED_VERTICAL_B,
		GREEN_HORIZONTAL_B,
		GREEN_VERTICAL_B,
		BLUE_HORIZONTAL_M,
		BLUE_VERTICAL_M,
		RED_HORIZONTAL_M,
		RED_VERTICAL_M,
		GREEN_HORIZONTAL_M,
		GREEN_VERTICAL_M,
		BLUE_VERTICAL_E,
		BLUE_HORIZONTAL_E,
		RED_HORIZONTAL_E,
		RED_VERTICAL_E,
		GREEN_HORIZONTAL_E,
		GREEN_VERTICAL_E,
		BOUNCING_BLUE,
		BOUNCING_RED,

		count2
	};

	enum e_StatusEffect
	{
		NORMAL,
		ATTRAPPE,
		ZAPPED,
		BOUCLIER,
		REPUL,
		NITRO,
		SWAPCOLOR
	};

	enum e_Direction
	{
		VERTICAL,
		HORIZONTAL
	};

	enum e_Tunnel
	{
		BEGIN,
		END,
		ENDROTATE,
		TRANSITION
	};

	enum e_Textures
	{
		YES
	};
}