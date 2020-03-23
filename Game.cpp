#include "headers/Game.h"

Game::Game(int windowWidth, int windowHeight, Uint32 flags) {
    // Initialize SDL.
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
            return;

    // Create the window where we will draw.
    window = SDL_CreateWindow("Platformer", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, windowWidth, windowHeight, flags);

    // We must call SDL_CreateRenderer in order for draw calls to affect this window.
    renderer = SDL_CreateRenderer(window, -1, 0);
    // Select the color for drawing. It is set to black here.
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

    // Clear the entire screen to our selected color.
    SDL_RenderClear(renderer);
}

void Game::render() {
    SDL_SetRenderDrawColor( renderer, 0, 0, 0, 255 );
    SDL_RenderClear(renderer);
}

void Game::processEvents() {
    while(SDL_PollEvent( &event )){
        switch(event.type){
            case SDL_QUIT:
                quit = true;
        }
    }

}

void Game::CloseApp(){
    SDL_Quit();
}

Game::~Game() {
    
}