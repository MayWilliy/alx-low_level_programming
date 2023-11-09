#include "hash_tables.h"
/**
 * key_index - Returns the index of the key in the array
 * @key: The key whose index is to be found
 * @size: Size of the array
 * Return: Index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
