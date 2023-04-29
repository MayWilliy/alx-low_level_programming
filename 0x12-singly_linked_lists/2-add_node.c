#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @str: string
 * @head: the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	if (head && str)
	{
		list_t *new_node = (list_t *)malloc(sizeof(list_t));

		if (!new_node)
		{
			return (NULL);
		}
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	return (0);
}
