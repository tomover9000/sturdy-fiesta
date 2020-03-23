#include "headers/Game.h"
#include <stdio.h>

//Screen dimension constants
const int SCREEN_WIDTH = 700;
const int SCREEN_HEIGHT = 700;

int main(int argc, char* argv[]) {
    Game * game = new Game(700, 700, 0);

    while(!game->shouldExit()){
        game->render();
        game->processEvents();
    }

    /* Clean Up */
    delete game;
    return 0;
}
