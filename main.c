#include <stdio.h>
#include "ArrowKeys.h"
#include "GravitySimulation.h"
#include "raylib.h"
#include "Window.h"

Vector2 ballPosition = { (float)SCREEN_WIDTH / 2, (float)SCREEN_HEIGHT / 2 };

int main() {
    initWindow();
    addToGravitySimulation(&ballPosition);

    while(!WindowShouldClose()) {
        if(ballPosition.y <= SCREEN_HEIGHT) {
            simulateGravity();
        }
        ChangeVectorByArrowKeys(&ballPosition, 2.0f);
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawCircleV(ballPosition, 15, MAROON);

        EndDrawing();
    }
    CloseWindow();

    return 0;
}