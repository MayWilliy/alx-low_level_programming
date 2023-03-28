#include "main.h"

/**
 * swap_int- swap the values of two integers
 *
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
