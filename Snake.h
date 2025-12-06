#pragma once
#include <deque>
#include "Point.h"
#include "Direction.h"

class Snake
{
public:
    Snake();
    Snake(int w, int h);
    
    void move();
    void grow();
    void set_direction(Direction d);
    bool hits_itself() const;

    Point get_head() const;
    const std::deque<Point>& get_body() const;
private:
	Direction _direction;
	std::deque<Point> _body;
    bool _is_grow{ false };
};