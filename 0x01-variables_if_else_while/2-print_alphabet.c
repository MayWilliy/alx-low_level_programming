#include <stdio.h>
#include <stdlib.h>

/**
 * main - Don't use printf
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	for (x = 'a', x <= 'z', ++x)
	{
		putchar(x);
	}

	return (0);
}

