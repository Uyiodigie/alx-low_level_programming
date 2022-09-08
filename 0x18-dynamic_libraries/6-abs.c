#include "main.h"

/**
 * _abs - finds the absolute value of the integer
 * @n: integer parameter
 * Return: 0 success
 */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}
