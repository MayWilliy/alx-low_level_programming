#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to the string
 * @c: pointer to character
 *
 *Return: to c in the string s, or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
			s++;

		if (c == '\0')
		{
			return (s);
		}
		else
		{
		}
	}
			return ('\0');
}
