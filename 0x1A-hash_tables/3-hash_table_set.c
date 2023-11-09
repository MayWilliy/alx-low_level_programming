#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - Adds a value to the hash table
 * @key: key of the value to be added
 * @ht: The reference hash table
 * @value: Value to be added
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *hd = NULL, *new = NULL;

	if (!ht || !key || strcmp(key, "") == 0)
	{
		return (0);
	}
	i = key_index((unsigned char *)key, ht->size);
	hd = ht->array[i];
	if (hd && strcmp(key, hd->key) == 0)
	{
		free(hd->value);
		hd->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
