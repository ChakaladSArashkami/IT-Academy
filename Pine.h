#pragma once
#include <string>
#include "Tree.h"

class Pine :public Tree
{
public:
	Pine(std::string name) :Tree(name, TreeType::PINE) { ++_pine_count; }
	~Pine() { --_pine_count; }

	static int get_pine_count() { return _pine_count; }

	void wind() override
	{
		std::cout << "Tree: " << _tree_name << " has ID: " << _tree_id << std::endl;
	}
private:
	static inline int _pine_count{};
};

