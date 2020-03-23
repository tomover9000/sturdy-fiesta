#include <string>
#include <SDL2/SDL.h>

class GameObj {
    private :
        SDL_Rect obj;
        std::string color;
        SDL_Renderer* renderer;
    public :
        GameObj(int width, int height, int x, int y, std::string color, SDL_Renderer*);
        void displayObj();
};