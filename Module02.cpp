#include <iostream>
#include <windows.h>

#include "define.h"

int main()
{
	value_type num{ 0 };
	std::cout << "Write your number!" << std::endl;
	while (true)
	{
		std::cin >> num;
		if (factorial(num) > 0)
		{
			std::cout << "Factorial of your number : " << factorial(num) << std::endl;
			break;
		}
		else
			std::cout << "Error!" << std::endl << "Try another number!" << std::endl;
	}
	std::cout << std::endl;
	compiler_version();
	std::cout << std::endl;
	os_version();
}