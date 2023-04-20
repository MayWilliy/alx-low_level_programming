#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - given as a parameter on each element of an array
 * @size: is the size of an array
 * @action: pointer to the function
 * Return: Nothing cause it is void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

