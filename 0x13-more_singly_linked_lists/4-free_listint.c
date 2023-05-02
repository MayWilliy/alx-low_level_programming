#include "lists.h"
#include <stdio.h>
#include <stdio.h>

/**
 * free_listint - frees a listint_t list
 * @head: first node
 * Return: Nothing void
 */
void free_listint(listint_t *head)
{
	listint_t *middle = head;

	while (middle != NULL)
	{
		listint_t *next = middle->next;

		free(middle);
		middle = next;
	}

}
