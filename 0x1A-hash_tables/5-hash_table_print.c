#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: Reference hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n = NULL;
	unsigned int idx = 0;
	short pr_commas = 0;

	if (!ht)
		return;
	printf("{");
	for (; idx < ht->size; ++idx)
	{
		n = ht->array[idx];
		while (n)
		{
			if (pr_commas == 1)
			{
				printf(", ");
			}
			pr_commas = 1;
			printf("'%s': '%s'", (char *)n->key, (char *)n->value);
			n = n->next;
		}
	}
	printf("}\n");
}
