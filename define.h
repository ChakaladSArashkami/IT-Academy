#pragma once

#include "config.h"


#ifdef use_int
	#define my_type int
#else defined(use_float)
	#define my_type float
#endif


my_type factorial(my_type value);
void compiler_version();
void os_version();