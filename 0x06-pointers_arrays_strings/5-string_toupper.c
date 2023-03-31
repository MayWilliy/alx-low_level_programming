#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @ch: pointer to string
 * @n: numbers of element of array
 *
 * Return: pointer to upper string
 */
char *string_toupper(char *)
{
	int length;

	length = 0;
	while (ch[length] != '\0')
	{
		if (ch[length] >= 97 && ch[length] <= 122)
		{
			length++;
		}
	}
	return (ch);
}
