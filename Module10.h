#pragma once
#include <iostream>
#include "Oak.h"
#include "Maple.h"
#include "Pine.h"
#include "Birch.h"
#include "Willow.h"

void print_tree_count()
{
    std::cout << "Number of trees" << std::endl <<
                 "Oak: " << Oak::get_oak_count() << std::endl <<
                 "Maple: " << Maple::get_maple_count() << std::endl <<
                 "Pine: " << Pine::get_pine_count() << std::endl <<
                 "Birch: " << Birch::get_birch_count() << std::endl <<
                 "Willow: " << Willow::get_willow_count() << std::endl;
}