#include "PlayerIcon.h"
#include "Graphics.h"
#include "Control.h"


PlayerIcon::PlayerIcon(Graphics&gfx,int GetX,int GetY,int Colour,int GetPlayerNum)
{
	PlayerX = GetX;
	PlayerY = GetY;
	GetColour = Colour;
	PlayerNum = GetPlayerNum;
}

void PlayerIcon::DrawBox(Graphics&gfx)
{
gfx.PutPixel(-5 + PlayerX, -5 + PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(-5 + PlayerX, -4 + PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(-5 + PlayerX, -3 + PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(-4 + PlayerX, -5 + PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(-3 + PlayerX, -5 + PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(-5 + PlayerX, 5 +  PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(-5 + PlayerX, 4 +  PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(-5 + PlayerX, 3 +  PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(-4 + PlayerX, 5 +  PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(-3 + PlayerX, 5 +  PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(5 +  PlayerX, -5 + PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(5 +  PlayerX, -4 + PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(5 +  PlayerX, -3 + PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(4 +  PlayerX, -5 + PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(3 +  PlayerX, -5 + PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(5 +  PlayerX, 5 +  PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(5 +  PlayerX, 4 +  PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(5 +  PlayerX, 3 +  PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(4 +  PlayerX, 5 +  PlayerY, GetColour, gb1, gb2);
gfx.PutPixel(3 +  PlayerX, 5 +  PlayerY, GetColour, gb1, gb2);
Control::Control(Keyboard &wnd, int PlayerLocX, int PlayerLocY, int GrabPlayerNumber);
}
