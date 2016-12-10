#include "Control.h"
#include "Keyboard.h"
#include "Graphics.h"
#include "Fire.h"



Control::Control()
{

}

void Control::GetDeets(int PlayerLocX, int PlayerLocY, int GrabPlayerNumber)
{

	int CoPlayerX = PlayerLocX;
	int CoPlayerY = PlayerLocY;
	int CoPlayerNum = GrabPlayerNumber;
}


void Control::KeyPress(Keyboard&kbd)
{

	{
		if (CoPlayerNum = 1)
		{
			if (KeyOb.KeyIsPressed(VK_UP)) {
				CoPlayerY = CoPlayerY - 1;
			}
			if (KeyOb.KeyIsPressed(VK_DOWN)) {
				CoPlayerY = CoPlayerY + 1;
			}
			if (KeyOb.KeyIsPressed(VK_LEFT)) {
				CoPlayerX = CoPlayerX - 1;
			}
			if (KeyOb.KeyIsPressed(VK_RIGHT)) {
				CoPlayerX = CoPlayerX + 1;
			}
			CoPlayerX = SetBoundaryX(CoPlayerX);
			CoPlayerX = SetBoundaryY(CoPlayerX);
			if (KeyOb.KeyIsPressed('I')) {
				FireOb.GetDeets(CoPlayerX, CoPlayerY, 1);
			}
		}
		if (CoPlayerNum = 2) {
			if (KeyOb.KeyIsPressed(0x57)) {
				CoPlayerY = CoPlayerY - 1;
			}
			if (KeyOb.KeyIsPressed(0x53)) {
				CoPlayerY = CoPlayerY + 1;
			}
			if (KeyOb.KeyIsPressed(0x41)) {
				CoPlayerX = CoPlayerX - 1;
			}
			if (KeyOb.KeyIsPressed(0x44)) {
				CoPlayerX = CoPlayerX + 1;
			}
			CoPlayerX = SetBoundaryX(CoPlayerX);
			CoPlayerY = SetBoundaryY(CoPlayerY);
			if (KeyOb.KeyIsPressed('T')) {
				FireOb.GetDeets(CoPlayerX, CoPlayerY, 2);
			}
		}
	}
}



int Control::SetBoundaryX(int GetLocX)
{
	int right = GetLocX + 5;
	int left = GetLocX - 5;
	if (right >= Graphics::ScreenWidth)
	{
		return Graphics::ScreenWidth - 6;
	}
	else if (left < 0)
	{
		return 5;
	}
	else {
		return GetLocX;
	}
}
int Control::SetBoundaryY(int GetLocY)
{

	int Up = GetLocY - 5;
	int down = GetLocY + 5;
	if (Up <= 0) {
		return 5;
	}
	else if (down >= Graphics::ScreenHeight)
	{
		return Graphics::ScreenHeight - 6;
	}
	else {
		return GetLocY;
	}
}
