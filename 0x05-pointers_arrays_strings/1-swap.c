#include "holberton.h"

/**
 * swap_int - Swap the value of the argument in a and b
 * @a: an integer
 * @b: an integer
 * return: void
 */


void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
