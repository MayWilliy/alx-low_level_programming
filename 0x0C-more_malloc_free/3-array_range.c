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
	int t = min;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc((max - min + 1) * sizeof(int));

	if (!array)
	{
		return (0);
	}

	while (i <= max - min)
	{
		array[i++] = t++;
	}

	return (array);
}
