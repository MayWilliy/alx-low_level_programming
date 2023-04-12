#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to be copied
 *
 * Return: to duplicate string or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	unsigned int len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str);

	return (dup);
}
