#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @: pointer to the string of 1
 * Return: the converted number of prototype
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (1 = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		num = 2 * num + (b[i] - '0');
	}
	return (num);
}
