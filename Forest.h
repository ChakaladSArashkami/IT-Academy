#pragma once
#include "Tree.h"
#include <vector>

class Forest
{
public:
	Forest operator+(const Forest& other);
	size_t get_trees_number() const
	{
		return _forest.size();
	}
	void grow_up(const Tree& t)
	{
		_forest.push_back(t);
	}
	void cut_all()
	{
		_forest.clear();
	}
	void wind()
	{
		for (auto tree : _forest)
			tree.wind();
	}
private:
	std::vector<Tree> _forest{};
};