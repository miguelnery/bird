#include "BirdManager.h"
#include "GravitySimulation.h"
#include "Jump.h"
#include "raylib.h"
#include "raymath.h"

Vector2 position = {0, 0};
Vector2 velocity = {0, 0};

void initBird(float x, float y) {
    position = (Vector2){x, y};
    addToGravitySimulation(&velocity);
}

void manageBird() {
    detectJumpInput(&velocity);
    position = Vector2Add(position, velocity);
    DrawCircleV(position, 15, MAGENTA);
}

