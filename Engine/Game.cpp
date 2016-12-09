/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"
#include "TestHead.h"
#include "PlayerIcon.h"

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd)
{
}
void Game::Go()
{
	gfx.BeginFrame();
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}



void Game::UpdateModel()
{
	PlayerIcon::PlayerIcon(Graphics&gfx, int GetX, int GetY, int GetColour, int GetPlayerNum);
}


void Game::ComposeFrame()
{

}


void Game::Fire(int GetLocX, int GetLocY, int GetPlayerNum)
{
	int GetPosX = GetLocX;
	int GetPosY = GetLocY;
	int bullet = 0;
	int DelayCount = 0;
	//if (GetPlayerNum = 1) {

	for (int counter = 0; GetPosX+60 < gfx.ScreenWidth && GetPosY+60 < gfx.ScreenHeight && counter < 100; counter+10) {
		int AimX = GetPosX;
		int AimY = GetPosY;
		
		DelayCount + 1;

		if (int counter = 0) { gfx.PutPixel(AimX, AimY, 255, 255, 255); }
		if (int counter = 10) { gfx.PutPixel(AimX+10,AimY+10, 255, 255, 255); }
		if (int counter = 20) { gfx.PutPixel(AimX+20,AimY+20, 255, 255, 255); }
		if (int counter = 30) { gfx.PutPixel(AimX+30,AimY+30, 255, 255, 255); }
		if (int counter = 40) { gfx.PutPixel(AimX+40,AimY+40, 255, 255, 255); }
		if (int counter = 50) { gfx.PutPixel(AimX+50,AimY+50, 255, 255, 255); }
		if (int counter = 60) { gfx.PutPixel(AimX+60,AimY+60, 255, 255, 255); }
			
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
