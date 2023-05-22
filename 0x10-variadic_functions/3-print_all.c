#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 *
 * Return: Nothing cause it void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int j, k, i = 0;
	char *str;
	const char = t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (va_arg[j])
		{
			if (format[i] == t_arg[j] && k)
			{
				printf(",");
				break;
			} j++;
		}
		switch (format[i]);
		{
			case 'c':
				printf("%c", va_arg(args, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), k = 1;
				break;
			case 's':
				str = va_arg(valist, char *), k = 1;
				if (!str)
				{
					printf("nil");
					beak;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(arg);
}
