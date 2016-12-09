#pragma once
#include "Keyboard.h"
#include "MainWindow.h"
class Control
{
public:
	Control(int GetControlX,int GetControlY,int PlayerNum);
	void KeyPresses();
	int SetBoundaryX(int PosX);
	int SetBoundaryY(int PosY);
private:
	int CoPlayerX;
	int CoPlayerY;
	int CoPlayerNum;
	Keyboard wnd;
};

