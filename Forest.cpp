#include "Forest.h"

Forest::~Forest()
{
	for (Tree* t : _forest) 
	{
		delete t;
	}
	_forest.clear();
}

void Forest::operator+(const Forest& other)
{
	_forest.insert(_forest.end(), other._forest.begin(), other._forest.end());
}

void Forest::cut_all()
{
	_forest.clear();
}