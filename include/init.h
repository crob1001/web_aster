bool init(void *vgame) {
    gameState* game = vgame;

    game->window = NULL;
    game->renderer = NULL;

    game->spriteVel = (SDL_Point){0,0};
    game->spriteSize = 64;
    game->sprite = (SDL_Rect){0, 0, game->spriteSize, game->spriteSize};
    game->winWidth = 640;
    game->winHeight = 480;


    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        return false;
    }

    SDL_CreateWindowAndRenderer(game->winWidth, game->winHeight, 0, &game->window, &game->renderer);
    if (game->window == NULL | game->renderer == NULL) {
        return false;
    } 

    return true;
}
