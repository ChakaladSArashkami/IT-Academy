#pragma once
#include "ForestM10.h"
#include "Pine.h"

class ConiferousForest : public Forest
{
public:
	void grow_up(Tree* t) override;
	void wind() override;
private:

};