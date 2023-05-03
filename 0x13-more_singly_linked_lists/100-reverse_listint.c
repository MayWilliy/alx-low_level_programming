#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: the beginning of a linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse = NULL;
	listint_t *present = *head;
	listint_t *next = NULL;

	while (present != NULL)
	{
		next = present->next;
		present->next = reverse;
		reverse = present;
		present = next;
	}
	*head = reverse;
	return (reverse);
}
