#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - print all the elements of a listint_t list
 * @h : pointer
 * Return:the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	unsigned int value = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		value++;
	}

	return (value);
}
