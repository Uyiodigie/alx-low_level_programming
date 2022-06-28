#include "main.h"

/**
 * _islower - changes to lowercase
 * @c: parameter
 * Return: 0 success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
