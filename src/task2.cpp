#include <math.h>
bool checkPrime(unsigned int value) {

	for (int j = 2; j <= sqrt(value); j++) {
		if (value % j == 0) {
			return 0;
		}
	}
	return 1;
}


unsigned long long nPrime(unsigned n)
{
	unsigned long long number = 0;
	unsigned long long j = 2;

	for (unsigned int i = 2; n != number; i++)
	{
		if (checkPrime(i) == 1) number++;
		j = i;
	}

	return j;

}

unsigned long long nextPrime(unsigned long long value)
{
	value++;
	unsigned long long i = value;
	for (unsigned int j = 0; i <= i; j++)
	{
		if (checkPrime(value) == 1) {
			return value;
		}
		else value++;
	}

}