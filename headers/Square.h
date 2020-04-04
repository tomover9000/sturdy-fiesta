#include "GameObj.h"

class Square: public GameObj {
    private :
        SDL_Rect rect;
    public : 
        Square(int size, int x, int y, std::string color, SDL_Renderer*);
        // override la metodele din GameObj
        void update();
        void display();
        void processInput(SDL_Event*);
};