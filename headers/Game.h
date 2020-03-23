#pragma once
#ifndef GAME_H
#define GAME_H
#include <SDL2/SDL.h>

class Game{
public:
    Game(int windowWidth, int windowHeight, Uint32 flags);
    ~Game();

    void render();
    void processEvents();

    bool shouldExit(){
        return quit;
    }
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Event * event;

    bool quit = false;
};

#endif