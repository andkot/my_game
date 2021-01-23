#include <SDL2/SDL.h>

typedef SDL_Window window_type;
typedef SDL_Renderer renderer_type;

void create_window(window_type* window, renderer_type* renderer,
                       const int SCREEN_WIDTH, const int SCREEN_HEIGHT);

void destroy_window(SDL_Window* window, SDL_Renderer* renderer);