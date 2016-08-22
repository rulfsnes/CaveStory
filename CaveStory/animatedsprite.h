#pragma once
#include "sprite.h"

class Graphics;

class Animatedsprite :
	Sprite
{
public:
	Animatedsprite();
	Animatedsprite(Graphics &graphics, const std::string &filepath, int sourceX, int sourceY, int width, int height, float posX, float posY, float timeToUpdate);
	~Animatedsprite();

	void playAnimation
private:
};

