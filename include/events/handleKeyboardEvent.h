#include <SDL2/SDL.h>

void handleKeyboardEvent(SDL_Event *event, void *vgame){
    gameState* game = vgame;
    SDL_Keycode key = event->key.keysym.sym;
    
    if (event->key.type == SDL_KEYDOWN) {
        if (key == SDLK_LEFT || key == SDLK_RIGHT) {
            game->spriteVel.x = key == SDLK_LEFT ? -1 : 1;
        }
        if (key == SDLK_UP || key == SDLK_DOWN) {
            game->spriteVel.y = key == SDLK_UP ? -1 : 1;
        }
    }
    if (event->key.type == SDL_KEYUP) {
        game->spriteVel.x = 0;
        game->spriteVel.y = 0;
    }
}
