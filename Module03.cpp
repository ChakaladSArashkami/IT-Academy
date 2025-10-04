#include <iostream>

#include "header.h"

int main()
{
    //multiplication by 3 loop operators
     
    int i{ 0 }, j{ 0 };                                 
    for (i = 1;i < 11;i++)
    {
        for (j = 1;j < 11;j++)
        {
            std::cout << i << " * " << j << " = " << i * j << " || ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    i = 1;
    while (i < 11)
    {
        j = 1;
        while (j < 11)
        {
            std::cout << i << " * " << j << " = " << i * j << " || ";
            j++;
        }
        std::cout << std::endl;
        i++;
    }
    std::cout << std::endl;
    i = 1;
    do
    {
        j = 1;
        do
        {
            std::cout << i << " * " << j << " = " << i * j << " || ";
            j++;
        } while (j < 11);
        std::cout << std::endl;
        i++;
    } while (i < 11);

    //game
    int counter_p1{}, counter_p2{}, id_p1{ 1 }, id_p2{ 2 };
    for (int i = 1;i <= 100;i++)
    {
        counter_p1 += step(i);
        check(counter_p1, id_p1);
        counter_p2 += step(i);
        check(counter_p2, id_p2);
    }
    std::cout << "DRAW" << std::endl;
}