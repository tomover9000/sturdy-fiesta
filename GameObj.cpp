#include "headers/GameObj.h"

GameObj::GameObj(std::string color, SDL_Renderer* renderer) {
    this->color = color;
    this->renderer = renderer;
}
