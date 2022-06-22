#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string parameter
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		_putchar('\n');
	else
	{
		s[i] = s[i] + 1;
		_putchar(s[i]);
	}
}
