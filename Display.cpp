#include "Display.h"

void Display::clear() 
{
    std::cout << "\x1B[2J\x1B[H"; //clearing console
}

void Display::clear_snake(const Snake& snake)
{
    const auto& s = snake.get_body();
    int x{}, y{};

    for (const auto& body : s) 
    {
        x = body.x + 1;
        y = body.y + 1;

        _screen[y][x] = ' ';

        set_cursor(x, y);
        std::cout << ' ';
    }
}

void Display::clear_food(const Food& food)
{
    const auto& f = food.get_position();

    int x = f.x + 1,
        y = f.y + 1;

    _screen[y][x] = ' ';

    set_cursor(x, y);
    std::cout << ' ';
}

void Display::clear_pause(int line)
{
    set_cursor(0, line + 3);
    std::cout << "                                 ";
}

void Display::draw(int score, int line, const Snake& snake, const Food& food)
{
    draw_area();
    draw_score(score, line + 2);
    draw_snake(snake);
    draw_food(food);
}

void Display::draw_area()
{
    size_t h = _screen.size(), w = _screen[0].size();

    for (size_t x = 0; x < w; x++)
    {
        _screen[0][x] = '#';
        _screen[h - 1][x] = '#';
    }
    for (size_t y = 0; y < h; y++)
    {
        _screen[y][0] = '#';
        _screen[y][w - 1] = '#';
    }

    for (auto& line : _screen)
        std::cout << line << std::endl;
}

void Display::draw_score(int score, int line)
{
    set_cursor(0, line);
    std::cout << "Score: " << score << "      ";
}

void Display::draw_snake(const Snake& snake)
{
    bool head = true;

    for (auto& s : snake.get_body()) 
    {
        char c = head ? 'O' : 'o';
        head = false;
        _screen[s.y + 1][s.x + 1] = c;

        set_cursor(s.x + 1, s.y + 1);
        std::cout << c;

        set_cursor(0, 0);//moving from game area
    }
}

void Display::draw_food(const Food& food)
{
    Point fp = food.get_position();
    _screen[fp.y + 1][fp.x + 1] = '*';

    set_cursor(fp.x + 1, fp.y + 1);
    std::cout << '*';
}

void Display::draw_pause(int line)
{
    set_cursor(0, line + 3);
    std::cout << "PAUSED (press P to continue)";
}


void Display::set_cursor(int x, int y)
{
    COORD coord;

    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}