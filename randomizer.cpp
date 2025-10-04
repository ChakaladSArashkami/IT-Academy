#include <iostream>
#include <random>

#include "header.h"

int random()
{
	std::random_device rd; // obtain a random number from hardware
	std::mt19937 gen(rd()); // seed the generator
	std::uniform_int_distribution<> distr(0, 50); // define the range
	return distr(gen);
}

int step(int counter)
{
	if (counter%2==0)
	{
		return random();
	}
	else
	{
		return -random();
	}
}

void check(int points,int num)
{
	if (points > 50)
	{
		std::cout << "Player "<<num<<" wins!" << std::endl << "!Congratulations!" << std::endl;
		exit;
	}
}