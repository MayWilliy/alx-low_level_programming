#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: the start of a node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *present, *stop;

	if (!head)
		exit(98);

	present = head;
	while (present != NULL)
	{
		stop = present;
		present = present->next;
		count++;
		printf("[%p] %d\n", (void *)stop, stop->n);

		if (stop < present)
		{
			printf("[%p] %d\n", (void *)present, present->n);
			break;
		}

	}

	return (count);
}

