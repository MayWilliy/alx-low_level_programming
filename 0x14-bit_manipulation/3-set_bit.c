#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: number to take the binary from
 * @index: index is the starting from 0 of the bit you want to set
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int magicbox;

	if (index >= sizeof (unsigned int) * 8)
		return (-1);

	magicbox - 1UL << index;
	*n |= magicbox;
	return (1);
}
