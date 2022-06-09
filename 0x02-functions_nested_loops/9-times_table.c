#include "main.h"

/**
 * times_table - prints the times table
 *
 * Return: table
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			d = (i * j);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else if (cone < 9)
			_putchar((d % 10) + '0')
	
