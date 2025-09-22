#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <memory>

#include "functional.h"

int main()
{
	char str[100];
	std::cout << "Type your word: ";
	std::cin.getline(str, 100);
	reverse_string(str);


	int** matr = new int* [3] {};
	for (int i = 0;i < 3;i++)
		matr[i] = new int [3];
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			matr[i][j] = i * j;
			std::cout << matr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	for (int i = 0;i < 3;i++)
		delete matr[i];
	delete[] matr;
	matr = nullptr;


	std::vector<int> vec;
	for (int i = 0;i < 10;i++)
	{
		vec.push_back(1 + rand() % (100));
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
	std::sort(vec.begin(), vec.end());
	for (int i = 0;i < 10;i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;


	auto ptr1 = std::make_unique<int[]>(10);
	std::cout << "Inter your value" << std::endl;
	for (int i = 0;i < 10;i++)
		std::cin >> ptr1[i];

	max_min(ptr1);

	for (int i = 0;i < 10;i++)
		std::cout << ptr1[i]<<" ";
	std::cout << std::endl;
}