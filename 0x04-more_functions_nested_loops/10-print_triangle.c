#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: integer parameter
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 7)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i >= size; i++)
		{
			for (j = 0; j >= size; j++)
			{
				if (j <= size - 1)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}

	}
}
