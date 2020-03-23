#include <SDL2/SDL.h>
#include <stdio.h>
#include "headers/GameObj.h"

//Screen dimension constants
const int SCREEN_WIDTH = 700;
const int SCREEN_HEIGHT = 700;
const Uint8 *state = SDL_GetKeyboardState(NULL);

int main(int argc, char* argv[])
{
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Event event;
    GameObj obj1(50, 50, 50, 50, "blue", renderer);

    // Initialize SDL.
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
            return 1;

    // Create the window where we will draw.
    window = SDL_CreateWindow("SDL_RenderClear", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 700, 700, 0);

    // We must call SDL_CreateRenderer in order for draw calls to affect this window.
    renderer = SDL_CreateRenderer(window, -1, 0);

    // Select the color for drawing. It is set to black here.
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

    obj1.displayObj();

    // Clear the entire screen to our selected color.
    SDL_RenderClear(renderer);

    // SDL_Rect r;
    // r.x = 50;
    // r.y = 50;
    // r.w = 50;
    // r.h = 50;

    // // Set render color to blue ( rect will be rendered in this color )
    // SDL_SetRenderDrawColor( renderer, 0, 0, 255, 255 );

    // // Render rect
    // SDL_RenderFillRect( renderer, &r );

    // // Render the rect to the screen
    // SDL_RenderPresent(renderer);

    // bool quit=false;    
    // float r_xvel = 0, r_yvel = 0;
    // float x = 50, y = 50;
    // float increment = 0.1;

    // while( SDL_PollEvent( &event )  || !quit)
    // {
    //     switch( event.type ){
    //         /* Look for a keypress */
    //         case SDL_KEYDOWN:
    //             /* Check the SDLKey values and move change the coords */
    //             switch( event.key.keysym.sym ){
    //                 case SDLK_LEFT:
    //                     r_xvel = -increment;
    //                     break;
    //                 case SDLK_RIGHT:
    //                     r_xvel = increment;
    //                     break;
    //                 case SDLK_UP:
    //                     r_yvel = -increment;
    //                     break;
    //                 case SDLK_DOWN:
    //                     r_yvel = increment;
    //                     break;
    //                 //reset square
    //                 case SDLK_r:
    //                     x = 50;
    //                     y = 50;
    //                 default:
    //                     break;
    //             }
    //             break;
                

    //         /* We must also use the SDL_KEYUP events to zero the x */
    //         /* and y velocity variables. But we must also be       */
    //         /* careful not to zero the velocities when we shouldn't*/
    //         case SDL_KEYUP:
    //             switch( event.key.keysym.sym ){
    //                 case SDLK_LEFT:
    //                     /* We check to make sure the alien is moving */
    //                     /* to the left. If it is then we zero the    */
    //                     /* velocity. If the alien is moving to the   */
    //                     /* right then the right key is still press   */
    //                     /* so we don't tocuh the velocity            */
    //                     if(r_xvel < 0)
    //                         r_xvel = 0;
    //                     break;
    //                 case SDLK_RIGHT:
    //                     if( r_xvel > 0 )
    //                         r_xvel = 0;
    //                     break;
    //                 case SDLK_UP:
    //                     if( r_yvel < 0 )
    //                         r_yvel = 0;
    //                     break;
    //                 case SDLK_DOWN:
    //                     if( r_yvel > 0 )
    //                         r_yvel = 0;
    //                     break;
    //                 default:
    //                     break;
    //             }
    //             break; 
            
    //         case SDL_QUIT:
    //             quit=true;
    //             break;
    //     }

    //     x += r_xvel;
    //     y += r_yvel;

    //     r.x = int(x);
    //     r.y = int(y);

    //     SDL_SetRenderDrawColor( renderer, 0, 0, 0, 255 );
    //     SDL_RenderClear(renderer);
    //     SDL_SetRenderDrawColor( renderer, 0, 0, 255, 255 );
    //     SDL_RenderFillRect( renderer, &r );
    //     SDL_RenderPresent(renderer);
    // }

    // Always be sure to clean up
    SDL_Delay(5000);
    SDL_Quit();
    return 0;
}
