#include "Sprite.h"
#include "graphics.h"
#include "globals.h"
Sprite::Sprite()
{
}

Sprite::Sprite(Graphics& graphics, std::string &filepath, int sourceX, int sourceY, int width, int height, float posX, float posY)
{
	this->_x = posX;
	this->_y = posY;
	this->_sourceRect.x = sourceX;
	this->_sourceRect.y = sourceY;
	this->_sourceRect.h = height;
	this->_sourceRect.w = width;

	this->_spriteSheet = SDL_CreateTextureFromSurface(graphics.getRenderer(), graphics.loadImage(filepath));
	if (this->_spriteSheet == NULL)
	{
		printf("\nError: Unable to load image\n");
	}
}

Sprite::~Sprite()
{
}

void Sprite::draw(Graphics &graphics, int x, int y) {
	SDL_Rect destinationRectangle = { x, y, this->_sourceRect.w * globals::SPRITE_SCALE, this->_sourceRect.h * globals::SPRITE_SCALE};
	graphics.blitSurface(this->_spriteSheet, &this->_sourceRect, &destinationRectangle);
}

void Sprite::update() {

}