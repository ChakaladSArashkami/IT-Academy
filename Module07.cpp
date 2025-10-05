#include <iostream>
#include <limits>

#include "smart_pointers.h"

int main()
{
	int size{};
	std::cout << "Enter array size for unique ptr: ";
	std::cin >> size;
	auto ptr1 = create_arr_uniq(size);
	enter_arr(ptr1, size);

	std::cout << "Enter array size for shared ptr: ";
	std::cin >> size;
	auto ptr2 = create_arr_shar(size);
	enter_arr(ptr2, size);

	sum_weak(ptr2, size);

	int min{std::numeric_limits<int>::max()}, max{ std::numeric_limits<int>::lowest() };
	min_max(ptr2, size, min, max);
	std::cout << "Min value: " << min << std::endl;
	std::cout << "Max value: " << max << std::endl;

	print_overload();
}