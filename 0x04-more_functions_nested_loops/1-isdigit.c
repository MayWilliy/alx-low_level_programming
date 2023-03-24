#include "main.h"

/**
 ** 1-isdigit.c - check for digits
 *
 *	* @c: check through digit for c parameter
 *
 *	* Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
		}
	else
	{
		return (0);
		}
}
