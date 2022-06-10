#include "main.h"

/**
 * more_numbers - prints 10 times of numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j);
			j++;
			j = j + 1;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

