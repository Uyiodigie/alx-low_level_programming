#include "main.h"

/**
 * _puts - prints a string
 * @s: pointer to a string
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}
