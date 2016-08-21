#ifndef GRAPHICS_H
#define GRAPHICS_H

 
/*	Graphics class 
*	Holds information for dealing with graphics
*/	
#include <map>
#include <string>


struct SDL_Window;
struct SDL_Renderer;

class Graphics
{
public:
	Graphics();
	~Graphics();
	/*	SDL_Surface* loadImage
	*	Loads an image into the _spriteSheets map if it does not exist
	*/
	SDL_Surface* loadImage(const std::string &filepath);
	/*	 void blitSurface
	*	Draws a texture to a certain part of the screen
	*/
	void blitSurface(SDL_Texture* source, SDL_Rect* sourceRectangle, SDL_Rect* destinationRectangle);
	
	/*	void flip
	*	renders everything to the screen
	*/
	void flip();

	/*	void clear
	*	Clears the screen
	*/
	void clear();


	/*	SDL_Renderer* getRenderer
	*	Returns the renderer
	*/
	SDL_Renderer* getRenderer();
private:
	SDL_Window* _window;
	SDL_Renderer* _renderer;
	std::map<std::string, SDL_Surface*> _spriteSheets;
};


#endif // !GRAPHICS_H