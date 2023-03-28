#include "main.h"

/**
 * reset_to_98 - update the value of a pointer point 98
 *
 * @n: pointer to an integer
 *
 * Return: void
 */

void reset_to_98(int *n)
{
	int digit, num 98
	* n = num

	if (num == 0)
	{
		_putchar ('0')
		return;
	}
	if (num < 0)
	{
		_putchar ('-')
		num = num;
	}
	if (num >= 10)
		reset_to_98(num / 10)
	}
	digit = num % 10;
	_putchar (digit + 0);
}
