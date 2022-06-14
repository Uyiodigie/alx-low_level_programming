#include "main.h"

/**
 * print_rev - reverses a string
 *
 * @s: string parameter
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 1;
	int j = 0;
	int len = 0;
	int p = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	p = len;
	while (i < len)
	{
		_putchar(s[len - 1]);
		len--;
	}
	if (p > 1)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
