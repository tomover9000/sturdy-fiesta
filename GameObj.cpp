#include "headers/GameObj.h"

GameObj::GameObj(int width, int height, int x, int y, std::string color, SDL_Renderer* renderer) {
    obj.w = width;
    obj.h = height;
    obj.x = x;
    obj.y = y;
    this->color = color;
    this->renderer = renderer;
}

void GameObj::displayObj() {
    SDL_SetRenderDrawColor( renderer, 0, 0, 255, 255 );
    SDL_RenderFillRect(renderer, &obj);
    SDL_RenderPresent(renderer);
}
