#ifndef WINDOW_H
#define WINDOW_H
#include "raylib.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 450
#define SCREEN_SIZE (Vector2){SCREEN_WIDTH, SCREEN_HEIGHT}
#define SCREEN_CENTER (Vector2) {SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2}

void initWindow();
void manageWindow();

#endif