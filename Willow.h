#pragma once
#include <string>
#include "Tree.h"

class Willow :public Tree
{
public:
	Willow(std::string name) :Tree(name, TreeType::WILLOW) { ++_willow_count; }
	~Willow() { --_willow_count; }

	static int get_willow_count() { return _willow_count; }

	void wind() override
	{
		std::cout << "Tree: " << _tree_name << " has ID: " << _tree_id << std::endl;
	}
private:
	static inline int _willow_count{};
};

