#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @c: character
 * @i: integer
 * @f: float
 * @s: char*
 * Return: Nothing cause it void
 */
void print_all(const char * const format, ...)
{

