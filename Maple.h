#pragma once
#include <string>
#include "Tree.h"

class Maple :public Tree
{
public:
	Maple(std::string name) :Tree(name, TreeType::MAPLE) { ++_maple_count; }
	~Maple() { --_maple_count; }

	static int get_maple_count() { return _maple_count; }

	void wind() override
	{
		std::cout << "Tree: " << _tree_name << " has ID: " << _tree_id << std::endl;
	}
private:
	static inline int _maple_count{};
};

