#include "BirdManager.h"
#include "GravitySimulation.h"
#include "Jump.h"
#include "raylib.h"
#include "raymath.h"

#define SIZE 115
#define SOURCE_RECT (Rectangle){0, 0, 525, 493}

Vector2 position = {0, 0};
Vector2 velocity = {0, 0};
Texture2D texture;
Rectangle birdRectangle = (Rectangle){0, 0, SIZE, SIZE};

void initBird(float x, float y) {
    position = (Vector2){x, y};
    addToGravitySimulation(&velocity);
    texture = LoadTexture("resources/bird.png");
}

void initBirdV(Vector2 initPosition) {
    initBird(initPosition.x, initPosition.y);
}

Rectangle getBirdRect() {
    return birdRectangle;
}

Rectangle centeredOriginRec(Rectangle);

void drawBird() {
    birdRectangle.x = position.x;
    birdRectangle.y = position.y;
    DrawRectanglePro(
        centeredOriginRec(birdRectangle),
        Vector2Zero(),
        0,
        MAROON
    );
    DrawTexturePro(
        texture,
        SOURCE_RECT,
        birdRectangle,
        (Vector2){birdRectangle.width/2, birdRectangle.height/2},
        -15,
        WHITE
    );
}

void manageBird() {
    detectJumpInput(&velocity);
    position = Vector2Add(position, velocity);
    drawBird();
}

Rectangle centeredOriginRec(Rectangle rec) {
    return (Rectangle) { 
        rec.x - (rec.width / 2), 
        rec.y - (rec.height / 2),
        rec.width,
        rec.height 
    };
}