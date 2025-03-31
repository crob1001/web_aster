//#include <SDL2/SDL2.h>

#include "handleKeyboardEvent.h"
#include "handleMouseEvent.h"

void processEvents(void *vgame) {
    SDL_Event event;
    
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_KEYDOWN:  
            case SDL_KEYUP:
            case SDL_TEXTEDITING:
            case SDL_TEXTINPUT:
            case SDL_KEYMAPCHANGED:
                handleKeyboardEvent(&event, vgame);
                break;

            case SDL_MOUSEMOTION:
                handleMouseEvent(&event, vgame);
                break;

            default:
                printf("there has been an error");
                break;
        }
    }
}
