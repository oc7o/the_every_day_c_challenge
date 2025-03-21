#include <SDL2/SDL.h>
#include <stdio.h>


int main (int argc, char *argv[]) {
  if (SDL_Init(SDL_INIT_VIDEO) != 0) {
    printf("SDL Initialization Error: %s\n", SDL_GetError());
    return 1;
  }

  SDL_Window *window = SDL_CreateWindow("SDL Window",
                                        SDL_WINDOWPOS_CENTERED,
                                        SDL_WIMDOWPOS_CENTERED,
                                        800, 600,
                                        SDL_WINDOW_SHOWN);

  if (!window) {
    printf("Window Creation Error: %s\n", SDL_GetError());
    SDL_Quit();
    return 1;
  }

  // SDL_Renderer *renderer = 

  // Idee: Grafische Benutzeroberfläche, wie ein Spiel?
  // TODO: Makefile für Config : Wie funktionieren Makefiles?
}
