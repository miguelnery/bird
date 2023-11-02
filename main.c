#include <stdio.h>
#include "BirdManager.h"
#include "GravitySimulation.h"
#include "raylib.h"
#include "Window.h"

int main() {
    initWindow();
    initBird((float)SCREEN_WIDTH / 2, (float)SCREEN_HEIGHT / 2);
    while(!WindowShouldClose()) {
        simulateGravity();
        BeginDrawing();
        manageWindow();
        manageBird();
        EndDrawing();
    }
    CloseWindow();

    return 0;
}