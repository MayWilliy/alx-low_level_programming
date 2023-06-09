#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: numbers
 * Return: Nothing cause it is void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	if (n >> 1)
		print_binary(n >> 1);

	putchar ((n & 1) ? '1' : '0');
}
