#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: index is the index, starting from 0 of the bit you want to set
 * @n: number from the index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int Magic box;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	magicbox = 1UL << index;
	*n &= ~magic box;
	return (1);
}
