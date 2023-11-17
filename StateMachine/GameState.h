#ifndef GAME_STATE_H
#define GAME_STATE_H

typedef struct {
    void (*enter)();
    void (*run)();
} GameState;

#endif