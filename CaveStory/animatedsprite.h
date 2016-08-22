#pragma once
#include "sprite.h"
#include "globals.h"
#include <map>
#include <vector>
#include <string>
class Graphics;

class Animatedsprite :
	Sprite
{
public:
	Animatedsprite();
	Animatedsprite(Graphics &graphics, const std::string &filepath, int sourceX, int sourceY, int width, int height, float posX, float posY, float timeToUpdate);
	~Animatedsprite();
	/*	void playAnimation
	*	Plays the animation provided if it's not already playing 
	*/
	void playAnimation(std::string animation, bool once = false);
	/*	void update
	*	Updates the animated sprite (timer)
	*/
	void update(int elapsedTime);

	/*	void draw
	*	Draws the sprite to the screen
	*/
	void draw(Graphics &graphics, int x , int y);

	/*	virtual void setupAnimations
	*	A required function that sets up all animations for a sprite 
	*/
	virtual void setupAnimations();
private:
	std::map<std::string, std::vector<SDL_Rect> > _animations;
};

