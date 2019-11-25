#include "task2.h"
#include <iostream>


unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long element = 0;
	for (unsigned long long i = 2; i < hbound; i++)
	{
		if (checkPrime(i) == 1) {
			element = element + i;
		}
	}
	return element;
}