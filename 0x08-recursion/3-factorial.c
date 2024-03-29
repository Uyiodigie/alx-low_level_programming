#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer paramter
 * Return: -1 if n is lower than 0, 0 if success
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
