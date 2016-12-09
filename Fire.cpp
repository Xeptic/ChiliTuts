#include "Fire.h"
#include "Graphics.h"


Fire::Fire(int GetLocX, int GetLocY, int GetPlayerNum)
	{
		
		GetPosX = GetLocX;
		GetPosY = GetLocY;
		bullet = 0;
		DelayCount = 0;
		//if (GetPlayerNum = 1) {

		for (int counter = 0; GetPosX + 60 < gfx.ScreenWidth && GetPosY + 60 < gfx.ScreenHeight && counter < 100; counter + 10) {
			int AimX = GetPosX;
			int AimY = GetPosY;

			DelayCount + 1;

			if (int counter = 0) { gfx.PutPixel(AimX, AimY, 255, 255, 255); }
			if (int counter = 10) { gfx.PutPixel(AimX + 10, AimY + 10, 255, 255, 255); }
			if (int counter = 20) { gfx.PutPixel(AimX + 20, AimY + 20, 255, 255, 255); }
			if (int counter = 30) { gfx.PutPixel(AimX + 30, AimY + 30, 255, 255, 255); }
			if (int counter = 40) { gfx.PutPixel(AimX + 40, AimY + 40, 255, 255, 255); }
			if (int counter = 50) { gfx.PutPixel(AimX + 50, AimY + 50, 255, 255, 255); }
			if (int counter = 60) { gfx.PutPixel(AimX + 60, AimY + 60, 255, 255, 255); }

			//how do i make X and Y into one value
			//maybe call anothert function
			shotFiredX = GetPosX;
			shotFiredY = GetPosY;
			GetPosX = GetPosX + 5;
			GetPosY = GetPosY + 5;
		}

		if (DelayCount = 61) {
			DelayCount = 0;

		}
	}


Fire::~Fire()
{
}
