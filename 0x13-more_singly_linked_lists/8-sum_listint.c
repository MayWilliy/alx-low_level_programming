#include "lists.h"
#include <stdio.h>

/**
 * sum_listint- the sum of all the data (n) of a listint_t linked list
 * @head: the first node
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
