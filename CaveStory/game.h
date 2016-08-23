#pragma once
#include "animatedsprite.h"
class Graphics;

class Game 
{
public:
	Game ();
	~Game ();

private:
	void gameLoop();
	void draw(Graphics &graphics);
	void update(float elapsedtime);
	AnimatedSprite _player;
};
