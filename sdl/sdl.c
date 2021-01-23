#include "sdl.h"

#include <stdio.h>

void create_window(window_type* window, renderer_type* renderer,
                const int SCREEN_WIDTH, const int SCREEN_HEIGHT)
{   
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		//Create window
		window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, 
                                   SDL_WINDOWPOS_UNDEFINED, 
                                   SCREEN_WIDTH, SCREEN_HEIGHT, 
                                   SDL_WINDOW_SHOWN);
		if(window == NULL)
		{
			printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError());
            return;
		}
		else
		{   
            renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
            SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
            SDL_RenderClear(renderer);
            SDL_RenderPresent(renderer);

			SDL_Delay(2000);
		}
    }
}

void destroy_window(SDL_Window* window, SDL_Renderer* renderer)
{
    SDL_DestroyRenderer(renderer);
    printf( "SDL_Renderer has been deleted\n");
    SDL_DestroyWindow(window);
    printf( "SDL_Window has been deleted\n");
    SDL_Quit();

    printf( "SDL_Quit has been invoked\n");
}