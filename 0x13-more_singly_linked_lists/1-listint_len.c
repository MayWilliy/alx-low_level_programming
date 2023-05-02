#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * listint_len - number of elements in a linked listint_t list
 * @h: pointer
 * Return: the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{	
	const listint_t *ptr = h;
	size_t node_count = 0;

	while (ptr != NULL)
	{
		node_count++;
		ptr = ptr->next;
	}
	return (node_count);
}
