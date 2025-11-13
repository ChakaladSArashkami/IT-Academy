#include <iostream>
#include "Forest.h"

int main()
{
    Tree a("Igor", TreeType::OAK), b("Ala", TreeType::BIRCH), c("Black", TreeType::MAPLE);
    Forest fa, fb, fc;

    fa.grow_up(a);
    fa.grow_up(b);
    fa.wind();
    std::cout << "------" << std::endl;

    fb.grow_up(c);
    fb.wind();
    std::cout << "------" << std::endl;

    fc = fa + fb;
    fc.wind();
}