#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers for n t0 98
 *
 * @i: integer parameter
 *
 * Return: Always 9 (Success)
 */
void print_to_98(int i)
{
	if (i < 98)
	{
		while (i < 98)
		{
			printf("%d", i);
			i++;
		}
	}
}
