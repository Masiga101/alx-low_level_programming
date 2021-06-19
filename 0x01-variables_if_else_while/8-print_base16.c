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
	int i;

		
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		if (cha == 'a' || cha == 'b' || cha == 'c' || cha == 'd' || cha == 'e' || cha == 'f')
		{
			putchar(cha);
		}
	}
	putchar('\n');
	
	return (0);
}
