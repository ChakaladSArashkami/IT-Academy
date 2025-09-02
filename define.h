#pragma once

#include "config.h"


#ifdef use_int
	#define value_type int
#else defined(use_float)
	#define value_type float
#endif


value_type factorial(value_type value);
void compiler_version();
void os_version();