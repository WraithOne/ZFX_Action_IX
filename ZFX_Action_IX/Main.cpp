////////////////////////////////////////////////////////////
///
/// ZFX Action IX
/// Theme: Digging / Mob
///
/// Sunday, 2015-12-27 19:00 til Wendsday 2015-12-30, 19:00
///
/// Entry by WraithOne
///
////////////////////////////////////////////////////////////

// Includes
#include "Includes.h"

SDL_Window* sdl_Window;
SDL_Renderer* sdl_Renderer;
SDL_Event sdl_Event;

int main(int argc, char* args[])
{
	//Start SDL
	SDL_Init( SDL_INIT_EVERYTHING );

	// Create Window and Renderer
	SDL_CreateWindowAndRenderer(800, 600, 0, &sdl_Window, &sdl_Renderer);

	while(1)
	{
		SDL_PollEvent(&sdl_Event);
		if (sdl_Event.type == SDL_QUIT)
		{
			break;
		}
	}

	//Quit SDL 
	SDL_Quit();
	return 0;
}