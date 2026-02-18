#pragma once
#include <raylib.h>
#include <raymath.h>

namespace GameConstant {
    // time interval for each game tick in seconds
    inline constexpr float GAMETICK = 0.15F;
}


// gamerule constansts
namespace GameRules {
    // how much point awarded for collecting apples
    inline constexpr int APPLE_POINT = -3;

    // how much point awarded for collecting a mouse
    inline constexpr int MOUSE_POINT = 1;

    // how much point awarded for collecting a frog
    inline constexpr int FROG_POINT = 2;

    // initial snake size
    inline constexpr int INITIAL_SNAKE_SIZE = 2;

    inline constexpr int MAX_FOOD_ON_LEVEL = 5;

    // move timers
    inline constexpr int FROG_MOVE_TIMER = 5;
    inline constexpr int MOUSE_MOVE_TIMER = 2;

    inline constexpr int MAX_SNAKE_LENGTH = 50;
}


// UI constants
namespace UI {
    
}