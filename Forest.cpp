#include "Forest.h"

Forest Forest::operator+(const Forest& other)
{
	Forest result;
	result._forest = this->_forest;
	result._forest.insert(result._forest.end(), other._forest.begin(), other._forest.end());
	return result;
}
