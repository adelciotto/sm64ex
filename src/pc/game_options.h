#ifndef _GAME_OPTIONS_H
#define _GAME_OPTIONS_H

#include <stdbool.h>

struct GameOptions {
    bool SpinningTripleJump;
    bool DiveHop;
    bool TwirlAttack;
    bool NewMoveset;
};

extern struct GameOptions gameOptions;

#endif // _CHEATS_H
