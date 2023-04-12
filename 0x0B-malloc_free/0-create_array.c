#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars
 * @size: size of the array to craete
 * @c: character to initailiaze the array with
 *
 * Return: NULL, pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);

}
