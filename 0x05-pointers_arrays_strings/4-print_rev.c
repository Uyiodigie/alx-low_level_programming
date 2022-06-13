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
	int i;

	for (i = s['\0']; i > 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
