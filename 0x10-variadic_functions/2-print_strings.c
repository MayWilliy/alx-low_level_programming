#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings- prints strings, followed by a new line
 * @n: numbers of stings to pass
 * @separator: is the string to be printed
 * Return: Nothing cause it void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
