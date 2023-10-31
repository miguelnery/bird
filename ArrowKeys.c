#include "ArrowKeys.h"

void ChangeVectorByArrowKeys(Vector2* targetVector, float increment) {
    if (IsKeyDown(KEY_RIGHT)) targetVector->x += 2.0f;
    if (IsKeyDown(KEY_LEFT)) targetVector->x -= 2.0f;
    if (IsKeyDown(KEY_UP)) targetVector->y -= 2.0f;
    if (IsKeyDown(KEY_DOWN)) targetVector->y += 2.0f;
}