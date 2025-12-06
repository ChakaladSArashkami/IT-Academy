#include "Snake.h"

Snake::Snake() :_direction(Direction::LEFT)
{ 
    _body.push_back({ 20, 10 });
}

Snake::Snake(int w, int h) : _direction(Direction::LEFT)
{
    _body.push_back({ w / 2, h / 2 });
}

void Snake::move() 
{
    Point next = get_head();

    switch (_direction) 
    {
    case Direction::UP:    next.y--; 
        break;
    case Direction::DOWN:  next.y++; 
        break;
    case Direction::LEFT:  next.x--; 
        break;
    case Direction::RIGHT: next.x++; 
        break;
    }

    _body.push_front(next);

    if (!_is_grow) //checking that the snake eats
    {
        _body.pop_back();
    }
    else 
    {
        _is_grow = false;
    }
}

void Snake::grow()
{
    _is_grow = true;
}

void Snake::set_direction(Direction d)
{
    //preventing revers
    if ((_direction == Direction::UP    && d == Direction::DOWN)  ||
        (_direction == Direction::DOWN  && d == Direction::UP)    ||
        (_direction == Direction::LEFT  && d == Direction::RIGHT) ||
        (_direction == Direction::RIGHT && d == Direction::LEFT))
        {
            return;
        }

    _direction = d;
}

bool Snake::hits_itself() const
{
    Point h = get_head();
    for (size_t i = 1; i < _body.size(); ++i)
        if (_body[i] == h) return true;

    return false;
}

Point Snake::get_head() const
{
    return _body.front();
}

const std::deque<Point>& Snake::get_body() const
{
    return _body;
}
