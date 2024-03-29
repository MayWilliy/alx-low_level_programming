#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: poniter to string
 * @accept: pointer to the byte in the string
 *
 * Return: pointer to the byte in s the match of bytes in accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
