#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: memory which contains the contents of s1
 * @s2: memory which contains the contents of s2
 *
 * Return: pointer should point to a newly allocated space in memory or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
       	len2 = 0;
       	j = 0;
       	i = 0;
       	str_len = 0;
	char *str_concat;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
        	{
                len1++;
        	}
	}
	if (s2 == NULL)
	{
		while (s2[len2] != '\0')
		{
		len2++;
		}
	}
	str_len = len1 + len2;
	str_concat = malloc((str_len + 1) * sizeof(char));
	if (str_concat == NULL)
	{
		return (NULL);
	}

	while (i < len1)
	{
		str_concat[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		str_concat[j] = s2[j];
		j++;
	}

	str_concat[i + j] = '\0';

	return (str_concat);
}	
