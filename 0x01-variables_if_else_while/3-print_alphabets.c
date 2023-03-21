#include <stdio.h>

/**
 * main - Don't use printf
 * Return: Always 0 (Success)
 */

int main(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar(c - 32);
	}
		putchar('\n');

	return (0);
}
