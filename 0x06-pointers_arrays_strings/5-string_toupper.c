#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @n: numbers of element of array
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int length;

	length = 0;
	while (n[length] != '\0')
	{
		if (n[length] >= 97 && n[length] <= 122)
		{
			n[length] = n[length] - 32;
				n++;
		}
	}
	return (n);
}
