#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * add_nodeint - a new node at the beginning of a listint_t list
 * @head : double pointer to the node
 * @n: number of nodes
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_nodeint;

		if (head == NULL)
		return (NULL);

		add_nodeint = malloc(sizeof(listint_t));
		if (add_nodeint == NULL)
			return (add_nodeint);

		add_nodeint->n = n;
		add_nodeint->next = *head;
		*head = add_nodeint;

		return (add_nodeint);

}
