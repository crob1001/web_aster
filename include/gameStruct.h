typedef struct gameState {
    SDL_Window *window;
    SDL_Texture *texture;
    SDL_Renderer *renderer;
    SDL_Rect sprite;
    SDL_Point spriteVel;
    short unsigned int spriteSize;
    short unsigned int winWidth; 
    short unsigned int winHeight;
} gameState;
