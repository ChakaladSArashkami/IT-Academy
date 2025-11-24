#pragma once
#include <string>
#include "Tree.h"

class Birch :public Tree
{
public:
	Birch(std::string name) :Tree(name, TreeType::BIRCH) { ++_birch_count; }
	~Birch() { --_birch_count; }

	static int get_birch_count() { return _birch_count; }

	void wind() override
	{
		std::cout << "Tree: " << _tree_name << " has ID: " << _tree_id << std::endl;
	}
private:
	static inline int _birch_count{};
};

