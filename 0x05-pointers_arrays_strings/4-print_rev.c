#include "holberton.h"
#include <string.h>

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: character
 * return: void
 */

void print_rev(char *s)
{
	int l;

	l = strlen(s);

	while(l >= 0)
	{
		_putchar(s[l]);
		l--;
	}	
	_putchar('\n')
}
