#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Description: print number from 0-9
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int i;

		for (i = '0'; i <= '9'; i++)
		{
			if (i != 2 && i != 4)
			{
				_putchar (i);
				}
				_putchar ('\n');
				}
			return(0);
}
