#include <stdio.h>
#include "GravitySimulation.h"
#include "Jump.h"
#include "raylib.h"
#include "raymath.h"
#include "Window.h"

Vector2 ballPosition = {(float)SCREEN_WIDTH / 2, (float)SCREEN_HEIGHT / 2};
Vector2 ballVelocity = {0.0f, 0.0f};

int main() {
    initWindow();
    addToGravitySimulation(&ballVelocity); 
    while(!WindowShouldClose()) {
        detectJumpInput(&ballVelocity);
        if(ballPosition.y <= SCREEN_HEIGHT) {
            ballPosition = Vector2Add(ballPosition, ballVelocity);
            simulateGravity();
        }
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawCircleV(ballPosition, 15, MAROON);

        EndDrawing();
    }
    CloseWindow();

    return 0;
}