#include "lists.h"

/**
 * add_dnodeint_end - This adds a new node at the end of a dlistint_t list.
 * @head: the head of the dlistint_t list.
 * @n: The integer for the new node
 *
 * Return: If the function fails - NULL.
 *         Else - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *first, *last;

	first = malloc(sizeof(dlistint_t));
	if (first == NULL)
		return (NULL);

	first->n = n;
	first->next = NULL;

	if (*head == NULL)
	{
		first->prev = NULL;
		*head = first;
		return (first);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->prev = last;

	return (first);
}
