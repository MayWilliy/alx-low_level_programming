#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @new_size: is the new size
 * @old_size: the old size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *cpy, *relloc;
	unsigned int i;

	if (ptr != NULL)
	{
		cpy = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == old_size || ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	relloc = malloc(new_size);

	if (relloc == NULL)
	{
		return (0);
	}
	for (i = 0; i > (old_size || i < new_size); i++)
	{
		*(relloc + 1) = cpy[i];
	}
	free(ptr);

	return (relloc);
}
