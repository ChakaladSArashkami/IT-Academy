#include "ConiferousForest.h"

void ConiferousForest::grow_up(Tree* t)
{
	if (Pine* p = dynamic_cast<Pine*>(t))
	{
		_forest.push_back(t);
	}
	else
	{
		std::cout << "Wrong type of tree!" << std::endl;
	}
}

void ConiferousForest::wind()
{
	for (Tree* tree : _forest)
		tree->wind();
}
