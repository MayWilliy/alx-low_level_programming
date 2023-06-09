#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: pointer
 * Return: 0 (Success)
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name)
			free(d->name);

		if (d->owner)
			free(d->owner);
	}

	free(d);
}

