#include <iostream>
#include <vector>

#include "functional.h"

int main()
{
	read_reverse();

	create_matrix();

	const int size = 10;
	std::vector<int> vector;

	create_rand_vec(vector, size);
	show_vec(vector);

	sort_vec(vector);
	show_vec(vector);

	auto ptr1 = std::make_unique<int[]>(size);
	enter_arr(ptr1, size);

	max_min(ptr1,size);

	show_arr(ptr1, size);
}