#include "main.h"

/**
 * _isupper - checks for upper case
 * @c: integer parameter
 * Return: 0 success
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c < 'Z'))
		return (1);
	return (0);
}
