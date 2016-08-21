#include <SDL.h>
#include "graphics.h"
#include <SDL_image.h>

/*
 *	Graphics class holds all graphic information for the game
*/

Graphics::Graphics() {
	SDL_CreateWindowAndRenderer(640, 480, 0, &this->_window,&this->_renderer);
	SDL_SetWindowTitle(this->_window, "Cavestory");
}

Graphics::~Graphics() {
	SDL_DestroyWindow(this->_window);
}

SDL_Surface* Graphics::loadImage(const std::string &filepath){
	if (this->_spriteSheets.count(filepath) == 0)
	{
		this->_spriteSheets[filepath] = IMG_Load(filepath.c_str());
	}
	return this->_spriteSheets[filepath];
}

void Graphics::blitSurface(SDL_Texture* texture,SDL_Rect* sourceRectange, SDL_Rect* destinationRectangle) {
	SDL_RenderCopy(this->_renderer, texture, sourceRectange, destinationRectangle);
}

void Graphics::flip() {
	SDL_RenderPresent(this->_renderer);
}

void Graphics::clear() {
	SDL_RenderClear(this->_renderer);
}

SDL_Renderer* Graphics::getRenderer() {
	return this->_renderer;
}