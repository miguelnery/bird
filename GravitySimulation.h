#ifndef GRAVITY_SIMULATION_H
#define GRAVITY_SIMULATION_H

#include "raylib.h"

#define GRAVITY_SIMULATION_MAX_COUNT 5
#define GRAVITY_FORCE 1.75f
static Vector2* gravitySimulated[GRAVITY_SIMULATION_MAX_COUNT];

void addToGravitySimulation(Vector2*);
void simulateGravity();


#endif