#include "lists.h"
#include <stddef.h>

/**
 * list_len - number of elements in a linked list_t list
 * @h: pointer
 * Return: returns the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
