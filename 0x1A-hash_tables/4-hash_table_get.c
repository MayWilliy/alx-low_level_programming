#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - Get a value for a key
 * @ht: Reference hash table
 * @key: Key whose value is to be gotten
 * Return: The value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *hd = NULL;

	if (!ht || !key)
		return (NULL);
	i = key_index((unsigned char *) key, ht->size);
	hd = ht->array[i];

	if (!hd)
	{
		return (NULL);
	}
	while (strcmp(key, hd->key) != 0)
	{
		hd = hd->next;
	}
	return (hd->value);
}
