#include <iostream>

#include "shape.h"

namespace Shapes
{
	void print_shape(Shape figure)
	{
		switch (figure)
		{
		case Shape::CIRCLE:
			std::cout << "Circle" << std::endl;
			break;
		case Shape::SQUARE:
			std::cout << "Square" << std::endl;
			break;
		case Shape::TRIANGLE:
			std::cout << "Triangle" << std::endl;
			break;
		default:std::cout << "Unknown" << std::endl;
		}
	}
	void str_shape(std::string word)
	{
		Shape figure{};
		if (word == "circle")
			figure = Shape::CIRCLE;
		else if (word == "square")
			figure = Shape::SQUARE;
		else if (word == "triangle")
			figure = Shape::TRIANGLE;
		else
		{
			std::cout << "Wrong input!" << std::endl;
			return;
		}
		print_shape(figure);
	}
}