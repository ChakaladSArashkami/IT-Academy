#pragma once
#include "Forest.h"
#include "Pine.h"

class DeciduousForest : public Forest
{
public:
	void grow_up(Tree* t) override;
	void wind() override;
private:

};