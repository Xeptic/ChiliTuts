/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
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
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	void DrawBox(int GetPlayerX, int GetPlayerY,int colour, int PlayerNumber);
	int SetBoundaryX(int GetLocX);
	int SetBoundaryY(int GetLocY);
	void Control(int PlayerLocX, int PlayerLocY, int GrabPlayerNumber);
	void Fire(int GetLocX,int GetLocY,int GetPlayerNum);
	//void Control2(int PlayerLocX, int PlayerLocY, int PlayerNumber);
	/********************************/
	/*  User Functions              */
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	int defaultX = 400;
	int defaultY = 400;
	int gb1 = 100;
	int gb2 = 100;
	int defaultX2 = 100;
	int defaultY2 = 100;
	int P1Colour = 0;
	int P2Colour = 255;
	int shotFiredX = 0;
	int shotFiredY = 0;

	

	/********************************/
	/*  User Variables              */
	/********************************/
};