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
	char str[] = "Hello World";
	int i;

	for (i = str['\0']; i > 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}
