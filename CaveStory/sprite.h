#pragma once
#include <SDL.h>
#include <string>
struct Graphics;
/* Sprite class 
*	Holds all information for individual sprites
*/
class Sprite
{
public:
	Sprite();
	Sprite(Graphics& graphics, std::string& filepath, int sourceX, int sourceY, int widht, int height,
		float posX, float posY);
	virtual ~Sprite();
	virtual void update();
	void draw(Graphics &graphics, int x, int y);
private:
	SDL_Rect _sourceRect;
	SDL_Texture* _spriteSheet;
	float _x, _y;
};

