#include "Jump.h"
#include "raylib.h"

#define JUMP_VELOCITY (Vector2){0.0f, -4.0f}

void detectJumpInput(Vector2* velocity) {
    if (IsKeyPressed(KEY_SPACE)) {
        *velocity = JUMP_VELOCITY;
    }
}