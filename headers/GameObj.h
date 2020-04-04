#include <string>
#include <SDL2/SDL.h>


// Folosim asta ca parinte peste toate obiectele
class GameObj {
    protected :
        std::string color;
        SDL_Renderer* renderer;
    public :
        GameObj(std::string color, SDL_Renderer*);
        void display();
        void update();
        void processInput(SDL_Event*);
        ~GameObj() {};
};