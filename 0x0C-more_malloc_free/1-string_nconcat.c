#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string which is the source of thr memory
 * @s2: second string which is the destination
 * @n: number of the memory
 * Return: to the newly memory or NULL if failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str = NULL;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int total_len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	total_len = len1 + n + 1;
	concat_str = malloc(total_len);

	if (concat_str == NULL)
	{
		return (NULL);
	}

	strcpy(concat_str, s1);
	strncat(concat_str, s2, n);
	concat_str[total_len - 1] = '\0';

	return (concat_str);
}
