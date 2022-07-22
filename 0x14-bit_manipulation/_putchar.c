#include <unistd.h>

/**
 * _putchar.c - prints a character to the steout
 * @c: character
 * return: character
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
