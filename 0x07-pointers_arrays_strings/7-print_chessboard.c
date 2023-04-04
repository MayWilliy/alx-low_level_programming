#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 *
 * @a: pointer to a two-dimensional array of character
 *
 * Return: void
 *
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (i % 8 == 0 && i = 0)
		{
			j = i;
		_putchar ('\n');
		}

		_putchar (a[i / 8][i - j]);

	}
		_putchar ('\n');
}
