#include "Graphics.h"
#include"Control.h"
#include"Game.h"
#include"fire.h"
#pragma once

class PlayerIcon
{
public:
	PlayerIcon(Graphics&gfx,int GetX,int GetY, int GetColour, int GetPlayerNum );
	void DrawBox(Graphics&gfx);
private:
	int gb1 = 100;
	int gb2=100;
	int PlayerX;
	int PlayerY;
	int PlayerNum;
	int GetColour;
};

