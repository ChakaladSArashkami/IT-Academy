#include <iostream>
#include "ForestM10.h"
#include "Oak.h"
#include "Maple.h"
#include "Pine.h"
#include "Birch.h"
#include "Willow.h"
#include "Module10.h"

#include "ConiferousForest.h"
#include "DeciduousForest.h"

int main()
{
    Tree* a = new Oak("Natan");
    Tree* b = new Pine("Jack");
    Tree* c = new Willow("Yellow");

    Forest* fa = new ConiferousForest;
    fa->grow_up(a);
    fa->grow_up(b);
    fa->grow_up(c);
    fa->wind();

    std::cout << "---------" << std::endl;
    
    Forest* fb = new DeciduousForest;
    fb->grow_up(a);
    fb->grow_up(b);
    fb->grow_up(c);
    fb->wind();

    print_tree_count();

    delete(fa);
    delete(fb);

    std::cout << "---------" << std::endl;

    print_tree_count();
}