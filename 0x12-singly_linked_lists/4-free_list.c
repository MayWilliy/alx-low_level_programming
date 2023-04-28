#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - function that frees a list_t lis
 * @head: pointer to the first node
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *second;

	while (head != NULL)
	{
		second = head;
		head = head->next;
		free(second->str);
		free(second);
	}
}
