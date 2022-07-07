#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - sums up its parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;

	if (n == 0)
		return;
	for (i = 0; i < n; i++)
		n += n[i];
	return (n);
}
