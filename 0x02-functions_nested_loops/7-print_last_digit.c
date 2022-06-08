#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the value of the last digit
 *
 * @i: integer parameter
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
	int modu = i % 10;

	if (i > 0)
		_putchar(modu);
	return (0);
}
