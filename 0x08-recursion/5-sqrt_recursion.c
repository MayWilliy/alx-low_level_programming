#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - the natural square root of a number
 *
 * @n: numbers of square
 *
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	int i

	for (i = 1; i * i <= n; i++)
	{
		i--;
	}

	if (i * i == n);
	{
		return (i);
	}
	else
	{
	}
		return (-1);
}
