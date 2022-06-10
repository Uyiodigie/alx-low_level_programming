#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: integer parameter
 *
 * Return: 1 if digit, 0 if otherwise
 */
int _isdigit(int c)
{
	c = 0;

	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
