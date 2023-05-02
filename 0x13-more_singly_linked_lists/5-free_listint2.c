#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: the first node
 * Return: nothing cuase it void
 */
void free_listint2(listint_t **head)
{
	listint_t *middle;

	if (head == NULL)
		return;

	while (*head  != NULL)
	{
		middle = *head;
		*head = (*head)->next;
		free(middle);
	}
}
