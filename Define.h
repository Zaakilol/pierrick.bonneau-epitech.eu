#pragma once

#define PI 3.14
#define GRAVITY 9.81

#define CDEBUG(pString) std::cout << pString << std::endl


//////////////////////////////////////////////////////         TEXTURE MANAGER         //////////////////////////////////////////////////////

#pragma region Texture Manager begin

// Texture Path
#pragma region Texture Path begin

#define Texture_Path_Intro "../Resources/Intro/"
#define Texture_Path_Menu "../Resources/Menu/"
#define Texture_Path_Player "../Resources/Player/Textures/"
#define Texture_Path_Map "../Resources/Map/Textures/"
#define Texture_Path_Collectibles "../Resources/Collectibles/"

#pragma endregion Texture Path end

// Texture Map
#pragma region Texture Map begin

#define Texture_Map_Intro "Texture map intro"
#define Texture_Map_Menu "Texture map menu"
#define Texture_Map_Player "Texture map player"
#define Texture_Map_Map "Texture map map"
#define Texture_Map_Collectibles "Texture map collectibles"
#define Texture_Map_Drone "Texture map drone"
#define Texture_Map_Beginning "Texture map beginning"
#define Texture_Map_TunnelBegin "Texture map tunnelbegin"
#define Texture_Map_TunnelBoucle "Texture map tunnelboucle"
#define Texture_Map_TunnelTransition "Texture map tunneltransition"

#pragma endregion Texture Map end 

// texture Name

	// intro
#pragma region Texture Intro begin

#define Intro_Texture_LogoGA "LogoGA.png"

#pragma endregion Texture Intro end

	// menu
#pragma region Texture Menu begin



#pragma endregion Texture Menu end

	// player
#pragma region Texture player begin
#define Player_Texture_Bike_TheSwedge "player.png"
#define Player_Texture_BombFx_TS "bomb fx TS.png"
#define Player_Texture_TurboFx_TS "turbo fx TS.png"
#define Player_Texture_JumpFx_TS "jump fx TS.png"
#define Player_Texture_FireTurboFx_TS "fire turbo fx TS.png"

#define Player_texture_TeckFreaks "tech freaks.png"
#define Player_Texture_BombFx_TF "bomb fx TF.png"
#define Player_Texture_TurboFx_TF "turbo fx TF.png"
#define Player_Texture_JumpFx_TF "jump fx TF.png"
#define Player_Texture_FireTurboFx_TF "fire turbo fx TF.png"

#define Player_Texture_SlideFX "slide fx.png"
#define Player_Texture_GrapnelFx "grapnel fx.png"
#define Player_Texture_Bomb "bomb.png"
#define Player_Texture_Shield "shield.png"
#define Player_Texture_Grapnel "grapnel.png"
#define Player_Texture_Repulse "repulse.png"

#pragma endregion Texture player end

	// map
#pragma region Texture Map begin

#define Map_Texture_TileSet "Tileset.png"
#define Map_Texture_AnimatedTile "Tile anim.png"
#define Map_Texture_TrapTileset "Traps.png"
#define Map_Texture_Drone "Drone.png"
#define Map_Texture_Drone_Attack_Prepa "drone attack prepa.png"
#define Map_Texture_Drone_Attack "drone attack.png"
#define Map_Texture_Drone_Attack_Load "drone attack load.png"
#define Map_Texture_Metro "metro.png"

	// aucun rapport
#define Map_Texture_Beginning "BeginAnim.png"
#define Map_Texture_TunnelBegin "TunnelBegin.png"
#define Map_Texture_TunnelBoucle "TunnelBoucle.png"
#define Map_Texture_TunnelTransition "TunnelTransition.png"
#define Map_Texture_Symbole "symbole.png"
#define Map_Texture_Winner "winner.png"
#define Map_Texture_EndGame "endGame.png"
#define Map_Texture_PressStart "press start.png"

#pragma endregion Texture Map end

	// Collectibles
#pragma region Texture Collectibles begin

#define Collectible_Texture_MysteryBox "Mystery box.png"
#define Collectible_Texture_NitroCollectible "nitro collectible.png"

#pragma endregion Texture Collectibles end

#define Options_File "../Resources/Options/option dossier.png"

#pragma endregion Texture Manager end

//////////////////////////////////////////////////////         SOUND MANAGER         //////////////////////////////////////////////////////

#pragma region Sound Manager begin

// Sound Path
#pragma region Sound Path begin

#pragma endregion Sound Path end

// Sound Map
#pragma region Sound Map begin

#pragma endregion Sound Map end

// Sound Name 


#pragma endregion Sound Manager end

//////////////////////////////////////////////////////         FONT MANAGER         //////////////////////////////////////////////////////

#pragma region Font Manager begin

// PATH
#define Font_Path "../Resources/Fonts/"

// FILE NAME
#define Font_Arial "arial.ttf"

#pragma endregion Font Manager end

//////////////////////////////////////////////////////         PLAYER         //////////////////////////////////////////////////////

#define GRAVITY_FACTOR 360
#define GRAVITY_ACCEL_FACTOR 400

#define JUMP_FORCE 2000

#define MAX_SPEED 640 * 1.5
#define SPEED_UP 320
#define SPEED_DOWN SPEED_UP * 2

#define CHARGE_FOR_TURBO_SKILL 10
#define TURBO_TIME 3

#pragma region Animation begin

#define ANIM_TIME 0.1

#define IDLE_FRAME_Y 0
#define JUMP_FRAME_Y 1
#define SLIDE_FRAME_Y 2
#define BRAKE_FRAME_Y 3
#define TRAP_FRAME_Y 4
#define GROUND_TRAP_FRAME_Y 5
#define BOMB_FRAME_Y 6
#define GRAPNEL_FRAME_Y 7
#define TURBO_FRAME_Y 8
#define JUMP_TURBO_FRAME_Y 9
#define SLIDE_TURBO_FRAME_Y 10

#pragma endregion Animation end

#pragma region Fx begin


#pragma endregion Fx end