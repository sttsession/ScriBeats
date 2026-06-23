#pragma once

#include "ScriBeats.hpp"

struct ScriConfigState {
    int32_t windowWidth = 1280;
    int32_t windowHeight = 720;
    int32_t windowMaxFPS = 120;
};

inline ScriConfigState scriConfigState;

inline void printError(string function, string message, bool includeSDL3) {
    std::cout << "################" << std::endl;
    std::cout << function << "(): " << message << "!\n";
    if (includeSDL3) {
        std::cout << "SDL3: " << SDL_GetError() << "\n";
    }
    std::cout << "################" << std::endl;
}
