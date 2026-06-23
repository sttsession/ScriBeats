#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <filesystem>

#include <SDL3/SDL.h>
#include <SDL3_mixer/SDL_mixer.h>

using string = std::string;
using path = std::filesystem::path;

#define RESOLUTION_W 1280
#define RESOLUTION_H 720

struct SDL3State {
    SDL_Event event;
    SDL_Window* window;
    SDL_Renderer* renderer;
};

inline SDL3State sdl3state;

struct MusicState {
    MIX_Mixer* mixer;
    MIX_Track* track;
    MIX_Audio* music;
};

inline MusicState musicState;

struct ScriBeatState {

};

inline ScriBeatState scriBeatState;

inline bool scriBeatsRunning = false;

inline void freeScriBeats(void) {
    if (sdl3state.window) { SDL_DestroyWindow(sdl3state.window); }
    if (sdl3state.renderer) { SDL_DestroyRenderer(sdl3state.renderer); }
    SDL_Quit();
}

#include "ScriConfig.hpp"
