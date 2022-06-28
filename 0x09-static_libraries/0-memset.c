#include "main.h"

/**
 * _memset - fills memory
 * @s: target
 * @b: constant byte
 * @n: size
 * Return: valuse of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
