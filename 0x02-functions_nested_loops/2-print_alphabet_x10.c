#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i < 10)
	{
		j = 'a';
		while (j < 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');

		i++;
	}
}
