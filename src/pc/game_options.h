#ifndef _GAME_OPTIONS_H
#define _GAME_OPTIONS_H

#include <stdbool.h>

struct GameOptions {
    bool SpinningTripleJump;
    bool DiveHop;
    bool TwirlJump;
};

extern struct GameOptions gameOptions;

#endif // _CHEATS_H
