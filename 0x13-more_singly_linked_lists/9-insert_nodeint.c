#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @idx: the index of the list where the position of the nice node will be
 * @n: the number node
 * @head: the beginning of the node
 * Return: idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add_new_node, *prev_node = NULL, *second_node = *head;
	unsigned int box;

	add_new_node = malloc(sizeof(*add_new_node));
	if (add_new_node == NULL)
		return (NULL);

	for (box = 0; second_node != NULL && box < index; box++)
	{
		prev_node = second_node;
		second_node = second_node->next;
	}
	if (box == idx)
	{
		if (prev_node == NULL)
			*head = add_new_node;
		else
			prev_node_next = add_new_node;
		add_new_node->next = second_node;
		return (add_new_node);
	}

	free(add_new_node);
	return (NULL);
}
