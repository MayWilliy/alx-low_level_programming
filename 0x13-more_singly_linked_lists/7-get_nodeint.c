#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index- returns the nth node of a listint_t linked list.
 * @index: the nth number of node
 * @head:the first node of linked link
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int dg;
	listint_t *middle = head;

	for (dg = 0; middle != NULL && dg < index; dg++)

		middle = middle->next;

	return (middle);
}

