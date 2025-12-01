#include <raylib.h>

#include "AnalogClock.hpp"

int main()
{
    const int WINDOW_WIDTH = 600;
    const int WINDOW_HEIGHT = 600;
    const Color LIGHT_BLUE = { 225, 239, 240, 255 };

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Analog Clock");
    SetTargetFPS(15);

    AnalogClock clock(250, {300, 300});

    while (!WindowShouldClose())
    {
        clock.Update();
        BeginDrawing();
        ClearBackground(LIGHT_BLUE);
        clock.Draw();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}