#include "main.h"

/**
 * _memcpy - cop n byte from memory area src to dest
 *
 * @n: number of memory btye to copy
 * @src: pointer to source memory
 * @dest: pointer to destination memory
 *
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n < i; i++)
	{
		*(dest++) = *(src++);
	}
	return (dest);
}
