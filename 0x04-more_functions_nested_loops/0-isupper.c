#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 *
 * Return: 0 if uppercase, 1 if otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
	return (c);
}
