#include "DeciduousForest.h"

void DeciduousForest::grow_up(Tree* t)
{
	Pine* p = dynamic_cast<Pine*>(t);
	if (!p)
	{
		_forest.push_back(t);
	}
	else
	{
		std::cout << "Wrong type of tree!" << std::endl;
	}
}

void DeciduousForest::wind()
{
	for (Tree* tree : _forest)
		tree->wind();
}
