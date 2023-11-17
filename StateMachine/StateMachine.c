#include "StateMachine.h"
#include "GameState.h"

State currentState;

void initWithState(GameState state) {
    currentState = state;
    enterState(state);
}

void runStateMachine() {
    currentState.run();
}

void enterState(GameState state) {
    state.enter();
}