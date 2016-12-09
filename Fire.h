#include "Graphics.h"
class Fire
{
public:
	Fire(int GetLocX, int GetLocY, int GetPlayerNum);
	~Fire();
private:
	Graphics&gfx;
	int GetPosX;
	int GetPosY;
	int bullet;
	int DelayCount;
	int shotFiredX=0;
	int shotFiredY=0;
};
