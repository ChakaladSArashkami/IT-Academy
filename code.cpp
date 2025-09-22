#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <memory>

#include "functional.h"

void reverse_string(char* str)
{
	int len = strlen(str);
	if (len == 0)
	{
		std::cout << "No word!" << std::endl;
		return;
	}
	char letter{};
	for (int i = 0; i < len / 2; i++)
	{
		letter = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = letter;
	}
	std::cout << "Reverse: " << str << std::endl;
}

void max_min(std::unique_ptr<int[]>& ptr)
{
	int min{ 325000 }, max{ 0 };
	for (int i = 0;i < 10;i++)
	{
		if (min > ptr[i])min = ptr[i];
		if (max < ptr[i])max = ptr[i];
	}
	std::cout << "Max value: " << max << std::endl << "Min value: " << min << std::endl;
}