#include <stdio.h>
#include <stdlib.h>

/**
 * main - Don't use printf
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ascii_alphabet_code;

	for (ascii_alphabet_code = 'a', ascii_alphabet_code <= 'z',
	++ascii_alphabet_code){
		putchar(ascii_alphabet_code);
	}

	return (0);
}

