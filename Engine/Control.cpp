#include "Control.h"
#include "Keyboard.h"
#include "Graphics.h"
#include "Fire.h"



Control::Control(int PlayerLocX, int PlayerLocY, int GrabPlayerNumber)
{
	int CoPlayerX = PlayerLocX;
	int CoPlayerY= PlayerLocY;
	int CoPlayerNum= GrabPlayerNumber;
	{
		if (CoPlayerNum = 1)
		{
			if (wnd.KeyIsPressed(VK_UP)) {
				CoPlayerY = CoPlayerY - 1;
			}
			if (wnd.KeyIsPressed(VK_DOWN)) {
				CoPlayerY = CoPlayerY + 1;
			}
			if (wnd.KeyIsPressed(VK_LEFT)) {
				CoPlayerX = CoPlayerX - 1;
			}
			if (wnd.KeyIsPressed(VK_RIGHT)) {
				CoPlayerX = CoPlayerX + 1;
			}
			CoPlayerX = SetBoundaryX(CoPlayerX);
			CoPlayerX = SetBoundaryY(CoPlayerX);
			if (wnd.KeyIsPressed('I')) {
				Fire::Fire(CoPlayerX, CoPlayerY, 1);
			}
		}
		if (CoPlayerNum = 2) {
			if (wnd.KeyIsPressed(0x57)) {
				CoPlayerY = CoPlayerY - 1;
			}
			if (wnd.KeyIsPressed(0x53)) {
				CoPlayerY = CoPlayerY + 1;
			}
			if (wnd.KeyIsPressed(0x41)) {
				CoPlayerX = CoPlayerX - 1;
			}
			if (wnd.KeyIsPressed(0x44)) {
				CoPlayerX = CoPlayerX + 1;
			}
			CoPlayerX = SetBoundaryX(CoPlayerX);
			CoPlayerY = SetBoundaryY(CoPlayerY);
			if (wnd.KeyIsPressed('T')) {
				Fire::Fire(CoPlayerX, CoPlayerY, 2);
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
