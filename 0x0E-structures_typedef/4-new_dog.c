#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name : dup the name of dog into new_dog name
 * @age: dup the age of dog into new_dog age
 * @owner: dup the owner into new_dog owner
 * Return: NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);

	new_dog->age = age;

	return (new_dog);
}
