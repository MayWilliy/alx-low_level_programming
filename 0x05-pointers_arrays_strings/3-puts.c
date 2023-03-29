#include "main.h"

/**
 * _puts - prints a stand out string
 *
 * @str: pointer to the string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		_put (str[j]);
		j++;
	}
	_putchar ("\n");

}
