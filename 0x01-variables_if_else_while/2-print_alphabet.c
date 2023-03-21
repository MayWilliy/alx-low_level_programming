#include <stdio.h>
#include <stdlib.h>

/**
 * main - Don't use printf
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ascii_alpahbet_code;

	for (ascii_alpahbet_code = 'a', ascii_alphabet_code <= 'z',
	++ascii_alphabet_code){
		putchar(ascii_alpahbet_code);
	}

	return (0);
}

