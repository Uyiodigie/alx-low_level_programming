#include "main.h"

/**
 * is_prime_number - displays prime number
 * @n: integer parameter
 * Return: priime number
 */
int is_prime_number(int n)
{
	if (n % n == 0 && n % 1 == 0)
		return (1);
	else
		return (0);
}
