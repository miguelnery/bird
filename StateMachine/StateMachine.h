#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H
#include "GameState.h"


// State getState();
void initWithState(GameState);
void runStateMachine();
void enterState(GameState);
#endif