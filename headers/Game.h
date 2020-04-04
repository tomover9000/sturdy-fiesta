#pragma once
#ifndef GAME_H
#define GAME_H
#include <SDL2/SDL.h>
#include <stdio.h>
#include <vector>
#include "Square.h"

class Game{
public:
    Game(int windowWidth, int windowHeight, Uint32 flags);
    ~Game();

    void render();
    void processEvents();
    void addActor();

    bool shouldExit(){
        return quit;
    }

    void CloseApp();
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Event event;

    std::vector<Square*> actors;

    bool quit = false;
};

#endif