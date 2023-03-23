#include "main.h"

/**
 *  print_alphabet - Write alphabet a-z x10
 *
 *  Description: long description
 *
 *  Return: always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i, ch;

		for (i = 0; i < 10; i++)
			{
			for (ch = 'a' ; ch <= 'z' ; ch++)
			{
			_putchar(ch);
			_putchar('\n');
			}
			}
}
