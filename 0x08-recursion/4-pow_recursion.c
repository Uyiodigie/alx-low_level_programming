#include "main.h"

/**
 * _pow_recursion - returns the value of x raided to the power of y
 * @x: integer parameter
 * @y: integer parameter
 * Return: =1 if y is less that 0, 0 if success
 */
int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
