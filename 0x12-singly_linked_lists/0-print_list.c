#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to the element
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	unsigned int value = 0;


	while (ptr != NULL)
	{
		if (!(ptr->str))
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%s] %c\n", ptr->str, ptr->len);
		}
		value++;
		ptr = ptr->next;
	}
	return (value);
}
