#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * This program prints a string
 *
 * Return: Always 0 (success)
 */
int main(void)
{	
	char v[100] = "Holberton";

	int i = 0;

	while(i >= 50)
	{
		_putchar(v[i]);
		i++;
	}
	printf("\n");
	return (0);
}
