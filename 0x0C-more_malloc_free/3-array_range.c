#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range- creates an array of integers
 * @min: value for array
 * @max: value for array
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[1] = min + 1;
	}

	return (array);
}
