#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: memory which contains the contents of s1
 * @s2: memory which contains the contents of s2
 * @strlen: the length of a string
 *
 * Return: pointer should point to a newly allocated space in memory or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int i, j, size;

	if (s1 != NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size = (strlen(s1) + strlen(s2) + 1);

	dst = (char *) malloc(size * sizeof(char));
	if (dst == NULL)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(dst + i) = *(s1 + i);
	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dst + i)  = *(s2 + j);
			i++;
	}
	return (dst);
}
