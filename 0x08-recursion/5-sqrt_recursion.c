#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer parameter
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n % 2 != 0)
		return (-1);
	else if (n % 2 == 0)
		return (1);
	else
		return (n % _sqrt_recursion(n));
}
