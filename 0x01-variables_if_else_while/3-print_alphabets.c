#include <stdio.h>

/**
 * main - Don't use printf
 * Return: Always 0 (Success)
 */

int main(void)
{

	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		putchar(x - 32);
	}
		putchar('\n');

	return (0);
}
