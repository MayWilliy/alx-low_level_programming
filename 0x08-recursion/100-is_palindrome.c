#include "main.h"
#include <string.h>

/**
 * is_palindrome - an empty string is a palindrome
 *
 * @s: pointer to a string
 *
 * Return: 1 if a string is a palindrome and 0
 */

int is_palindrome(char *s)
{
	int len = 0;
	int i, j;

	while (s[len] != '\0')
	{
		len++;
	}

	if (len <= 1)
	{
		return (1);
	}

	for (((i = 0); j = len - 1; i < len / 2); i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
