#include <iostream>
#include <vector>

#include "work.h"

std::unique_ptr<int[]> create_arr_uniq(int size) 
{
	if (size <= 0) {
		std::cout << "Invalid size unique!" << std::endl;
	}
	return std::unique_ptr<int[]>(new int[size]);
}

std::shared_ptr<int[]> create_arr_shar(int size) 
{
	if (size <= 0) {
		std::cout << "Invalid size shared!" << std::endl;
	}
	return std::shared_ptr<int[]>(new int[size]);
}

void enter_arr(std::unique_ptr<int[]>& arr, int size)
{
	std::cout << "Enter " << size << " numbers" << std::endl;;
	for (int i = 0;i < size;i++)
		std::cin >> arr[i];
}

void enter_arr(std::shared_ptr<int[]>& arr,int size)
{
	std::cout << "Enter " << size << " numbers" << std::endl;;
	for (int i = 0;i < size;i++)
		std::cin >> arr[i];
}

void print_arr(std::unique_ptr<int[]>& arr,int size)
{
	std::cout << "Unique ptr" << std::endl;;
	for (int i = 0;i < size;i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

void print_arr(std::shared_ptr<int[]>& arr, int size)
{
	std::cout << "Shared ptr" << std::endl;;
	for (int i = 0;i < size;i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
				
void sum_weak(const std::weak_ptr<int[]>& weak_ptr2,int size)
{
	if (auto ptr2 = weak_ptr2.lock())
	{
		int sum{ 0 };
		for (int i = 0;i < size;i++)
			sum += ptr2[i];
		std::cout << "Array sum: " << sum << std::endl;
	}
	else std::cout << "invalid Input sum" << std::endl;
}

void min_max(const std::weak_ptr<int[]>& weak_ptr2, int size, int& min, int& max)
{
	if (auto ptr2 = weak_ptr2.lock())
	{
		for (int i = 0;i < size;i++)
		{
			if (min > ptr2[i])min = ptr2[i];
			if (max < ptr2[i])max = ptr2[i];
		}
	}
	else std::cout << "invalid Input min_max" << std::endl;
}

void print(int value)
{
	std::cout << "Type value: int " << value << std::endl;
}
void print(float value)
{
	std::cout << "Type value: float " << value << std::endl;
}
void print(std::string value)
{
	std::cout << "Type value: string " << value << std::endl;
}
void print(char* value,int size)
{
	std::cout << "Type value: char ";
	for (int i = 0;i < size;i++)
		std::cout << value[i] << " ";
	std::cout << std::endl;
}
void print(int* value, int size)
{
	std::cout << "Type value: int array ";
	for (int i = 0;i < size;i++)
		std::cout << value[i] << " ";
	std::cout << std::endl;
}
void print(std::vector<int> value)
{
	std::cout << "Type value: vector ";
	for (int i = 0; i < value.size(); i++) {
		std::cout << value[i] << " ";
	}
	std::cout << std::endl;
}
void print(std::shared_ptr<int>& value)
{
	std::cout << "Type value: shared_ptr " << *value << std::endl;
}
void print(std::unique_ptr<double>& value)
{
	std::cout << "Type value: unique_ptr " << *value << std::endl;
}

void print_overload()
{
	char char_arr[] = {'a','b','c'};
	int int_arr[] = { 1,2,3,4 };
	std::vector<int> vec = { 1,2,3 };
	auto shared_ptr = std::make_shared<int>(1);
	auto unique_ptr = std::make_unique<double>(1.2);
	print(2);
	print(1.21f);
	print("asd");
	print(char_arr, sizeof(char_arr) / sizeof(char_arr[0]));
	print(int_arr, sizeof(int_arr) / sizeof(int_arr[0]));
	print(vec);
	print(shared_ptr);
	print(unique_ptr);
}