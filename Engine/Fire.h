#include "Graphics.h"

class Fire
{
public:
	Fire();
	void GetDeets(int GetLocX, int GetLocY, int GetPlayerNum);
	void Shoot(Graphics&gfx);
private:

	int GetPosX;
	int GetPosY;
	int bullet;
	int DelayCount;
	int shotFiredX=0;
	int shotFiredY=0;
};
