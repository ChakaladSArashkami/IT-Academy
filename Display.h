#pragma once
#include <iostream>
#include <vector>
#include "Snake.h"
#include "Food.h"
#include "GameField.h"

class Display 
{
public:
    Display() :_screen(22, std::string(42, ' ')) {}
    Display(unsigned int w, unsigned int h) :_screen(h + 2, std::string(w + 2, ' ')) {}

    void clear();
    void clear_snake(const Snake& snake);
    void clear_food(const Food& food);
    void clear_pause(int line);

    void draw(int score, int line, const Snake& snake, const Food& food);
    void draw_area();
    void draw_score(int score, int line);
    void draw_snake(const Snake& snake);
    void draw_food(const Food& food);
    void draw_pause(int line);
private:
    void set_cursor(int x, int y);

    std::vector<std::string> _screen;
};