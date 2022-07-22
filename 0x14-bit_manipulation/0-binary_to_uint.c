#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to char string
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int check = 1;
	int x;

	if (b == NULL)
		return (0);
	x = 0;
	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		i <<= 1;
		if (b[x] == '1')
			i ^= check;
		x++;
	}
	return (i);
}
