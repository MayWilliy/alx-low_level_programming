#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
		j++;

	return (j);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the fist nodes
 * @str: add string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node, *temp;
	size_t _strlen = 0;

	if (str == NULL)
		_strlen = 0;

	while (str[_strlen] != '\0')
		_strlen++;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);

	add_node->str = strdup(str);
	add_node->len = _strlen;
	add_node->next = NULL;

	temp = *head;
	if (temp == NULL)
		*head = add_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = add_node;
	}

	return (*head);
}
