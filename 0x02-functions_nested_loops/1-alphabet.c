#include "main.h"

/**
 * print_alphabet - Write lower a-z
 *
 * Description: long description
 *
 * Return - return 0 (Success)
 *
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
