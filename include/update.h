void update(void* vgame) {
    gameState* game = vgame;

    game->sprite.x += game->spriteVel.x;
    game->sprite.y += game->spriteVel.y;
}

