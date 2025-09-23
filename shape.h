#pragma once

namespace Shapes
{
	enum class Shape
	{
		CIRCLE,
		SQUARE,
		TRIANGLE
	};

	
	void print_shape(Shape figure);
	void str_shape(std::string word);
}