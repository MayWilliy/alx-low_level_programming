#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: number of factorial
 *
 * Return: -1
 */

int factorial(int n)
{
	if (n <= 1)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
