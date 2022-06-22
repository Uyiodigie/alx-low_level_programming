#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string pointer
 */
void _print_rev_recursion(char *s)
{
	if (!(*s))
		break;
	else
	{
		_print_rev_recursion(s - 1);
		_putchar(*s);
	}
}
