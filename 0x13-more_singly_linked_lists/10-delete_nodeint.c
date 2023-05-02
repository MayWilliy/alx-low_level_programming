#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @index: index of linked list
 * @head: the beginning of a node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *second, *prev;
	unsigned int rn;

	if (*head == NULL)
		return (-1);

	second = *head;

	if (index == 0)
	{
		*head = second->next;
		free(second);
		return (1);
	}

	for (rn = 0; second != NULL && rn < index; rn++)
	{
		prev = second;
		second = second->next;
	}

	if (second == NULL)
		return (-1);

	prev->next = second->next;
	free(second);

	return (1);
}
