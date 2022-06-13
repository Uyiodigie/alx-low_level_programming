#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter
 *
 * Retur: void
 */
void rev_string(char *s)
{
	int i;

	for (i = s['\0']; i > 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
