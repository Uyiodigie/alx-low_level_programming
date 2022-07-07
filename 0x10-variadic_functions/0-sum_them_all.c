#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - sums up its parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int add = 0;

	if (n == 0)
		return (0);
	va_start(valist, n);
	for (i = 0; i < n; i++)
		add += va_arg(valist, int);
	va_end(valist);
	return (add);
}
