#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: number
 * @separator: is the string to be printed in between numbers
 * Return: Nothing cause it void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
	}
	if (separator == NULL)
	{
	}
	printf("\n");

	va_end(args);
}
