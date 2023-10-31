#include "GravitySimulation.h"

static int maxIndex = 0;

void addToGravitySimulation(Vector2* object) {
    if(maxIndex >= GRAVITY_SIMULATION_MAX_COUNT) { return; }
    gravitySimulated[maxIndex] = object;
    maxIndex++;
}

void simulateGravity() {
    for(int i = 0; i < maxIndex; i++) {
        gravitySimulated[i]->y += gravityForce;
    }
}