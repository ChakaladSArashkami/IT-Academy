#pragma once
#include <string>
#include "Tree.h"

class Oak :public Tree
{
public:
	Oak(std::string name) :Tree(name, TreeType::OAK) { ++_oak_count; }
	~Oak() { --_oak_count; }

	static int get_oak_count() { return _oak_count; }

	void wind() override 
	{
		std::cout << "Tree: " << _tree_name << " has ID: " << _tree_id << std::endl;
	}
private:
	static inline int _oak_count{};
};

