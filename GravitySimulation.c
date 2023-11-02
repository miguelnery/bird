#include "GravitySimulation.h"


int maxIndex = 0;

void addToGravitySimulation(Vector2* velocity) {
    if(maxIndex >= GRAVITY_SIMULATION_MAX_COUNT) { return; }
    gravitySimulated[maxIndex] = velocity;
    maxIndex++;
}

#define ACCELERATION 0.25f
void simulateGravity() {
    for(int i = 0; i < maxIndex; i++) {
        Vector2* velocity = gravitySimulated[i];
        velocity->y += ACCELERATION;
    }
}