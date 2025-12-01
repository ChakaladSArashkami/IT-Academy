#pragma once
#include "TreeM10.h"
#include <vector>

class Forest
{
public:
	virtual ~Forest();
	void operator+(const Forest& other);

	virtual void grow_up(Tree* t) = 0;
	void cut_all();
	virtual void wind() = 0;
protected:
	std::vector<Tree*> _forest;
};