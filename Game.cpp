#include "Game.h"

Game::Game()
{
    _food.generate(_field, _snake);
    _snake_speed = 150;
}

Game::Game(int w, int h, unsigned int sp) : _field(w, h), _snake({ w / 2, h / 2 }), _display(w, h)
{
    _food.generate(_field, _snake);
    _snake_speed = sp;
}

void Game::start()
{
    _display.draw(_score, _field.get_height(), _snake, _food);

    while (!_game_over) 
    {
        key_input();

        if (!_paused)
        {
            update();
        }
        else
        {
            _display.draw_pause(_field.get_height());
        }

        Sleep(_snake_speed);//refresh time 
        _display.clear_pause(_field.get_height());
    }

    _display.clear();
    std::cout << "GAME OVER." << std::endl << "Score: " << _score << std::endl;
}

void Game::key_input()
{
    if (_kbhit())
    {
        int key = _getch();//reading what key is presed

        if (key == 224)
        {
            int arrow = _getch();
            switch (arrow)
            {
            case 72:
                _snake.set_direction(Direction::UP);
                break;
            case 80:
                _snake.set_direction(Direction::DOWN);
                break;
            case 75:
                _snake.set_direction(Direction::LEFT);
                break;
            case 77:
                _snake.set_direction(Direction::RIGHT);
                break;
            }
        }
        else
        {
            switch (key)
            {
            case 'w':
                _snake.set_direction(Direction::UP);
                break;
            case 's':
                _snake.set_direction(Direction::DOWN);
                break;
            case 'a':
                _snake.set_direction(Direction::LEFT);
                break;
            case 'd':
                _snake.set_direction(Direction::RIGHT);
                break;
            case 'p':
                _paused = !_paused;
                break;
            case 'q':
                _game_over = true;//key for stoping game
                break;
            }
        }
    }
}

void Game::update() 
{
        _display.clear_snake(_snake);

        _snake.move();

        //if the snake's head hits the wall : gameover
        if (!_field.is_inside(_snake.get_head()))
        {
            _game_over = true;
        }

        if (_snake.hits_itself())
            _game_over = true;

        //if snake eats food then grow
        if (_snake.get_head() == _food.get_position())
        {
            ++_score;
            _display.draw_score(_score, _field.get_height() + 2);

            _snake.grow();

            _display.clear_food(_food);
            _food.generate(_field, _snake);
            _display.draw_food(_food);
        }

        _display.draw_snake(_snake);
}
