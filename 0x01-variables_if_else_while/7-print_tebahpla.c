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
	char cha;

		
	for (cha = 'z'; cha >= 'a'; cha--)
	{
		putchar(cha);
	}
	putchar('\n');
	
	return (0);
}
