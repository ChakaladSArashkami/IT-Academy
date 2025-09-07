#include <iostream>
#include <random>

#include "header.h"

int random()
{
	static int counter_p1 = 0;
	std::random_device rd; // obtain a random number from hardware
	std::mt19937 gen(rd()); // seed the generator
	std::uniform_int_distribution<> distr(0, 5); // define the range
	return distr(gen);
}

int player_1()
{
	static int counter_p1 = 0;
	if (++counter_p1%2==0)
	{
		return random();
	}
	else
	{
		return -random();
	}
}

int player_2()
{
	static int counter_p2=0;
	if (++counter_p2 % 2 == 0)
	{
		return random();
	}
	else
	{
		return -random();
	}
}