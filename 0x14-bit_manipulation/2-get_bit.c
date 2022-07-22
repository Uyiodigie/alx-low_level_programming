#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long integer parameter
 * @index: pointion of the integer
 * Return: value of the bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val = 1;

	if (index > sizeof(n) * 8)
		return (-1);
	val <<= index;
	if (val & n)
		return (1);
	else
		return (0);
}
