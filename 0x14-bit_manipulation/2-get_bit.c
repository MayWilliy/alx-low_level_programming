#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number to extract the binary from
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int magicbox;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	magicbox = 1UL << index;

	return ((n & magicbox) ? 1 : 0);
}
