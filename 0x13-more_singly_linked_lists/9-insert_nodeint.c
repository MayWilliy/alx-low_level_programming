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
	listint_t *add_new_node, *tmp;
	unsigned int box;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	tmp = *head;

	for (box = 0; box < idx - 1 && tmp != NULL; box++)
		tmp = tmp->next;

	if (box != box - 1 || tmp == NULL)
		return (NULL);

	add_new_node = malloc(sizeof(listint_t));
	if (add_new_node == NULL)
		return (NULL);

	add_new_node->n =  n;
	add_new_node->next = tmp->next;
	tmp->next = add_new_node;

	return (add_new_node);
}
