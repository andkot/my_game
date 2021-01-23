#include <stdio.h>
#include <SDL2/SDL.h>

#include "sdl/sdl.h"

// setting up screens sizes
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 960;

int main(int argc, char** args)
{	
	window_type* window = NULL;
	renderer_type* renderer = NULL;
	
	create_window(window, renderer, SCREEN_WIDTH, SCREEN_HEIGHT);
	destroy_window(window, renderer);
    
    return 0;
}