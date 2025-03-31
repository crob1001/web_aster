void draw(void* vgame) {
    gameState* game = vgame;
    SDL_RenderCopy(game->renderer, game->texture, NULL, &game->sprite);
}

void drawRec() {

}
