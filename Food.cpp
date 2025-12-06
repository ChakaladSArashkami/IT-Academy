#include "Food.h"

Food::Food()
{
	std::random_device rd;
	rng.seed(rd());
    _position = { 0, 0 };
}

void Food::generate(const GameField& field, const Snake& snake)
{
    int min_x = 1, max_x = field.get_width() - 2,
        min_y = 1, max_y = field.get_height() - 2;

    while (true) 
    {
        int x = min_x + (rng() % (max_x - min_x + 1)),
            y = min_y + (rng() % (max_y - min_y + 1));

        Point p{ x, y };

        // cheking the hit on the snake body
        bool on_snake = false;

        for (const auto& seg : snake.get_body()) 
        {
            if (seg.x == p.x && seg.y == p.y) 
            {
                on_snake = true;
                break;
            }
        }

        if (!on_snake) 
        {
            _position = p;
            return;
        }
    }
}

Point Food::get_position() const
{
	return _position;
}
