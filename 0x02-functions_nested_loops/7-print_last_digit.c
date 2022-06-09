#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the value of the last digit
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
	int modu = i % 10;

	if (i < 0)
		modu = modu * -1;

	_putchar(modu + '0');
	return (modu);
}
