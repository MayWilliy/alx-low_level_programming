#include "lists.h"

/**
 * dlistint_len - This counts the number of elements in the linked dlistint_t list.
 * @h: head of the dlistint_t list.
 *
 * Return: This should return the number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
