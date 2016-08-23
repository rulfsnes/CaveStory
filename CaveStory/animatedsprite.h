#pragma once
#include "sprite.h"
#include "globals.h"
#include <map>
#include <vector>
#include <string>

class Graphics;

class AnimatedSprite :
	Sprite
{
public:
	AnimatedSprite();
	AnimatedSprite(Graphics &graphics, const std::string &filePath, int sourceX, int sourceY, int width, int height,
		float posX, float posY, float timeToUpdate);
	~AnimatedSprite();
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
protected:
	double _timeToUpdate;
	bool _currentAnimationOnce;
	std::string _currentAnimation;

	void addAnimation(int frames, int x, int y, std::string name, int width, int height, Vector2 offset);

	void resetAnimation();

	void stopAnimation();

	void setVisible(bool visible);

	SDL_Rect _sourceRect;

	virtual void animationDone(std::string currentAnimation);
private:
	std::map<std::string, std::vector<SDL_Rect> > _animations;
	std::map<std::string, Vector2 > _offsets;

	int _frameIndex;
	double _timeElapsed;
	bool _visible;
};

