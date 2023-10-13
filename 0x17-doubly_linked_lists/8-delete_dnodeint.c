#include "lists.h"

/**
 * delete_dnodeint_at_index - This deletes a node from a doubly linked dlistint_t
 *                            at a given index.
 * @head: pointer to the head of the doubly linked dlistint_t.
 * @index:  index of the node to delete.
 *
 * Return: if  success should return - 1.
 *         else should return - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
