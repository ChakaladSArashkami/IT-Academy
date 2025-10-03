#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

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
}

void read_reverse()
{ 
	char str[100];
	std::cout << "Type your word: ";
	std::cin.getline(str, 100);
	reverse_string(str);
	std::cout << str << std::endl;
}

void create_matrix()
{
	int** matr = new int* [3] {};
	for (int i = 0;i < 3;i++)
		matr[i] = new int[3];
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
}

void show_vec(std::vector<int> vec)
{
	for (auto i = vec.begin();i < vec.end();i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}

void create_rand_vec(std::vector<int>& vec,int size)
{
	for (int i = 0;i < size;i++)
		vec.push_back(1 + rand() % (100));
}

void sort_vec(std::vector<int>& vec)
{
	std::sort(vec.begin(), vec.end());
}

void enter_arr(std::unique_ptr<int[]>& ptr, int size)
{
	std::cout << "Inter "<<size<< " value" << std::endl;
	for (int i = 0;i < size;i++)
		std::cin >> ptr[i];
}

void max_min(std::unique_ptr<int[]>& ptr,int size)
{
	int min{ std::numeric_limits<int>::max() }, max{ std::numeric_limits<int>::lowest() };
	for (int i = 0;i < size;i++)
	{
		if (min > ptr[i])min = ptr[i];
		if (max < ptr[i])max = ptr[i];
	}
	std::cout << "Max value: " << max << std::endl << "Min value: " << min << std::endl;
}

void show_arr(std::unique_ptr<int[]>& ptr,int size)
{
	for (int i = 0;i < size;i++)
		std::cout << ptr[i]<<" ";
	std::cout << std::endl;
}