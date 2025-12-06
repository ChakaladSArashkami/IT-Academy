#pragma once
#include <iostream>
#include "Point.h"

class GameField
{
public:
    GameField() :_width(40), _height(20) {}
    GameField(int w, int h) :_width(w), _height(h) {}

    bool is_inside(const Point& p);

    int get_width() const;
    int get_height() const;
private:
    int _width, _height;
};