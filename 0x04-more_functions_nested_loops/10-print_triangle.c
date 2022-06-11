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

	if (size > 0)
	{
		for (i = 0; i >= size; --i)
		{
			for (j = 0; j >= size; --j)
				_putchar('#');

			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
