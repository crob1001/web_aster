void loadTextures(void* vgame, char path[]) {
    gameState* game = vgame;
    SDL_Surface *surface = IMG_Load(path);
    if (!surface) {
        printf("%s\n", IMG_GetError());
    }
    SDL_SetColorKey(surface, SDL_TRUE, SDL_MapRGB(surface->format, 0x75, 0xFF, 0xFF));
    game->texture = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);
}

