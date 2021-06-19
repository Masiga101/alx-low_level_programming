#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int cha;

		
	for (cha = 0; cha <= 9; cha++)
	{
		putchar(cha + '0');
	}
	putchar('\n');
	
	return (0);
}
