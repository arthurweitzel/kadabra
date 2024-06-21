#include <raylib.h>

const int windowWidth = 1200;
const int windowHeight = 800;
const int heroSpeed = 5;

Texture2D flooringSpriteTexture = LoadTexture("sprites/tilesets/floors/flooring.png");


void render() {
  BeginDrawing();
  ClearBackground(WHITE);
  DrawTexture(flooringSpriteTexture, windowWidth/2, windowHeight/2, WHITE);
  EndDrawing();
}



int main() {
  InitWindow(windowWidth, windowHeight, "vampire");
  SetTargetFPS(120);
    //kinda my update function
    while(!WindowShouldClose()){
        render();
    }

}
