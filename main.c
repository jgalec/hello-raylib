#include "raylib.h"

int main(void) {
    // Window dimensions
    const int screenWidth = 800;
    const int screenHeight = 450;

    // Initialize window
    InitWindow(screenWidth, screenHeight, "Hello World with Raylib!");

    // Set target frames per second
    SetTargetFPS(60);

    // Game loop
    while (!WindowShouldClose()) {
        // Drawing
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello World from Raylib!", 190, 200, 20, LIGHTGRAY);
        DrawCircle(screenWidth / 2, screenHeight / 2 - 50, 60, MAROON);
        EndDrawing();
    }

    // Close window and free resources
    CloseWindow();

    return 0;
}
