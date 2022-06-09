#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the value of the last digit
 *
 * @i: integer parameter
 *
 * Return: int
 */
int print_last_digit(int i)
{
	int modu = i % 10;

	printf("The last digit of %d is %d", i, modu);
	return (modu);
}
