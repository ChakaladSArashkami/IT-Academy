#include <iostream>

int main()
{
    int num{ 0 };
    std::cout << "Enter your number : ";
    std::cin >> num;
    std::cout << "Answer : "<<(num > 0 && num % 2 == 0 ? num << 2 : num >> 2) << std::endl;
}