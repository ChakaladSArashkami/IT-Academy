#include <iostream>
#include <cmath>

#include "define.h"

value_type factorial(value_type value)
{
	if (value < 1) return -1;
	if (value == 1) return 1;
	return tgamma(value+1);
}

void compiler_version()
{
	#ifdef _MSC_VER
	{
		std::cout << "Your code was compiled on Microsoft Visual Studio " << _MSC_VER / 100 << "." << _MSC_VER % 100 << _MSC_FULL_VER % 100000 << "." << _MSC_BUILD << "!" << std::endl;
	}
	#elif __GNUC__
	{
		std::cout << "Your code was compiled on GNU " << __GNUC__ << "." << __GNUC_MINOR__ << "." << __GNUC_PATCHLEVEL__ << "!" << std::endl;
	}
	#elif __clang__
	{
		std::cout << "Your code was compiled on Clang " << __clang_major__ << "." << __clang_minor__ << "." << __clang_patchlevel__ <<"!"<< std::endl;
	}
	#else 
		std::cout << "Your compiler is unknown to me ;(" << std::endl;

	#endif
}

void os_version()
{
	#ifdef _WIN32
	{ 
		std::cout << "Your OS is Windows!" << std::endl; 
	}
	#elif __linux__
	{
		std::cout << "Your OS is Linux!" << std::endl;
	}
	#elif __APPLE__
	{
		std::cout << "Your OS is Mac!" << std::endl;
	}
	#elif __unix__
	{
		std::cout << "Your OS is Unix!" << std::endl;
	}
	#else
		std::cout << "Your OS is unknown to me ;(" << std::endl;
	#endif
}