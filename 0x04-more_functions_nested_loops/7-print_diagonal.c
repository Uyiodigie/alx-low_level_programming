#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: integer parameter
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;
	char line = "\\";

	if (n >= 0)
	{
		for (i = 0; i != n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 0; j < i; ++j)
			{
				_putchar(' ');
			}
		}
	}
	else
		_putchar('\n');
}
