#pragma once
#include <random>
#include <Windows.h>
#include "Point.h"
#include "GameField.h"
#include "Snake.h"

class Food
{
public:
	Food();

	void generate(const GameField& field, const Snake& snake);
	Point get_position() const;
private:
	Point _position;
	std::mt19937 rng;
};