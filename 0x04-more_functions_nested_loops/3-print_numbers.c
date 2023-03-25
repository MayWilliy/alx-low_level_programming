#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Description: print number from 0-9
 *
 * Return: Always (void)
 */
void print_numbers(void)
{
		int i;

		for (i = '0'; i <= '9'; i++)
		{
			_putchar (i);
			}
			_putchar ('\n');
}
