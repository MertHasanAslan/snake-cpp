#pragma once
#include <raylib.h>
#include <raymath.h>

namespace GameConstant {
    // time interval for each game tick in seconds
    inline constexpr float GAMETICK = 0.15f;
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
    // label font size
    inline constexpr int LABLE_FONT_SIZE = 96;

    // width of screen (pixel)
    inline constexpr int SCREEN_WIDTH = 1200;

    // height of screen (pixel)
    inline constexpr int SCREEN_HEIGHT = 720;

    // rectangle for lose label display
    constexpr Rectangle LABEL_REC = {(SCREEN_WIDTH/3) - 50, (SCREEN_HEIGHT/2.5), 650, 200};

    // UI scaling factor
    constexpr float UI_SCALE = 2.0f;

    // cell size in pixels
    constexpr float CELL_SIZE = 30 * UI_SCALE;

    // initial x position for the game board
    constexpr float BOARD_INITIAL_X_POS = 50.0f;

    // initial y position for the game board
    constexpr float BOARD_INITIAL_Y_POS = 0.0f;

    // Scaling factor for blocks
    constexpr float BLOCKS_SCALE = (UI_SCALE / 10) + 0.01f;

    // scaling factor for objects
    constexpr float OBJECTS_SCALE = UI_SCALE / 2.0f;
    constexpr float SCORE_BAR_SCALE = UI_SCALE * 3.5f;


    struct LARGE_MESSAGE_LABEL{
        static constexpr Vector2 Position = {SCREEN_WIDTH/3.8f, SCREEN_HEIGHT/6.0f};
        static constexpr float Scale = 0.9f;
    };


    struct SCORE_BAR{
        static constexpr Vector2 Position = {900, 200};
        static constexpr float Scale = (UI_SCALE * 3.5f) / 10.0f;
    };


    struct MENU_PANEL{
        static constexpr Vector2 Position = {SCREEN_WIDTH/3.8f, SCREEN_HEIGHT/6.0f};
        static constexpr float Scale = 0.75f;
    };


    struct START_BUTTON{
        static constexpr Vector2 Position = {(SCREEN_WIDTH/3.0f) + 45.0f, SCREEN_HEIGHT/3.0f};
        static constexpr float Scale = 0.9f;
    };


    struct EXIT_BUTTON{
        static constexpr Vector2 Position = {(SCREEN_WIDTH/3.0f) + 70.0f, (SCREEN_HEIGHT/2.0f) + 75.0f};
        static constexpr float Scale = 0.75f;
    };


    struct RESTART_BUTTON{
        static constexpr Vector2 Position = {LABEL_REC.x + 260.f, LABEL_REC.y + 200.f};
        static constexpr float Scale = 0.5f;
    };

}