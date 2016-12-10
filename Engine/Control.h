#pragma once
#include "Keyboard.h"
#include "MainWindow.h"
class Control
{
public:
	Control();
	void KeyPress(Keyboard& kbd);
	void GetDeets(int GetControlX, int GetControlY, int PlayerNum);
	int SetBoundaryX(int PosX);
	int SetBoundaryY(int PosY);
private:
	int CoPlayerX;
	int CoPlayerY;
	int CoPlayerNum;
	Keyboard KeyOb;
	Fire FireOb;
};

