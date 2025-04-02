void handleMouseEvent(SDL_Event *event, void *vgame) {
    gameState* game = vgame;

    if (event->type == SDL_MOUSEMOTION) {
        game->sprite.x = event->motion.x;
        game->sprite.y = event->motion.y;
    }
}
