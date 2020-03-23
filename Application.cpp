#include "headers/Game.h"


//Screen dimension constants
const int SCREEN_WIDTH = 700;
const int SCREEN_HEIGHT = 700;

int main(int argc, char* argv[]) {
    printf("Game started...\r\n");
    Game * game = new Game(700, 700, 0);
    game->addActor();

    while(!game->shouldExit()){
        game->render();
        game->processEvents();
    }

    /* Clean Up */
    game->CloseApp();
    return 0;
}
