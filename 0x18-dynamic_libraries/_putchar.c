#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: character parameter
 * Return: 0 success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
