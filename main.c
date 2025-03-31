#include <stdbool.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <emscripten.h>

#include "include/gameStruct.h"
#include "include/rigidBody.h"
#include "include/init.h"
#include "include/update.h"
#include "include/draw.h"
#include "include/destroy.h"
#include "include/loadTextures.h"
#include "include/processEvents.h"


void main_loop(void *vgame) {
    gameState* game = vgame;
    processEvents(game);

    //somewhere_in_your_main_loop();

    SDL_SetRenderDrawColor(game->renderer, 0, 0, 0, 255);
    SDL_RenderClear(game->renderer);
    
    update(game);
    draw(game);    

    SDL_RenderPresent(game->renderer);
}

int main() {
    //gameState* game = (gameState*)malloc(sizeof(gameState)); 
   
    gameState game;

    init(&game);
    loadTextures(&game, "assets/texture.png");

    game.sprite.x = (game.winWidth - game.spriteSize) / 2;
    game.sprite.y = (game.winHeight - game.spriteSize) / 2;

    emscripten_set_main_loop_arg(main_loop, &game, -1, 1);

    destroy(&game);
    return EXIT_SUCCESS;
}
