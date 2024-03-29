
#include <head.h>
//#include <SDL2/SDL.h>
const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char **argv)
{
    int running = 1;
    SDL_Event event;
    
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow("Hello SDL World", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);
    if (NULL == window)
        exit (1);
    
    while (running)
        while(SDL_PollEvent(&event))
            if((SDL_QUIT == event.type) || (SDL_KEYDOWN == event.type && SDL_SCANCODE_ESCAPE == event.key.keysym.scancode))
                running = 0;
    
    SDL_DestroyWindow(window);
    SDL_Quit();
    return (0);
}