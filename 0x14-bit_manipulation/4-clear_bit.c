#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the unsigned long int value
 * @index: unsigned int index
 * Return: 1 if sucessful, -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (index > 63)
		return (-1);
	i <<= index;
	if (*n & i)
		*n ^= i;
	return (1);
}
