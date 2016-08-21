#include <SDL.h>

#include "graphics.h"

/*
 Graphics class holds all graphic information for the game
*/

Graphics::Graphics() {
	SDL_CreateWindowAndRenderer(640, 480, 0, &this->_window,&this->_renderer);
}