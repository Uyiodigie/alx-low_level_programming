#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string parameter
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		s = s + 1;
		_putchar(*s);
	}
}
