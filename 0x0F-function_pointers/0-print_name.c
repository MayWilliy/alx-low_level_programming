#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a name
 * @name: the name to be printed
 * @f: poniter
 * Return: nothing causeit void
 */

void print_name(char *name, void (*f)(char *))
{
	unsigned int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		_putchar(name[i]);
	}
		_putchar('\n');

	f(name);
}
