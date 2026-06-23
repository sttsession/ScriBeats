#include "States/ScriBeats.hpp"

void initScriBeats(void) {
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        printError("initScriBeats", "Couldn't init SDL3", true);
        return;
    }

    const int w = scriConfigState.windowWidth;
    const int h = scriConfigState.windowHeight;

    sdl3state.window = SDL_CreateWindow("ScriBeats", w, h, SDL_WINDOW_RESIZABLE);

    if (!sdl3state.window) {
        printError("initScriBeats", "Couldn't create SDL3 window", true);
        return;
    }

    sdl3state.renderer = SDL_CreateRenderer(sdl3state.window, NULL);

    if (!sdl3state.renderer) {
        printError("initScriBeats", "Couldn't create SDL3 renderer", true);
        return;
    }

    SDL_SetRenderLogicalPresentation(sdl3state.renderer, RESOLUTION_W, RESOLUTION_H, SDL_LOGICAL_PRESENTATION_LETTERBOX);

    scriBeatsRunning = true;
}

int main(void) {
    initScriBeats();

    freeScriBeats();
    return EXIT_SUCCESS;
}
