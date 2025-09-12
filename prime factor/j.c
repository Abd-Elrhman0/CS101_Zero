#include "main.h"

/**
 * generate_prime_factor - generates the largest prime factor of
number 612852475143.
 *
 * Return: the value of the largest prime factor of number
612852475143 and this value stored in variable f who has an
initial value of 612852475143.
 */

long long int generate_prime_factor(void)
{
	long long j;
	long long f = 612852475143;

	for (j = 2; j <= (long long) sqrt(612852475143); j++)
	{
		while ((f % j) == 0)
		{
			f = f / j;
		}

	}
	return (f);
}



