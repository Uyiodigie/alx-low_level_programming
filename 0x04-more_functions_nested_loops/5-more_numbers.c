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
			if (j >= 10)
				_putchar((j / 10) + 48);
			j++;
		}
		_putchar((j % 10) + 48);
		i++;
	}
	_putchar('\n');
}

