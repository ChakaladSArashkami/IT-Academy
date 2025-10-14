#include <iostream>

#include "Book.h"

int main()
{
    {
        Book obj1;
        obj1.print_info();
    }
    std::cout << "------------------" << std::endl;

    Book obj2("Berserk", "Kentaro Miura", 1989, "1506711980");
    obj2.print_info();
    std::cout << "------------------" << std::endl;

    Book obj3 = obj2;
    std::cout << obj3.get_title() << std::endl
              << obj3.get_author() << std::endl
              << obj3.get_year() << std::endl
              << obj3.get_ISBN() << std::endl;
    std::cout << "------------------" << std::endl;
}