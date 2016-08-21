#include <SDL.h>
#include "game.h"
#include "graphics.h"

/*	Game class
*	This class holds all the information for the main game loop
*/

Game::Game(){
	SDL_Init(SDL_INIT_EVERYTHING);
	this->gameLoop();
}

Game::~Game(){

}

void Game::gameLoop(){
	Graphics graphics;
	SDL_Event event;
}

void Game::draw(Graphics &graphics){

}

void Game::update(float elapsedtime) {


}
