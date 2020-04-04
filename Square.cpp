#include "headers/Square.h"

Square::Square(int size, int x, int y, std::string color, SDL_Renderer* renderer) : GameObj(color, renderer) {
    this->rect.x = x;
    this->rect.y = y;
    this->rect.h = this->rect.w = size;
}

void Square::display() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
    SDL_RenderFillRect(renderer, &rect);
    SDL_RenderPresent(renderer); 
}

void Square::processInput(SDL_Event* events) {

}

