#include "GameField.h"

bool GameField::is_inside(const Point& p)
{
	return (p.x >= 0 && p.x < _width) &&
		   (p.y >= 0 && p.y < _height);
}

int GameField::get_width() const
{
	return _width;
}

int GameField::get_height() const
{
	return _height;
}
