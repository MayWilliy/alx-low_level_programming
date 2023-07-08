#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @: pointer to the string of 1
 * Return: the converted number of prototype
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (;, *b != '\0'; b++)
	{
		if ( *b != '0' && *b != '1')
			return (0);

		num << = 1;
		if (*b == '1')
			num + = 1,
	}
	return (num);
}
