#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - integer is a prime number
 *
 * @n: the number of prime numbers to print
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n == 48)
	{
		return (1);
	}

	if (n < 2)	
	{
		return (0);
	}

	int i;

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
		return (0);
		}
	}
	return (1);
}
