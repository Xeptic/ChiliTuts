#include "Graphics.h"
#include"Control.h"
#include"Game.h"
#include"fire.h"
#pragma once

class PlayerIcon
{
public:
	PlayerIcon(int GetX, int GetY, int Colour, int GetPlayerNum);
	void DrawBox();

private:
	Graphics gfx;
	int gb1 = 100;
	int gb2=100;
	int PlayerX;
	int PlayerY;
	int PlayerNum;
	int GetColour;
};

