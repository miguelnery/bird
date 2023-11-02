#include "raylib.h"
#include "Window.h"

#define TARGET_FPS 60
#define TITLE "bunda kkkkk"
 
void initWindow() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, TITLE);
    SetTargetFPS(TARGET_FPS);
}

void manageWindow() {
    ClearBackground(RAYWHITE);
}