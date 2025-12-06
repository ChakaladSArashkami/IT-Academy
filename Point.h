#pragma once

struct Point {
    int x;
    int y;

    bool operator==(const Point& o) const 
    {
        return x == o.x && y == o.y;
    }
};