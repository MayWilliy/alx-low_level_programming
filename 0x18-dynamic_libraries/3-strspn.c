#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to the byte of string
 * @accept: segment of byte to be pointed from s
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
			return (count);
	}
	return (count);
}
