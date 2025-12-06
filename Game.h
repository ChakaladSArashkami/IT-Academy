#pragma once
#include <conio.h>
#include "Snake.h"
#include "Food.h"
#include "GameField.h"
#include "Display.h"

class Game
{
public:
    Game();
    Game(int w, int h,unsigned int sp);

    void start();
    void key_input();
    void update();
private:
    Snake _snake;
    Food _food;
    GameField _field;
    Display _display;

    bool _game_over = false, _paused = false;
    unsigned int _score{}, _snake_speed{};
};
