#include "main.h"

/**
 * print_square - prints a square pattern
 *
 * @size: parameter
 *
 * Return: void
 */
void print_square(int size)
{
	int i = 0, j;

	if (size > 0)
	{
		while (i <= size)
		{
			j = 0;
			while (j <= i)
			{
				_putchar(35);
				j++;
			}
			_putchar(35);
			i++;
		}
	}
	else
		_putchar('\n');
}
