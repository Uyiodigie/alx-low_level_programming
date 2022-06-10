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
		while (j < 15)
		{
			_putchar(j);
			j++;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

