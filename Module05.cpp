#include <iostream>

#include "shape.h"

int main()
{
    Shapes::Shape object = Shapes::Shape::CIRCLE;
    Shapes::print_shape(object);

    std::string str{};
    std::cout << "Print your figure" << std::endl;
    std::cin >> str;
    Shapes::str_shape(str);
}