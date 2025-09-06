#include <iostream>

#include "header.h"

int main()
{
    //int i{ 0 }, j{ 0 };
    //for (i = 1;i < 11;i++)
    //{
    //    for (j = 1;j < 11;j++)
    //    {
    //        std::cout << i << " * " << j << " = " << i * j << " || ";
    //    }
    //    std::cout << std::endl;
    //}
    //std::cout << std::endl;
    //i = 1;
    //while (i != 11)
    //{
    //    j = 1;
    //    while (j != 11)
    //    {
    //        std::cout << i << " * " << j << " = " << i * j << " || ";
    //        j++;
    //    }
    //    std::cout << std::endl;
    //    i++;
    //}
    //std::cout << std::endl;
    //i = 1;
    //do
    //{
    //    j = 1;
    //    do
    //    {
    //        std::cout << i << " * " << j << " = " << i * j << " || ";
    //        j++;
    //    } while (j != 11);
    //    std::cout << std::endl;
    //    i++;
    //} while (i != 11);


    for (int l = 0;l < 155;l++)
    {
        int counter_value_p1{ 0 }, counter_value_p2{ 0 };
        for (int i = 0;i < 100;i++)
        {
            counter_value_p1 += player_1();
            if (counter_value_p1 > 50)
            {
                std::cout << "Player 1 wins!" << std::endl << "!Congratulations!" << std::endl;
                break;
            }
            counter_value_p2 += player_2();
            if (counter_value_p2 > 50)
            {
                std::cout << "Player 2 wins!" << std::endl << "!Congratulations!" << std::endl;
                break;
            }
        }
        std::cout << "DRAW" << std::endl;
    }
}