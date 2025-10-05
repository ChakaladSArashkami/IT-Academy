#pragma once
#include <vector>

std::unique_ptr<int[]> create_arr_uniq(int size);
std::shared_ptr<int[]> create_arr_shar(int size);

void enter_arr(std::unique_ptr<int[]>& arr, int size);
void enter_arr(std::shared_ptr<int[]> arr, int size);

void print_arr(std::unique_ptr<int[]>& arr, int size);
void print_arr(std::shared_ptr<int[]> arr, int size);

void sum_weak(const std::weak_ptr<int[]> weak_ptr2, int size);

void min_max(const std::weak_ptr<int[]> weak_ptr2, int size, int& min, int& max);

void print(int value);
void print(float value);
void print(std::string value);
void print(char* value, int size);
void print(int* value, int size);
void print(std::vector<int> value);
void print(std::shared_ptr<int>& value);
void print(std::unique_ptr<double>& value);

void print_overload();